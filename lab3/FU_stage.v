`include "define.vh" 

module FU_STAGE(
  input  wire                             clk,
  input  wire                             reset,
  input  wire [`from_DE_to_FU_WIDTH-1:0]  from_DE_to_FU,   
  output wire [`from_FU_to_DE_WIDTH-1:0]  from_FU_to_DE
);

  
  wire [`ALUDATABITS-1:0]  OP1_fu;
  wire [`ALUDATABITS-1:0]  OP2_fu;
  wire [`ALUOPBITS-1:0]    ALUOP_fu;
  wire [`ALUCSRINBITS-1:0] CSR_ALU_IN;

  assign {
    OP1_fu,
    OP2_fu,
    ALUOP_fu,
    CSR_ALU_IN
  } = from_DE_to_FU;

  
  
  wire [`ALUCSROUTBITS-1:0] CSR_ALU_OUT;
  wire [`ALUDATABITS-1:0]   OP3_fu;

  assign from_FU_to_DE = {
    OP3_fu,
    CSR_ALU_OUT
  };

  external_alu u_external_alu(
    .clk         (clk),
    .rst         (reset),
    .OP1         (OP1_fu),
    .OP2         (OP2_fu),
    .OP3         (OP3_fu),
    .ALUOP       (ALUOP_fu),
    .CSR_ALU_OUT (CSR_ALU_OUT),
    .CSR_ALU_IN  (CSR_ALU_IN)
  );



endmodule