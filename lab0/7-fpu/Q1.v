`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own
module combinational_circuits ( 
    input p1a, p1b, p1c, p1d, p1e, p1f,
    output p1y,
    input p2a, p2b, p2c, p2d,
    output p2y );

    wire w1 = p2a & p2b;
    wire w2 = p2c & p2d;
    assign p2y = w1 | w2;

    wire w3 = p1a & p1b & p1c;
    wire w4 = p1d & p1e & p1f;
    assign p1y = w3 | w4;

endmodule