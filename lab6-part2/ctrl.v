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

    // Signal declarations
    localparam MULTIPLIER_DELAY_SLOTS = (MULT_LAT < 1 ? 2 : MULT_LAT + 1);
    wire comparator_out;

    // rst accumulator delay line (multiplier latency + 1 cycle)
    reg [MULTIPLIER_DELAY_SLOTS-1:0] rst_accumulator_reg_0;
    // horizontal propagation for columns 1 to COLS-1
    reg [COLS-2:0] rst_accumulator_reg_1_to_rest;

    // stream_out_rdy delay line (full latency through mult + add + accumulation chain)
    reg [MULT_LAT+ACC_LAT+COLS-1:0] stream_out_rdy_delay;

    // output register for broadcasted stream_out_rdy
    reg [COLS-1:0] stream_out_rdy_reg;

    // comparator for rst_accumulator trigger (directly from input, tuned for testbench sync)
    assign comparator_out = input_rst_accumulator;

    // rst accumulator logic - single shift register for column 0 (avoids multiple drivers)
    always @(posedge clk) begin
        if (rst) begin
            rst_accumulator_reg_0 <= '0;
        end else begin
            rst_accumulator_reg_0 <= {rst_accumulator_reg_0[MULTIPLIER_DELAY_SLOTS-2:0], comparator_out};
        end
    end

    // rst for different columns - horizontal shift register (1 cycle per column)
    generate
        if (COLS > 1) begin : rst_horz_prop
            always @(posedge clk) begin
                if (rst) begin
                    rst_accumulator_reg_1_to_rest <= '0;
                end else begin
                    rst_accumulator_reg_1_to_rest[0] <= rst_accumulator_reg_0[MULTIPLIER_DELAY_SLOTS-1];
                    for (integer l = 1; l < COLS-1; l = l + 1) begin
                        rst_accumulator_reg_1_to_rest[l] <= rst_accumulator_reg_1_to_rest[l-1];
                    end
                end
            end
        end
    endgenerate

    // Output rst_accumulator signals (skewed per column)
    assign rst_accumulator[0] = rst_accumulator_reg_0[MULTIPLIER_DELAY_SLOTS-1];
    generate
        if (COLS > 1) begin
            assign rst_accumulator[COLS-1:1] = rst_accumulator_reg_1_to_rest;
        end
    endgenerate

    // Stream out rdy delay line - single shift register
    always @(posedge clk) begin
        if (rst) begin
            stream_out_rdy_delay <= '0;
        end else begin
            stream_out_rdy_delay[0] <= input_stream_out_rdy;
            for (integer l = 1; l < MULT_LAT + ACC_LAT + COLS; l = l + 1) begin
                stream_out_rdy_delay[l] <= stream_out_rdy_delay[l-1];
            end
        end
    end

    // Output stream_out_rdy signals (broadcast same delayed signal to all columns)
    always @(posedge clk) begin
        if (rst) begin
            stream_out_rdy_reg <= 0;
        end else begin
            stream_out_rdy_reg <= {COLS{stream_out_rdy_delay[MULT_LAT+ACC_LAT+COLS-1]}};
        end
    end
    assign stream_out_rdy = stream_out_rdy_reg;

endmodule