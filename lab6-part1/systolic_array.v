module systolic_array #(
    parameter IN_WIDTH          = 8,
    parameter IN_FRAC           = 0,
    parameter OUT_WIDTH         = 8,
    parameter OUT_FRAC          = 0,
    parameter MULT_LAT          = 3,                 // Multiplication latency
    parameter ACC_LAT           = 1,                 // Addition latency (<=1, not support pipelined acc)
    parameter ROWS              = 4,                 // Row number of systolic array
    parameter K                 = 4,
    parameter COLS              = 4                  // Column number of systolic array
)(
    input                       clk,
    input                       rst_in,
    input                       rst_accumulator_rdy_in, // If 1, reset accumulator in array
    input                       stream_out_rdy_in_in,      // If 1, stream acc result out

    input [IN_WIDTH*ROWS-1:0]   row_data_in_in,         
    input [IN_WIDTH*COLS-1:0]   col_data_in_in,         
    output [OUT_WIDTH*ROWS-1:0] row_data_out
);
    //TODO: Signal declarations
    // register inputs // something todo with verilator timing issue
    reg       rst;
    reg       rst_accumulator_rdy;
    reg       stream_out_rdy;
    reg [IN_WIDTH*ROWS-1:0] row_data_in;
    reg [IN_WIDTH*COLS-1:0] col_data_in;

    always @(posedge clk) begin
        rst                 <= rst_in;
        rst_accumulator_rdy <= rst_accumulator_rdy_in;
        stream_out_rdy      <= stream_out_rdy_in_in;
        row_data_in         <= row_data_in_in;
        col_data_in         <= col_data_in_in;
    end

    // Inter-MAC wires, flattened: index = r*COLS + j
    wire [IN_WIDTH-1:0]  mac_row_out  [0:ROWS*COLS-1];
    wire [IN_WIDTH-1:0]  mac_col_out  [0:ROWS*COLS-1];
    wire [OUT_WIDTH-1:0] mac_psum     [0:ROWS*COLS-1];
    wire                 mac_rst_out  [0:ROWS*COLS-1];
    wire                 mac_srdy_out [0:ROWS*COLS-1];

    // Per-column control signals from ctrl
    wire [COLS-1:0] ctrl_rst_acc;
    wire [COLS-1:0] ctrl_stream_rdy;


    //TODO: MAC units instantiation
    // - Image you are drawing a spatial diagram of the MAC units; how should you connect the wires of them?
    // - Use generate block to realize the spatial diagram (You are not required to use generate block though)

    genvar r, j;
    generate
        for (r = 0; r < ROWS; r = r + 1) begin : gen_row
            for (j = 0; j < COLS; j = j + 1) begin : gen_col

                // Row data: enters from the left boundary or the MAC to the left
                wire [IN_WIDTH-1:0] row_in;
                if (j == 0)
                    assign row_in = row_data_in[r*IN_WIDTH +: IN_WIDTH];
                else
                    assign row_in = mac_row_out[r*COLS + (j-1)];

                // Col data: enters from the top boundary or the MAC above
                wire [IN_WIDTH-1:0] col_in;
                if (r == 0)
                    assign col_in = col_data_in[j*IN_WIDTH +: IN_WIDTH];
                else
                    assign col_in = mac_col_out[(r-1)*COLS + j];

                // Bypass: partial sums travel right-to-left; rightmost column
                // has no right neighbour so its bypass input is zero.
                wire [OUT_WIDTH-1:0] bypass_in;
                if (j == COLS-1)
                    assign bypass_in = {OUT_WIDTH{1'b0}};
                else
                    assign bypass_in = mac_psum[r*COLS + (j+1)];

                // Control: top row receives ctrl outputs; lower rows receive
                // the propagated signals from the row above.
                wire rst_acc_in;
                wire srdy_in;
                if (r == 0) begin
                    assign rst_acc_in = ctrl_rst_acc[j];
                    assign srdy_in    = ctrl_stream_rdy[j];
                end else begin
                    assign rst_acc_in = mac_rst_out [(r-1)*COLS + j];
                    assign srdy_in    = mac_srdy_out[(r-1)*COLS + j];
                end

                mac #(
                    .IN_WIDTH  (IN_WIDTH),
                    .IN_FRAC   (IN_FRAC),
                    .OUT_WIDTH (OUT_WIDTH),
                    .OUT_FRAC  (OUT_FRAC),
                    .MULT_LAT  (MULT_LAT),
                    .ADD_LAT   (ACC_LAT),
                    .K         (K),
                    .ROWS      (ROWS),
                    .COLS      (COLS),
                    .COLS_IDX  (j),
                    .ROWS_IDX  (r)
                ) mac_inst (
                    .clk                (clk),
                    .rst                (rst),
                    .rst_accumulator_in (rst_acc_in),
                    .stream_out_rdy_in  (srdy_in),
                    .row_data_in        (row_in),
                    .col_data_in        (col_in),
                    .bypass_data_in     (bypass_in),
                    .row_data_out       (mac_row_out [r*COLS + j]),
                    .col_data_out       (mac_col_out [r*COLS + j]),
                    .rst_accumulator_out(mac_rst_out [r*COLS + j]),
                    .stream_out_rdy_out (mac_srdy_out[r*COLS + j]),
                    .psum_out           (mac_psum    [r*COLS + j])
                );

            end
        end
    endgenerate


    //TODO: Ctrl unit instantiation
    // generate rst accmulator and bypass enable control signals

    ctrl #(
        .IN_WIDTH  (IN_WIDTH),
        .OUT_WIDTH (OUT_WIDTH),
        .ROWS      (ROWS),
        .COLS      (COLS),
        .MULT_LAT  (MULT_LAT),
        .ACC_LAT   (ACC_LAT)
    ) ctrl_inst (
        .clk                  (clk),
        .rst                  (rst),
        .input_rst_accumulator (rst_accumulator_rdy),
        .input_stream_out_rdy  (stream_out_rdy),
        .rst_accumulator       (ctrl_rst_acc),
        .stream_out_rdy        (ctrl_stream_rdy)
    );

    // Output: leftmost column (j=0) of each row streams results out
    generate
        for (r = 0; r < ROWS; r = r + 1) begin : gen_out
            assign row_data_out[r*OUT_WIDTH +: OUT_WIDTH] = mac_psum[r*COLS + 0];
        end
    endgenerate

endmodule