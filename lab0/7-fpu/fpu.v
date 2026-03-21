module fpu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 1,
    parameter EXP_WIDTH = 8,
    parameter FRAC_WIDTH = 23
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output [DATA_WIDTH-1:0] o_data,
    output                  o_valid
);

reg [DATA_WIDTH-1:0] r_data;
reg r_valid;

reg r_sign_a;
reg [EXP_WIDTH-1:0] r_exponent_a;
reg [FRAC_WIDTH-1:0] r_fraction_a;
reg [FRAC_WIDTH:0] r_mantissa_a;
reg [29:0] r_mantissa_a_add;

reg r_sign_b;
reg [EXP_WIDTH-1:0] r_exponent_b;
reg [FRAC_WIDTH-1:0] r_fraction_b;
reg [FRAC_WIDTH:0] r_mantissa_b;
reg [29:0] r_mantissa_b_add;

reg shifted_out;
reg r_mantissa_larger; // 0 is a, 1 is b

reg r_sign;
reg [EXP_WIDTH:0] r_exponent_sum;
reg [47:0] r_mantissa_add;
reg [47:0] r_mantissa_prod;
reg [30:0] r_mantissa_sum;

reg [EXP_WIDTH - 1:0] shift;

reg [23:0] mantissa_with_hidden;
reg G, R, S;

reg is_zero;
reg do_add;

integer i;

/*
IEEE Addition (Rohan)
Convert both inputs to a 278-bit fixed point number and add them up. 
Then, rounding becomes much simpler; after you identify the 24 bits (counting the implicit 1) in the sum that correspond to the mantissa,
    look at the remaining bits that form the rest of the fractional component.
If the most significant of the remaining bits is 1 and either 
    (a) any less significant bit is 1 or (b) the least significant bit of the mantissa is 1,
        then add 1 to the mantissa.
*/

/*
IEEE Addition (Expected Approach)
    adding two numbers. we want to combine the significand, but they may have different exponents
    bit shift the significand of the lesser exponent to the right (to increment lesser) to make the exponents equal
    add the significands
    if result of addition leads to a non-normalized significand (i.e. NOT 1._____) then shift it right and increment exponent
    now, the normalized result can contain additional bits
    the R bit is the bit immediately after the normalized result
    the S bit is the OR of all the other additional bits  
    What to do based on the value of RS:
        RS = 00 ➔ Result is Exact, no need for rounding
        RS = 01 ➔ Truncate result by discarding RS
        RS = 11 ➔ Increment result: ADD 1 to last fraction bit
        RS = 10 ➔ Tie Case (either truncate or increment result)
    If the last fraction bit (the bit to the immediate left of the R bit) is 0 then truncate result to keep fraction even 
*/


/*
IEEE Multiplication (numeral systems website)
    - Convert exponents to decimal numbers
    - Prepend implicit 1 to mantissas
    - Determine sign
    - Add exponents and subtract bias
    - Multiply mantissas
    - Normalization
    - Rounding
    - Convert exponent to binary number
    - Assemble floating point number
*/

always @(posedge i_clk or negedge i_rst_n) begin
    if (!i_rst_n) begin
        r_data <= 0;
        r_valid <= 0;

        r_sign_a <= 0;
        r_exponent_a <= 0;
        r_fraction_a <= 0;
        r_mantissa_a <= 0;

        r_sign_b <= 0;
        r_exponent_b <= 0;
        r_fraction_b <= 0;
        r_mantissa_b <= 0; 

        r_mantissa_larger <= 0;

        r_sign <= 0;
        r_exponent_sum <= 0;
        r_mantissa_prod <= 0;
        r_mantissa_add <= 0;
        shift <= 0;

        r_mantissa_sum <= 0;

        mantissa_with_hidden <= 0;
        G <= 0; R <= 0; S <= 0;
        is_zero <= 0;
        do_add <= 0;

        shifted_out <= 0;
    end else begin
        if (i_valid) begin
            case(i_inst)
                1'd0: begin
                    // extract sign, exponent, fraction
                    r_sign_a = i_data_a[31];
                    r_exponent_a = i_data_a[30:23];
                    r_fraction_a = i_data_a[22:0];
                    r_mantissa_a_add = {1'b1, r_fraction_a, 6'b0};

                    r_sign_b = i_data_b[31];
                    r_exponent_b = i_data_b[30:23];
                    r_fraction_b = i_data_b[22:0];
                    r_mantissa_b_add = {1'b1, r_fraction_b, 6'b0};

                    is_zero = 0;
                    r_mantissa_larger = 0;
                    shifted_out = 0;

                    // determine operation & result sign
                    if (r_sign_a == r_sign_b) begin
                        do_add = 1;
                        r_sign = r_sign_a;
                    end else begin
                        do_add = 0;
                        if (r_exponent_a > r_exponent_b || (r_exponent_a == r_exponent_b && r_fraction_a >= r_fraction_b)) begin
                            r_sign = r_sign_a;
                            r_mantissa_larger = 0;
                        end else begin
                            r_sign = r_sign_b;
                            r_mantissa_larger = 1;
                        end
                    end

                    // align exponents
                    if (r_exponent_a > r_exponent_b) begin
                        shift = r_exponent_a - r_exponent_b;
                        shifted_out = 0;
                        for (i = 0; i < shift && i < 30; i = i + 1)
                            shifted_out |= r_mantissa_b_add[i];
                        r_mantissa_b_add = r_mantissa_b_add >> shift;
                        r_exponent_sum = r_exponent_a;
                    end else begin
                        shift = r_exponent_b - r_exponent_a;
                        shifted_out = 0;
                        for (i = 0; i < shift && i < 30; i = i + 1)
                            shifted_out |= r_mantissa_a_add[i];
                        r_mantissa_a_add = r_mantissa_a_add >> shift;
                        r_exponent_sum = r_exponent_b;
                    end

                    // add or subtract
                    if (do_add)
                        r_mantissa_sum = r_mantissa_a_add + r_mantissa_b_add;
                    else
                        r_mantissa_sum = (!r_mantissa_larger) ? (r_mantissa_a_add - r_mantissa_b_add)
                                                            : (r_mantissa_b_add - r_mantissa_a_add);

                    // handle zero result
                    if (r_mantissa_sum == 0) begin
                        r_data <= 0;
                        r_valid <= 1;
                    end else begin
                        // normalize
                        // Too large: 1x.xxxxx → shift right
                        if (r_mantissa_sum[30]) begin
                            r_mantissa_sum = r_mantissa_sum >> 1;
                            r_exponent_sum = r_exponent_sum + 1;
                        end
                        // Too small: 0.1xxxxx → shift left
                        else begin
                            while (!r_mantissa_sum[29] && r_exponent_sum > 0) begin
                                r_mantissa_sum = r_mantissa_sum << 1;
                                r_exponent_sum = r_exponent_sum - 1;
                            end
                        end

                        // rounding: R = bit 6, S = OR of bits 5:0
                        R = r_mantissa_sum[5];
                        S = (|r_mantissa_sum[4:0]) | shifted_out;

                        if (R & S) begin
                            r_mantissa_sum = r_mantissa_sum + (1 << 6);
                        end

                        if (r_mantissa_sum[30]) begin
                            r_mantissa_sum = r_mantissa_sum >> 1;
                            r_exponent_sum = r_exponent_sum + 1;
                        end

                        if (r_mantissa_sum[30]) begin
                            r_mantissa_sum = r_mantissa_sum >> 1;
                            r_exponent_sum = r_exponent_sum + 1;
                        end else if (!r_mantissa_sum[29]) begin
                            while (!r_mantissa_sum[29] && r_exponent_sum > 0) begin
                                r_mantissa_sum = r_mantissa_sum << 1;
                                r_exponent_sum = r_exponent_sum - 1;
                            end
                        end
                        // pack result directly from r_mantissa_sum
                        r_data = {r_sign, r_exponent_sum[7:0], r_mantissa_sum[28:6]};
                        r_valid <= 1;
                    end
                end


                1'd1: begin // i_data_a * i_data_b (single precision floating point)
                    is_zero = 0;
                    r_sign_a = i_data_a[31];
                    r_exponent_a = i_data_a[30:23];
                    r_fraction_a = i_data_a[22:0];
                    r_mantissa_a = {1'b1, r_fraction_a};

                    r_sign_b = i_data_b[31];
                    r_exponent_b = i_data_b[30:23];
                    r_fraction_b = i_data_b[22:0];
                    r_mantissa_b = {1'b1, r_fraction_b};

                    r_sign = r_sign_a ^ r_sign_b;
                    r_exponent_sum = r_exponent_a + r_exponent_b - 127;
                    //r_mantissa_prod = {24'b0, r_mantissa_a} * {24'b0, r_mantissa_b};
                    r_mantissa_prod = r_mantissa_a * r_mantissa_a;

                    if (r_mantissa_prod[47]) begin 
                        r_mantissa_prod = r_mantissa_prod >> 1;
                        r_exponent_sum = r_exponent_sum + 1;
                    end

                    if ($signed(r_exponent_sum) <= 0) begin
                        r_exponent_sum = 0;
                        mantissa_with_hidden = 0;
                        is_zero = 1;
                    end

                    if (r_exponent_sum <= 0 || r_mantissa_prod[46:23] == 0) begin
                        r_exponent_sum = 0;
                        mantissa_with_hidden = 0;
                        is_zero = 1;
                    end else begin
                        mantissa_with_hidden = r_mantissa_prod[46:23];
                        R = r_mantissa_prod[22];          // Round bit
                        S = |r_mantissa_prod[21:0];       // Sticky bit: OR of all lower bits

                        // Round-to-nearest-even (RS)
                        if (R & (S | mantissa_with_hidden[0])) begin
                            mantissa_with_hidden = mantissa_with_hidden + 1;

                            // handle overflow into implicit bit
                            if (mantissa_with_hidden[23]) begin
                                mantissa_with_hidden >>= 1;
                                r_exponent_sum = r_exponent_sum + 1;
                            end
                        end
                    end
                    if (is_zero || i_data_a[31:0] == 0 || i_data_b[31:0] == 0)
                        r_data <= 0;
                    else
                        r_data <= {r_sign, r_exponent_sum[7:0], mantissa_with_hidden[22:0]};
                    r_valid <= 1; // change to 1 once testing is done
                end
                default: begin
                    r_data <= 0;
                    r_valid <= 0;
                end
            endcase
        end else begin
            r_data <= 0;
            r_valid <= 0;
        end
    end
        
end
    
    assign o_data = r_data;
    assign o_valid = r_valid;

endmodule