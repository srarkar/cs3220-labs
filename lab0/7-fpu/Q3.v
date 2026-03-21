`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own

module module_hierarchy ( 
    input [31:0] a,
    input [31:0] b,
    output [31:0] sum
);//

    wire cout1;
    wire [15:0] sum_lo, sum_hi;
    add16 a1 (.a(a[15:0]), .b(b[15:0]), .cin(1'b0), .sum(sum_lo), .cout(cout1));
    add16 a2 (.a(a[31:16]), .b(b[31:16]), .cin(cout1), .sum(sum_hi)); // cout is not used so make it floating ?
    
    assign sum = {sum_hi, sum_lo};

endmodule

module add1 ( input a, input b, input cin,   output sum, output cout );

    wire [1:0] total;
    assign total = a + b + cin;
    assign {cout, sum} = total;

endmodule