`include "define.vh" 

module AGEX_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_MEM_to_AGEX_WIDTH-1:0] from_MEM_to_AGEX,    
  input wire [`from_WB_to_AGEX_WIDTH-1:0] from_WB_to_AGEX,   
  input wire [`DE_latch_WIDTH-1:0] from_DE_latch,
  output wire [`AGEX_latch_WIDTH-1:0] AGEX_latch_out,
  output wire [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,
  output wire [`from_AGEX_to_DE_WIDTH-1:0] from_AGEX_to_DE
);

  `UNUSED_VAR (from_MEM_to_AGEX)
  `UNUSED_VAR (from_WB_to_AGEX)

  reg [`AGEX_latch_WIDTH-1:0] AGEX_latch; 
  // wire to send the AGEX latch contents to other pipeline stages 
  assign AGEX_latch_out = AGEX_latch;

  reg [`DBITS-1:0] aluout_AGEX;
  
  wire[`AGEX_latch_WIDTH-1:0] AGEX_latch_contents; 
  
  wire valid_AGEX; 
  wire [`INSTBITS-1:0]inst_AGEX; 
  wire [`DBITS-1:0]PC_AGEX;
  wire [`DBITS-1:0] inst_count_AGEX; 
  wire [`DBITS-1:0] pcplus_AGEX; 
  wire [`IOPBITS-1:0] op_I_AGEX;
  reg br_cond_AGEX; // 1 means a branch condition is satisified. 0 means a branch condition is not satisifed
 
  /////////////////////////////////////////////////////////////////////////////
  // TODO: Complete remaining code logic here!

  /// these need to be assigned from DE latch
  wire is_br_AGEX;
  wire wr_reg_AGEX;
  wire [`REGNOBITS-1:0] wregno_AGEX;

  wire [`DBITS-1:0] regval1_AGEX;
  wire [`DBITS-1:0] regval2_AGEX;
  wire [`DBITS-1:0] sxt_imm_AGEX;


  reg [`DBITS-1:0] br_target_AGEX;
  wire br_mispred_AGEX;

  
  // Calculate branch condition
  // TODO: complete the code
  always @ (*) begin
    case (op_I_AGEX)
      `BEQ_I : br_cond_AGEX = (regval1_AGEX == regval2_AGEX);
      `BNE_I : br_cond_AGEX = (regval1_AGEX != regval2_AGEX);
      `BLT_I : br_cond_AGEX = ($signed(regval1_AGEX) < $signed(regval2_AGEX));
      `BGE_I : br_cond_AGEX = ($signed(regval1_AGEX) >= $signed(regval2_AGEX));
      `BLTU_I: br_cond_AGEX = ($unsigned(regval1_AGEX) < $unsigned(regval2_AGEX));
      `BGEU_I : br_cond_AGEX = ($unsigned(regval1_AGEX) >= $unsigned(regval2_AGEX));
      default : br_cond_AGEX = 1'b0;
    endcase
  end

  // Compute ALU operations  (alu out or memory addresses)
  // TODO: complete the code
  always @ (*) begin
    case (op_I_AGEX)
      // arithmetic/bitwise ops
      `ADD_I: aluout_AGEX = $signed(regval1_AGEX) + $signed(regval2_AGEX);
      `ADDI_I: aluout_AGEX = regval1_AGEX + sxt_imm_AGEX;
      `SUB_I : aluout_AGEX = $signed(regval1_AGEX) - $signed(regval2_AGEX);
      `AND_I: aluout_AGEX = regval1_AGEX & regval2_AGEX;
      `ANDI_I: aluout_AGEX = regval1_AGEX & sxt_imm_AGEX;
      `OR_I: aluout_AGEX = regval1_AGEX | regval2_AGEX;
      `ORI_I: aluout_AGEX = regval1_AGEX | sxt_imm_AGEX;
      `XOR_I: aluout_AGEX = regval1_AGEX ^ regval2_AGEX;
      `XORI_I: aluout_AGEX = regval1_AGEX ^ sxt_imm_AGEX;

      `MUL_I: aluout_AGEX = regval1_AGEX * regval2_AGEX;

      // comparisons
      `SLT_I: aluout_AGEX = {{31{1'b0}}, $signed(regval1_AGEX) < $signed(regval2_AGEX)};
      `SLTI_I: aluout_AGEX = {{31{1'b0}}, $signed(regval1_AGEX) < $signed(sxt_imm_AGEX)};
      `SLTU_I: aluout_AGEX = {{31{1'b0}}, $unsigned(regval1_AGEX) < $unsigned(regval2_AGEX)};
      `SLTIU_I: aluout_AGEX = {{31{1'b0}}, $unsigned(regval1_AGEX) < $unsigned(sxt_imm_AGEX)};

      // bit shifting
      `SRA_I: aluout_AGEX = regval1_AGEX >>> {{27{1'b0}}, regval2_AGEX[4:0]};
      `SRAI_I: aluout_AGEX = regval1_AGEX >>> sxt_imm_AGEX;
      `SRL_I: aluout_AGEX = regval1_AGEX >> {{27{1'b0}}, regval2_AGEX[4:0]};
      `SRLI_I: aluout_AGEX = regval1_AGEX >> sxt_imm_AGEX;

      `SLL_I: aluout_AGEX = regval1_AGEX << {{27{1'b0}}, regval2_AGEX[4:0]};
      `SLLI_I: aluout_AGEX = regval1_AGEX << {{27{1'b0}}, regval2_AGEX[4:0]};

      `AUIPC_I: aluout_AGEX = PC_AGEX + sxt_imm_AGEX;
      `JAL_I: aluout_AGEX = pcplus_AGEX;
      `JALR_I: aluout_AGEX = pcplus_AGEX;
      `LUI_I: aluout_AGEX = sxt_imm_AGEX;
      default: begin
        aluout_AGEX  = 0;
      end
    endcase
  end 

  // branch target needs to be computed here 
  // computed branch target needs to send to other pipeline stages (br_target_AGEX)
  // TODO: complete the code
  always @(*)begin
    case (op_I_AGEX)
    `JAL_I: br_target_AGEX = PC_AGEX + sxt_imm_AGEX;
    `JALR_I: br_target_AGEX = (regval1_AGEX + sxt_imm_AGEX) & 32'hfffffffe;
    `JR_I: br_target_AGEX = regval1_AGEX;
    default: begin
      if (is_br_AGEX && br_cond_AGEX)
        br_target_AGEX = PC_AGEX + sxt_imm_AGEX;
      else
        br_target_AGEX = pcplus_AGEX;
    end
    endcase
  end

  // jumps = unconditional branch
  assign br_mispred_AGEX = (is_br_AGEX && br_cond_AGEX) || (op_I_AGEX == `JAL_I) ||  (op_I_AGEX == `JALR_I);


    assign  {                     
            valid_AGEX,
            inst_AGEX,
            PC_AGEX,
            pcplus_AGEX,
            op_I_AGEX,
            inst_count_AGEX,
            regval1_AGEX,
            regval2_AGEX,
            sxt_imm_AGEX,
            is_br_AGEX,
            wr_reg_AGEX,
            wregno_AGEX
                    //  TODO: more signals might needed
            } = from_DE_latch; 
    
 
  assign AGEX_latch_contents = {
                                valid_AGEX,
                                inst_AGEX,
                                PC_AGEX,
                                op_I_AGEX,
                                inst_count_AGEX,
                                aluout_AGEX,
                                // br_cond_AGEX,
                                wr_reg_AGEX,
                                wregno_AGEX
                                       // TODO: more signals might needed
                                 }; 
 
  always @ (posedge clk ) begin
    if(reset) begin
      AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
        end 
    else 
        begin
            AGEX_latch <= AGEX_latch_contents ;
        end 
  end


  // forward signals to FE stage
  assign from_AGEX_to_FE = { 
      br_mispred_AGEX,
      br_target_AGEX
      //  TODO: more signals might needed
  };

  // forward signals to DE stage
  assign from_AGEX_to_DE = { 
    br_mispred_AGEX
    //  TODO: more signals might needed
  };

endmodule
