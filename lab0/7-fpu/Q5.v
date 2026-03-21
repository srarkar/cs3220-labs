`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own
module fsm ( 
    input clk,    // Clocks are used in sequential circuits
    input reset,
    input seq,
    output detected );// seq detector 1101, once detected, output 1 for 1 clock cycle

    parameter [1:0] NONE = 0,   // ____ seq
    				FIRST = 1,  // 1___ seq
    				SECOND = 2, // 11__ seq
    				THIRD = 3;  // 110_ seq

    reg [1:0] state = NONE;
    reg [1:0] next_state = NONE;

    always @(*) begin
        case (state)
            NONE:
                next_state = seq ? FIRST : NONE; // if we get a 1, transition to 1___ state
            FIRST: 
            	next_state = seq ? SECOND : NONE;
            SECOND:
                next_state = seq ? SECOND : THIRD; // 111 -> go to 11__ state
            THIRD:
                next_state = seq ? FIRST : NONE;
        endcase
    end

    always @(posedge clk) begin
        if (reset)
            state <= NONE;
        else
            state <= next_state;
    end

    assign detected = (state == THIRD && seq);
endmodule