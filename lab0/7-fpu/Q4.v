`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

module sequential_circuits ( 
    input clk,    // Clocks are used in sequential circuits
    input d,
    output reg q );//



    always @(posedge clk) begin
        q <= d; // nonblocking assignment
    end

endmodule