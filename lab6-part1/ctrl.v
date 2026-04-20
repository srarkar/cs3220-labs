module ctrl #(
    parameter IN_WIDTH = 8,
    parameter OUT_WIDTH = 16,
    parameter ROWS = 4,
    parameter COLS = 4,
    parameter MULT_LAT = 1,
    parameter ACC_LAT = 1
)(
    input clk,
    input rst,
    input input_rst_accumulator,
    input input_stream_out_rdy,
    output [COLS-1:0] rst_accumulator,
    output [COLS-1:0] stream_out_rdy
);

    //TODO: Signal declarations
    // Total shift register length needed to cover the longest delay:
    //   rst_accumulator[COLS-1] needs MULT_LAT + (COLS-1) cycles
    //   stream_out_rdy needs MULT_LAT + COLS + 1 cycles (longest)
    localparam TOTAL_DELAY = MULT_LAT + COLS + 1;
 
    // shift_reg[k] holds the input value from k+1 clock edges ago.
    reg [TOTAL_DELAY-1:0] rst_shift;
    reg [TOTAL_DELAY-1:0] stream_shift;
    
    //TODO: Rst and stream out rdy signal propagation and synchronization logic among different MAC units
    always @(posedge clk) begin
        if (rst) begin
            rst_shift    <= {TOTAL_DELAY{1'b0}};
            stream_shift <= {TOTAL_DELAY{1'b0}};
        end else begin
            // Shift left: new input enters at bit 0
            rst_shift    <= {rst_shift   [TOTAL_DELAY-2:0], input_rst_accumulator};
            stream_shift <= {stream_shift[TOTAL_DELAY-2:0], input_stream_out_rdy};
        end
    end
 
    genvar j;
    generate
        for (j = 0; j < COLS; j = j + 1) begin : gen_col
            // rst_accumulator[j]: delay = MULT_LAT + j  →  index = MULT_LAT + j - 1
            assign rst_accumulator[j] = rst_shift[MULT_LAT + j - 1];
 
            // stream_out_rdy[j]: delay = MULT_LAT + COLS + 1  →  index = MULT_LAT + COLS
            assign stream_out_rdy[j]  = stream_shift[MULT_LAT + COLS];
        end
    endgenerate


    



endmodule