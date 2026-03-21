`timescale 1ns/1ps

module tb_fpu;

    // DUT signals
    reg         i_clk;
    reg         i_rst_n;
    reg [31:0]  i_data_a;
    reg [31:0]  i_data_b;
    reg         i_inst;
    reg         i_valid;
    wire [31:0] o_data;
    wire        o_valid;

    // Instantiate DUT
    fpu dut (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .i_inst(i_inst),
        .i_valid(i_valid),
        .o_data(o_data),
        .o_valid(o_valid)
    );

    // Clock generation: 10ns period
    always #5 i_clk = ~i_clk;

    integer i;

    // Task to apply one FPU test
    task do_test;
        input [31:0] a;
        input [31:0] b;
        input [31:0] expected;
        input        op; // 0 = add, 1 = mul
        begin
            @(negedge i_clk);
            i_data_a = a;
            i_data_b = b;
            i_inst   = op;
            i_valid  = 1'b1;

            @(negedge i_clk);
            i_valid  = 1'b0;

            // Wait for result
            wait (o_valid === 1'b1);

            if (o_data !== expected) begin
                $display("❌ FAIL: %s A=%h B=%h | got=%h expected=%h",
                         (op ? "MUL" : "ADD"), a, b, o_data, expected);
            end else begin
                $display("✅ PASS: %s A=%h B=%h | result=%h",
                         (op ? "MUL" : "ADD"), a, b, o_data);
            end
        end
    endtask

    initial begin
        // Init
        i_clk   = 0;
        i_rst_n = 0;
        i_data_a = 0;
        i_data_b = 0;
        i_inst   = 0;
        i_valid  = 0;

        // Reset
        #20;
        i_rst_n = 1;
        // =========================
        // Multiplication test cases
        // =========================
        // Multiply test cases
        do_test(32'h3f800000, 32'h3f800000, 32'h3f800000, 1); // 1.0 * 1.0 = 1.0
        do_test(32'h40000000, 32'h40400000, 32'h40c00000, 1); // 2.0 * 3.0 = 6.0
        do_test(32'hbf800000, 32'hbf800000, 32'h3f800000, 1); // -1.0 * -1.0 = 1.0
        do_test(32'hbf800000, 32'h40000000, 32'hc0000000, 1); // -1.0 * 2.0 = -2.0
        do_test(32'h3f000000, 32'h3f000000, 32'h3e800000, 1); // 0.5 * 0.5 = 0.25
        do_test(32'h3fc00000, 32'h3fc00000, 32'h40100000, 1); // 1.5 * 1.5 = 2.25
        do_test(32'h40400000, 32'h3f800000, 32'h40400000, 1); // 3.0 * 1.0 = 3.0
        do_test(32'h3f800000, 32'h40400000, 32'h40400000, 1); // 1.0 * 3.0 = 3.0
        do_test(32'h3eaaaaab, 32'h3f000000, 32'h3e800000, 1); // 0.33333334 * 0.5 = 0.16666667
        do_test(32'h3f800000, 32'h3eaaaaab, 32'h3eaaaaab, 1); // 1.0 * 0.33333334 = 0.33333334
        do_test(32'h3f800000, 32'hbf800000, 32'hbf800000, 1); // 1.0 * -1.0 = -1.0
        do_test(32'h40400000, 32'hbf800000, 32'hc0400000, 1); // 3.0 * -1.0 = -3.0
        do_test(32'h40800000, 32'h40000000, 32'h41000000, 1); // 4.0 * 2.0 = 8.0
        do_test(32'h3f000000, 32'h40400000, 32'h40200000, 1); // 0.5 * 3.0 = 1.5
        do_test(32'h40400000, 32'h3f000000, 32'h40200000, 1); // 3.0 * 0.5 = 1.5
        do_test(32'h3f800000, 32'h3f800000, 32'h3f800000, 1); // 1.0 * 1.0 = 1.0 (repeat)
        do_test(32'h40800000, 32'h40800000, 32'h41000000, 1); // 4.0 * 4.0 = 16.0
        do_test(32'hc0800000, 32'h40800000, 32'hc1000000, 1); // -4.0 * 4.0 = -16.0
        do_test(32'h3f800000, 32'h3fc00000, 32'h3fc00000, 1); // 1.0 * 1.5 = 1.5
        do_test(32'h3fc00000, 32'h40000000, 32'h40400000, 1); // 1.5 * 2.0 = 3.0
        do_test(32'h40400000, 32'h40400000, 32'h40c00000, 1); // 3.0 * 3.0 = 9.0
        do_test(32'h40a00000, 32'h40400000, 32'h41200000, 1); // 5.0 * 3.0 = 15.0
        do_test(32'h40c00000, 32'h40c00000, 32'h41800000, 1); // 6.0 * 6.0 = 36.0
        do_test(32'hc0400000, 32'hc0400000, 32'h41000000, 1); // -3.0 * -3.0 = 9.0
        do_test(32'h40400000, 32'hc0400000, 32'hc0400000, 1); // 3.0 * -3.0 = -9.0
        do_test(32'h3f800000, 32'h40800000, 32'h40800000, 1); // 1.0 * 4.0 = 4.0
        do_test(32'h40800000, 32'h3f800000, 32'h40800000, 1); // 4.0 * 1.0 = 4.0
        do_test(32'h3f800000, 32'hbf800000, 32'hbf800000, 1); // 1.0 * -1.0 = -1.0
        do_test(32'h3f800000, 32'h3e800000, 32'h3e800000, 1); // 1.0 * 0.25 = 0.25
        do_test(32'h3e800000, 32'h3f800000, 32'h3e800000, 1); // 0.25 * 1.0 = 0.25
        do_test(32'h40400000, 32'h40800000, 32'h41000000, 1); // 3.0 * 4.0 = 12.0
        do_test(32'h40800000, 32'h40400000, 32'h41000000, 1); // 4.0 * 3.0 = 12.0
        do_test(32'h40400000, 32'h40a00000, 32'h41200000, 1); // 3.0 * 5.0 = 15.0
        do_test(32'h40a00000, 32'h40400000, 32'h41200000, 1); // 5.0 * 3.0 = 15.0
        do_test(32'h40400000, 32'h40c00000, 32'h41800000, 1); // 3.0 * 6.0 = 18.0
        do_test(32'h40c00000, 32'h40400000, 32'h41800000, 1); // 6.0 * 3.0 = 18.0
        do_test(32'h40c00000, 32'h40a00000, 32'h42000000, 1); // 6.0 * 5.0 = 30.0
        do_test(32'h40a00000, 32'h40c00000, 32'h42000000, 1); // 5.0 * 6.0 = 30.0
        do_test(32'h41000000, 32'h41000000, 32'h42000000, 1); // 8.0 * 8.0 = 64.0
        do_test(32'hc1000000, 32'h41000000, 32'h43000000, 1); // -16.0 * 8.0 = -128.0
        do_test(32'h43000000, 32'h43000000, 32'h46000000, 1); // 128.0 * 128.0 = 16384.0

        $display("---- ALL MULTIPLY TESTS DONE ----");

        $display("---- ALL TESTS DONE ----");
        #20;
        $finish;
    end

endmodule
