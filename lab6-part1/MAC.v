module mac #(
    parameter IN_WIDTH = 8,
    parameter IN_FRAC = 0,
    parameter OUT_WIDTH = 8,
    parameter OUT_FRAC = 0,
    parameter MULT_LAT = 3,
    parameter ADD_LAT = 1,
    parameter K = 1,
    parameter ROWS = 1,
    parameter COLS = 1,
    parameter COLS_IDX = 1,
    parameter ROWS_IDX = 1
)(
    input                      clk,
    input                      rst,
    input                      rst_accumulator_in,
    input                      stream_out_rdy_in,
    input       [IN_WIDTH-1:0] row_data_in,
    input       [IN_WIDTH-1:0] col_data_in,
    input       [IN_WIDTH-1:0] bypass_data_in, 
    output reg  [IN_WIDTH-1:0] row_data_out,
    output reg  [IN_WIDTH-1:0] col_data_out,
    output reg                 rst_accumulator_out,
    output reg                 stream_out_rdy_out,
    output reg [OUT_WIDTH-1:0] psum_out
);


    //TODO: Signal declarations

    // Number of delay registers after the accumulator before the output mux.
    // Rightmost column (COLS_IDX = COLS-1) needs 0 extra stages; leftmost needs COLS-1.
    // This equalises arrival time so all columns are ready simultaneously when
    // stream_out_rdy_in fires and the bypass chain collects results right-to-left.
    localparam DELAY_STAGES = COLS - 1 - COLS_IDX;

    wire [OUT_WIDTH-1:0] mult_out;
    wire [OUT_WIDTH-1:0] adder_out;

    // adder_b: feed zero when rst_accumulator_in is high so the first product
    // starts a fresh accumulation rather than adding to stale state.
    wire [OUT_WIDTH-1:0] adder_b = rst_accumulator_in ? {OUT_WIDTH{1'b0}} : adder_out;


    //TODO: multiplier instantiation

    multiplier #(
        .INPUT_A_WIDTH (IN_WIDTH),
        .INPUT_B_WIDTH (IN_WIDTH),
        .INPUT_A_FRAC  (IN_FRAC),
        .INPUT_B_FRAC  (IN_FRAC),
        .OUTPUT_WIDTH  (OUT_WIDTH),
        .OUTPUT_FRAC   (OUT_FRAC),
        .DELAY         (MULT_LAT)
    ) mult_inst (
        .clk   (clk),
        .reset (rst),
        .en    (1'b1),
        .stall (1'b0),
        .a_in  (row_data_in),
        .b_in  (col_data_in),
        .out   (mult_out),
        .done  ()
    );


    //TODO: adder instantiation

    adder #(
        .INPUT_A_WIDTH (OUT_WIDTH),
        .INPUT_A_FRAC  (OUT_FRAC),
        .INPUT_B_WIDTH (OUT_WIDTH),
        .INPUT_B_FRAC  (OUT_FRAC),
        .OUTPUT_WIDTH  (OUT_WIDTH),
        .OUTPUT_FRAC   (OUT_FRAC),
        .DELAY         (1)
    ) adder_inst (
        .clk   (clk),
        .reset (rst),
        .en    (1'b1),
        .stall (1'b0),
        .a_in  (mult_out),
        .b_in  (adder_b),
        .out   (adder_out),
        .done  ()
    );


    //TODO: signal propagation and synchronization
    //Major approaches to look out for:
    // 1. rst_accumulator and stream_out_rdy are major control signals that dictates the flow of the data and when to reset the accumulator between different matrix multiplications
    // 2. An important part of the following design is to figure out how the data from multipliers and adders should be paired with the above two control signals
    // 3. Mainly you need to know: should I pass the results of this very own MAC's accumulator to the next MAC's accumulator or should I pass the results of the previous MAC's accumulator to this MAC's accumulator and when to do so
    // 4. Also, when should be the exact time point to reset the accumulator so my current results will not be cleared by mistake and the next matrix multiplication can start cleanly.

    // Systolic data propagation: row and col data each delay 1 cycle to the next MAC.
    always @(posedge clk) begin
        if (rst) begin
            row_data_out <= {IN_WIDTH{1'b0}};
            col_data_out <= {IN_WIDTH{1'b0}};
        end else begin
            row_data_out <= row_data_in;
            col_data_out <= col_data_in;
        end
    end

    // Control signal propagation: 1-cycle delay down to the next row.
    always @(posedge clk) begin
        if (rst) begin
            rst_accumulator_out <= 1'b0;
            stream_out_rdy_out  <= 1'b0;
        end else begin
            rst_accumulator_out <= rst_accumulator_in;
            stream_out_rdy_out  <= stream_out_rdy_in;
        end
    end

    // Output delay chain and bypass mux.
    // The delay chain keeps adder_out shifting so that when stream_out_rdy_in
    // fires the result is pre-positioned at the mux input.
    // psum_out:
    //   stream_out_rdy_in = 1 -> capture own delayed accumulator result
    //   stream_out_rdy_in = 0 -> pass bypass_data_in from the MAC to the right
    generate
        if (DELAY_STAGES == 0) begin : gen_no_delay
            always @(posedge clk) begin
                if (rst)
                    psum_out <= {OUT_WIDTH{1'b0}};
                else if (stream_out_rdy_in)
                    psum_out <= adder_out;
                else
                    psum_out <= bypass_data_in;
            end
        end else begin : gen_delay
            reg [OUT_WIDTH-1:0] delay_chain [0:DELAY_STAGES-1];

            genvar k;
            for (k = 0; k < DELAY_STAGES; k = k + 1) begin : delay_stage
                always @(posedge clk) begin
                    if (rst)
                        delay_chain[k] <= {OUT_WIDTH{1'b0}};
                    else if (k == 0)
                        delay_chain[0] <= adder_out;
                    else
                        delay_chain[k] <= delay_chain[k-1];
                end
            end

            always @(posedge clk) begin
                if (rst)
                    psum_out <= {OUT_WIDTH{1'b0}};
                else if (stream_out_rdy_in)
                    psum_out <= delay_chain[DELAY_STAGES-1];
                else
                    psum_out <= bypass_data_in;
            end
        end
    endgenerate


endmodule