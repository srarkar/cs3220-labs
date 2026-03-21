module alu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 4
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output [DATA_WIDTH-1:0] o_data,
    output                  o_overflow,
    output                  o_valid
);

reg [DATA_WIDTH-1:0] r_data;
reg r_valid;
reg r_overflow;

// Temporaries for intermediate calcs
reg [63:0] mult_temp;
reg signed [63:0] mult_temp_s;
reg signed [31:0] tmp_sub;
reg [DATA_WIDTH-1:0] tmp;
reg [DATA_WIDTH:0] temp;

integer i;

always @(posedge i_clk or negedge i_rst_n) begin
    if (!i_rst_n) begin
        r_data <= 0;
        r_valid <= 0;
        r_overflow <= 0;
    end else begin
        if (i_valid) begin
            case (i_inst)
            4'd0: begin // correct
                tmp_sub = $signed(i_data_a) + $signed(i_data_b);
                r_data <= tmp_sub;
                r_overflow <= (~(i_data_a[31] ^ i_data_b[31])) & (i_data_a[31] ^ tmp_sub[31]);
                r_valid <= 1;
            end
            4'd1: begin
                tmp_sub = $signed(i_data_a) - $signed(i_data_b);
                r_data <= tmp_sub;
                r_overflow <= (i_data_a[31] != i_data_b[31]) && (tmp_sub[31] != i_data_a[31]);
                r_valid <= 1;
            end
            4'd2: begin
                mult_temp_s = $signed(i_data_a) * $signed(i_data_b);
                r_data <= mult_temp_s[31:0];
                r_overflow <= (mult_temp_s[63:32] != {32{mult_temp_s[31]}});
                r_valid <= 1;
            end
            4'd3: begin 
               r_data <= $signed(i_data_a) < $signed(i_data_b) ? i_data_b : i_data_a;
               r_overflow <= 1'b0;
               r_valid <= 1;
            end
            4'd4: begin
                r_data <= $signed(i_data_a) > $signed(i_data_b) ? i_data_b : i_data_a;
                r_overflow <= 1'b0;
                r_valid <= 1;
            end
            4'd5: begin 
                temp = {1'b0, $unsigned(i_data_a)} + {1'b0, $unsigned(i_data_b)};
                r_data <= temp[31:0];
                r_overflow <= temp[32];
                r_valid <= 1;
            end
            4'd6: begin
                temp = {1'b0, $unsigned(i_data_a)} - $unsigned(i_data_b);
                r_data <= temp[31:0];
                r_overflow <= temp[32];
                r_valid <= 1;
            end
            4'd7: begin
                mult_temp = {32'b0, i_data_a} * {32'b0, i_data_b};
                r_data <= mult_temp[31:0];
                r_overflow <= |mult_temp[63:32];
                r_valid <= 1;
            end
            4'd8: begin
                r_data <= i_data_a < i_data_b ? i_data_b : i_data_a;
                r_overflow <= 1'b0;
                r_valid <= 1;
            end
            4'd9: begin
                r_data <= i_data_a > i_data_b ? i_data_b : i_data_a;
                r_overflow <= 1'b0;
                r_valid <= 1;
            end
            4'd10: begin
                r_data <= i_data_a & i_data_b;
                r_overflow <= 1'b0;
                r_valid <= 1;
            end
            4'd11: begin
                r_data <= i_data_a | i_data_b;
                r_overflow <= 1'b0;
                r_valid <= 1;
            end
            4'd12: begin
                r_data <= i_data_a ^ i_data_b;
                r_overflow <= 1'b0;
                r_valid <= 1;
            end
            4'd13: begin
                r_data <= ~i_data_a;
                r_overflow <= 1'b0;
                r_valid <= 1;
            end
            4'd14: begin
                for (i = 0; i < DATA_WIDTH; i = i + 1)
                    tmp[i] = i_data_a[DATA_WIDTH-1-i];
                r_data <= tmp;
                r_overflow <= 1'b0;
                r_valid <= 1;
            end
            default: begin
                r_data <= 0;
                r_overflow <= 0;
                r_valid <= 0;
            end
            endcase
        end else begin
            r_valid <= 0;
        end
    end
end

    assign o_data = r_data;
    assign o_valid = r_valid;
    assign o_overflow = r_overflow;

endmodule

