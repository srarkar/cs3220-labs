module systolic_array #(
    parameter IN_WIDTH          = 8,
    parameter IN_FRAC           = 0,
    parameter OUT_WIDTH         = 8,
    parameter OUT_FRAC          = 0,
    parameter MULT_LAT          = 3,   // Multiplication latency
    parameter ACC_LAT           = 1,   // Addition latency (<=1)
    parameter ROWS              = 4,   // Row count of systolic array
    parameter K                 = 4,   // Inner dimension (accumulation depth)
    parameter COLS              = 4    // Column count of systolic array
)(
    input                       clk,
    input                       rst,
    input                       en,
    input                       flush,
    input                       rst_accumulator_rdy,
    input                       stream_out_rdy,

    // AXIS row input
    input  [IN_WIDTH*ROWS-1:0]  row_data_in,
    input                       row_data_in_vld,
    output                      row_data_in_rdy,

    // AXIS column input
    input  [IN_WIDTH*COLS-1:0]  col_data_in,
    input                       col_data_in_vld,
    output                      col_data_in_rdy,

    // AXIS row output
    output [OUT_WIDTH*ROWS-1:0] row_data_out,
    output                      row_data_out_vld,
    input                       row_data_out_rdy
);
    assign col_data_in_rdy = 1'b1;
    assign row_data_in_rdy = 1'b1;
    
    wire [IN_WIDTH*ROWS-1:0] row_masked;
    wire [IN_WIDTH*COLS-1:0] col_masked;

    wire            rst_acc_in  [0:ROWS-1][0:COLS-1];
    wire            rst_acc_out [0:ROWS-1][0:COLS-1];
    wire [COLS-1:0] ctrl_rst_acc;
    
    wire            strm_in   [0:ROWS-1][0:COLS-1];
    wire            strm_out  [0:ROWS-1][0:COLS-1];
    wire [COLS-1:0] ctrl_strm;

    
    wire [IN_WIDTH-1:0] mac_row_in  [0:COLS][0:ROWS-1];
    wire [IN_WIDTH-1:0] mac_row_out [0:COLS][0:ROWS-1];

    
    wire [IN_WIDTH-1:0] mac_col_in  [0:ROWS-1][0:COLS-1];
    wire [IN_WIDTH-1:0] mac_col_out [0:ROWS-1][0:COLS-1];

    
    wire [IN_WIDTH-1:0]  bypass_in  [0:ROWS-1][0:COLS-1];
    wire [OUT_WIDTH-1:0] bypass_out [0:ROWS-1][0:COLS-1];

    // Direct accumulator snapshot: valid one cycle after stream_out_rdy_in
    wire [OUT_WIDTH-1:0] psum_cap [0:ROWS-1][0:COLS-1];

    assign row_masked = row_data_in_vld ? row_data_in : {(IN_WIDTH*ROWS){1'b0}};
    assign col_masked = col_data_in_vld ? col_data_in : {(IN_WIDTH*COLS){1'b0}};

    generate
        genvar r, c;

        for (r = 0; r < ROWS; r = r + 1) begin : conn_row
            for (c = 0; c < COLS; c = c + 1) begin : conn_col

                // --- ctrl → MAC: top-to-bottom propagation ---
                if (r == 0) begin : row0_ctrl
                    assign rst_acc_in[0][c] = ctrl_rst_acc[c];
                    assign strm_in[0][c]    = ctrl_strm[c];
                end else begin : rowN_ctrl
                    assign rst_acc_in[r][c] = rst_acc_out[r-1][c];
                    assign strm_in[r][c]    = strm_out[r-1][c];
                end

                // --- col data: top-to-bottom ---
                if (r == 0) begin : col_data_top
                    assign mac_col_in[0][c] = col_masked[IN_WIDTH*c +: IN_WIDTH];
                end else begin : col_data_mid
                    assign mac_col_in[r][c] = mac_col_out[r-1][c];
                end

                // --- row data: left-to-right ---
                if (c == 0) begin : row_data_left
                    assign mac_row_in[0][r] = row_masked[IN_WIDTH*r +: IN_WIDTH];
                end else begin : row_data_mid
                    assign mac_row_in[c][r] = mac_row_out[c-1][r];
                end

                // --- bypass: rightmost column has no right neighbour ---
                if (c == COLS-1) begin : bypass_right
                    assign bypass_in[r][c] = {IN_WIDTH{1'b0}};
                end else begin : bypass_mid
                    assign bypass_in[r][c] = bypass_out[r][c+1];
                end

            end // conn_col
        end // conn_row
    endgenerate

    generate
        genvar rr, cc;
        for (rr = 0; rr < ROWS; rr = rr + 1) begin : mac_row_gen
            for (cc = 0; cc < COLS; cc = cc + 1) begin : mac_col_gen
                mac #(
                    .IN_WIDTH  (IN_WIDTH),
                    .IN_FRAC   (IN_FRAC),
                    .OUT_WIDTH (OUT_WIDTH),
                    .OUT_FRAC  (OUT_FRAC),
                    .MULT_LAT  (MULT_LAT),
                    .ADD_LAT   (ACC_LAT),
                    // K = delay length of psum shift register = COLS-cc-1
                    .K         (COLS - cc - 1),
                    .COLS      (COLS),
                    .ROWS      (ROWS),
                    .COLS_IDX  (cc),
                    .ROWS_IDX  (rr)
                ) mac_inst (
                    .clk                (clk),
                    .rst                (rst),
                    .rst_accumulator_in (rst_acc_in[rr][cc]),
                    .stream_out_rdy_in  (strm_in[rr][cc]),
                    .row_data_in        (mac_row_in[cc][rr]),
                    .col_data_in        (mac_col_in[rr][cc]),
                    .bypass_data_in     (bypass_in[rr][cc]),
                    .rst_accumulator_out(rst_acc_out[rr][cc]),
                    .stream_out_rdy_out (strm_out[rr][cc]),
                    .row_data_out       (mac_row_out[cc][rr]),
                    .col_data_out       (mac_col_out[rr][cc]),
                    .psum_out           (bypass_out[rr][cc]),
                    .psum_capture_out   (psum_cap[rr][cc])
                );
            end
        end
    endgenerate

    // from ctrl.v
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
        .input_rst_accumulator(rst_accumulator_rdy),
        .input_stream_out_rdy (stream_out_rdy),
        .rst_accumulator      (ctrl_rst_acc),
        .stream_out_rdy       (ctrl_strm)
    );

    reg [ROWS:0] cap_pipe; // bits [0..ROWS]; index r corresponds to row r
    integer vli;
    always @(posedge clk) begin
        if (rst) begin
            cap_pipe <= {(ROWS+1){1'b0}};
        end else begin
            cap_pipe[0] <= ctrl_strm[0];
            for (vli = 1; vli <= ROWS; vli = vli + 1)
                cap_pipe[vli] <= cap_pipe[vli-1];
        end
    end

    localparam FIFO_D    = 1024;
    localparam FIFO_BITS = 10;          // $clog2(1024)
    localparam SNAP_W    = COLS * OUT_WIDTH;

    
    reg [SNAP_W-1:0]  snap_fifo [0:ROWS-1][0:FIFO_D-1];


    reg [FIFO_BITS:0] snap_wptr [0:ROWS-1];
    reg [FIFO_BITS:0] snap_rptr [0:ROWS-1];

    wire snap_full  [0:ROWS-1];
    wire snap_empty [0:ROWS-1];

    generate
        genvar fe;
        for (fe = 0; fe < ROWS; fe = fe + 1) begin : fifo_flags
            assign snap_full[fe] =
                (snap_wptr[fe][FIFO_BITS]     != snap_rptr[fe][FIFO_BITS]) &&
                (snap_wptr[fe][FIFO_BITS-1:0] == snap_rptr[fe][FIFO_BITS-1:0]);
            assign snap_empty[fe] = (snap_wptr[fe] == snap_rptr[fe]);
        end
    endgenerate

    
    generate
        genvar wr;
        for (wr = 0; wr < ROWS; wr = wr + 1) begin : fifo_write

            // Snapshot word: col 0 in [OUT_WIDTH-1:0], col COLS-1 at MSBs
            wire [SNAP_W-1:0] snap_data;
            genvar wc;
            for (wc = 0; wc < COLS; wc = wc + 1) begin : snap_word
                assign snap_data[OUT_WIDTH*wc +: OUT_WIDTH] = psum_cap[wr][wc];
            end

            always @(posedge clk) begin
                if (rst) begin
                    snap_wptr[wr] <= 0;
                end else if (cap_pipe[wr] && !snap_full[wr]) begin
                    snap_fifo[wr][snap_wptr[wr][FIFO_BITS-1:0]] <= snap_data;
                    snap_wptr[wr] <= snap_wptr[wr] + 1;
                end
            end

        end
    endgenerate

    
    wire [ROWS-1:0] empty_vec;
    generate
        genvar ev;
        for (ev = 0; ev < ROWS; ev = ev + 1) begin : ev_reduce
            assign empty_vec[ev] = snap_empty[ev];
        end
    endgenerate
    wire all_non_empty = (empty_vec == {ROWS{1'b0}});

    
    localparam COL_W = (COLS > 1) ? $clog2(COLS) : 1;

    reg [SNAP_W-1:0] cur_snap   [0:ROWS-1];
    reg              snap_valid;
    reg [COL_W-1:0]  col_cnt;

    integer ri;
    always @(posedge clk) begin
        if (rst) begin
            snap_valid <= 1'b0;
            col_cnt    <= {COL_W{1'b0}};
            for (ri = 0; ri < ROWS; ri = ri + 1) begin
                snap_rptr[ri] <= 0;
                cur_snap[ri]  <= {SNAP_W{1'b0}};
            end
        end else begin

            if (snap_valid) begin
                // Currently streaming a snapshot
                if (row_data_out_rdy) begin
                    if (col_cnt == COL_W'(COLS - 1)) begin
                        // Last column: try seamless reload
                        if (all_non_empty) begin
                            for (ri = 0; ri < ROWS; ri = ri + 1) begin
                                cur_snap[ri]  <= snap_fifo[ri][snap_rptr[ri][FIFO_BITS-1:0]];
                                snap_rptr[ri] <= snap_rptr[ri] + 1;
                            end
                            col_cnt    <= {COL_W{1'b0}};
                            snap_valid <= 1'b1;
                        end else begin
                            // No more data yet
                            snap_valid <= 1'b0;
                            col_cnt    <= {COL_W{1'b0}};
                        end
                    end else begin
                        col_cnt <= col_cnt + 1'b1;
                    end
                end
                

            end else begin
                // Idle: wait until all FIFOs have at least one entry
                if (all_non_empty) begin
                    for (ri = 0; ri < ROWS; ri = ri + 1) begin
                        cur_snap[ri]  <= snap_fifo[ri][snap_rptr[ri][FIFO_BITS-1:0]];
                        snap_rptr[ri] <= snap_rptr[ri] + 1;
                    end
                    snap_valid <= 1'b1;
                    col_cnt    <= {COL_W{1'b0}};
                end
            end

        end
    end

    generate
        genvar or2;
        for (or2 = 0; or2 < ROWS; or2 = or2 + 1) begin : out_drive
            assign row_data_out[OUT_WIDTH*or2 +: OUT_WIDTH] = cur_snap[or2][OUT_WIDTH*col_cnt +: OUT_WIDTH];
        end
    endgenerate

    assign row_data_out_vld = snap_valid;
endmodule