`include "define.vh"
 
//TODO: part2/bonus modify as necessary; may need to add more inputs/outputs?
module DE_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire [`FE_latch_WIDTH-1:0]        from_FE_latch,
  input wire [`from_AGEX_to_DE_WIDTH-1:0] from_AGEX_to_DE,
  input wire [`from_MEM_to_DE_WIDTH-1:0]  from_MEM_to_DE,
  input wire [`from_WB_to_DE_WIDTH-1:0]   from_WB_to_DE,
  output wire [`from_DE_to_FE_WIDTH-1:0]  from_DE_to_FE,
  input wire [`from_FU_to_DE_WIDTH-1:0]   from_FU_to_DE,
  output wire [`from_DE_to_FU_WIDTH-1:0]  from_DE_to_FU,
  output wire [`DE_latch_WIDTH-1:0]       DE_latch_out
);
 
  `UNUSED_VAR (from_MEM_to_DE)
 
  /* pipeline latch*/
  reg [`DE_latch_WIDTH-1:0] DE_latch;
  wire valid_DE;
 
  /* architecture register file */
  /* verilator lint_off MULTIDRIVEN */
  reg [`DBITS-1:0] reg_file [`REGWORDS-1:0];
 
  /* decode signals */
  wire [`INSTBITS-1:0] inst_DE;
  wire [`DBITS-1:0] PC_DE;
  wire [`DBITS-1:0] pcplus_DE;
  wire [`DBITS-1:0] pcnext_DE;
  wire [7:0] pc_xor_bhr_DE;
  wire[`DE_latch_WIDTH-1:0] DE_latch_contents;
 
  // extracting a part of opcode
  wire [2:0] F3_DE;
  wire [6:0] F7_DE;
  wire [6:0] op_DE;
 
  assign op_DE = inst_DE[6:0];
  assign F3_DE = inst_DE[14:12];
  assign F7_DE = inst_DE[31:25];
 
  /* opcode decoding logic */
  reg [`IOPBITS-1:0 ] op_I_DE; //  internal opcode enumerator for easy programming.
  reg [`TYPENOBITS-1:0] type_I_DE;  // instruction format type information for decoding purpose
  reg [`IMMTYPENOBITS-1:0] type_immediate_DE;  // immediate type information for decodding purpose
 
  always @(*) begin
    if ((op_DE == `ADD_OPCODE) && (F3_DE == `ADD_FUNCT3) && (F7_DE == `ADD_FUNCT7))
      op_I_DE = `ADD_I;
    else if ((op_DE == `SUB_OPCODE) && (F3_DE == `SUB_FUNCT3) && (F7_DE == `SUB_FUNCT7))
      op_I_DE = `SUB_I;
    else if ((op_DE == `AND_OPCODE) && (F3_DE == `AND_FUNCT3) && (F7_DE == `AND_FUNCT7))
      op_I_DE = `AND_I;
    else if ((op_DE == `OR_OPCODE) && (F3_DE == `OR_FUNCT3) && (F7_DE == `OR_FUNCT7))
      op_I_DE = `OR_I;
    else if ((op_DE == `XOR_OPCODE) && (F3_DE == `XOR_FUNCT3) && (F7_DE == `XOR_FUNCT7))
      op_I_DE = `XOR_I;
    else if ((op_DE == `SLT_OPCODE) && (F3_DE == `SLT_FUNCT3) && (F7_DE == `SLT_FUNCT7))
      op_I_DE = `SLT_I;
    else if ((op_DE == `SLTU_OPCODE) && (F3_DE == `SLTU_FUNCT3) && (F7_DE == `SLTU_FUNCT7))
      op_I_DE = `SLTU_I;
    else if ((op_DE == `SRA_OPCODE) && (F3_DE == `SRA_FUNCT3) && (F7_DE == `SRA_FUNCT7))
      op_I_DE = `SRA_I;
    else if ((op_DE == `SRL_OPCODE) && (F3_DE == `SRL_FUNCT3) && (F7_DE == `SRL_FUNCT7))
      op_I_DE = `SRL_I;
    else if ((op_DE == `SLL_OPCODE) && (F3_DE == `SLL_FUNCT3) && (F7_DE == `SLL_FUNCT7))
      op_I_DE = `SLL_I;
    else if ((op_DE == `MUL_OPCODE) && (F3_DE == `MUL_FUNCT3) && (F7_DE == `MUL_FUNCT7))
      op_I_DE = `MUL_I;
    else if ((op_DE == `ADDI_OPCODE) && (F3_DE == `ADDI_FUNCT3))
      op_I_DE = `ADDI_I;
    else if ((op_DE == `ANDI_OPCODE) && (F3_DE == `ANDI_FUNCT3))
      op_I_DE = `ANDI_I;
    else if ((op_DE == `ORI_OPCODE) && (F3_DE == `ORI_FUNCT3))
      op_I_DE = `ORI_I;
    else if ((op_DE == `XORI_OPCODE) && (F3_DE == `XORI_FUNCT3))
      op_I_DE = `XORI_I;
    else if ((op_DE == `SLTI_OPCODE) && (F3_DE == `SLTI_FUNCT3))
      op_I_DE = `SLTI_I;
    else if ((op_DE == `SLTIU_OPCODE) && (F3_DE == `SLTIU_FUNCT3))
      op_I_DE = `SLTIU_I;
    else if ((op_DE == `SRAI_OPCODE) && (F3_DE == `SRAI_FUNCT3) && (F7_DE == `SRAI_FUNCT7))
      op_I_DE = `SRAI_I;
    else if ((op_DE == `SRLI_OPCODE) && (F3_DE == `SRLI_FUNCT3) && (F7_DE == `SRLI_FUNCT7))
      op_I_DE = `SRLI_I;
    else if ((op_DE == `SLLI_OPCODE) && (F3_DE == `SLLI_FUNCT3) && (F7_DE == `SLLI_FUNCT7))
      op_I_DE = `SLLI_I;
    else if ((op_DE == `LUI_OPCODE))
      op_I_DE = `LUI_I;
    else if ((op_DE == `AUIPC_OPCODE))
      op_I_DE = `AUIPC_I;
    else if ((op_DE == `LW_OPCODE) && (F3_DE == `LW_FUNCT3))
      op_I_DE = `LW_I;
    else if ((op_DE == `SW_OPCODE) && (F3_DE == `SW_FUNCT3))
      op_I_DE = `SW_I;
    else if ((op_DE == `JAL_OPCODE))
      op_I_DE = `JAL_I;
    else if ((op_DE == `JALR_OPCODE) && (F3_DE == `JALR_FUNCT3))
      op_I_DE = `JALR_I;
    else if ((op_DE == `BEQ_OPCODE) && (F3_DE == `BEQ_FUNCT3))
      op_I_DE = `BEQ_I;
    else if ((op_DE == `BNE_OPCODE) && (F3_DE == `BNE_FUNCT3))
      op_I_DE = `BNE_I;
    else if ((op_DE == `BLT_OPCODE) && (F3_DE == `BLT_FUNCT3))
      op_I_DE = `BLT_I;
    else if ((op_DE == `BGE_OPCODE) && (F3_DE == `BGE_FUNCT3))
      op_I_DE = `BGE_I;
    else if ((op_DE == `BLTU_OPCODE) && (F3_DE == `BLTU_FUNCT3))
      op_I_DE = `BLTU_I;
    else if ((op_DE == `BGEU_OPCODE) && (F3_DE == `BGEU_FUNCT3))
      op_I_DE = `BGEU_I;
    else if ((op_DE == `CSRR_OPCODE) && (F3_DE == `CSRR_FUNCT3))
      op_I_DE = `CSRR_I;
    else if ((op_DE == `CSRW_OPCODE) && (F3_DE == `CSRW_FUNCT3))
      op_I_DE = `CSRW_I;
    else
      op_I_DE = `INVALID_I;
  end
 
  always @(*) begin
    type_I_DE = '0;
    type_immediate_DE = '0;
    if ((op_I_DE == `ADD_I) ||
        (op_I_DE == `SUB_I ) ||
        (op_I_DE ==  `AND_I) ||
        (op_I_DE == `OR_I) ||
        (op_I_DE == `XOR_I) ||
        (op_I_DE == `SLT_I) ||
        (op_I_DE ==  `SLTU_I) ||
        (op_I_DE ==  `SRA_I) ||
        (op_I_DE == `SRL_I ) ||
        (op_I_DE == `SLL_I) ||
        (op_I_DE ==  `MUL_I)) begin
      type_I_DE = `R_Type;
    end else
    if ((op_I_DE == `CSRR_I) ||
        (op_I_DE == `CSRW_I) ||
        (op_I_DE == `ADDI_I ) ||
        (op_I_DE == `ANDI_I) ||
        (op_I_DE == `ORI_I) ||
        (op_I_DE == `XORI_I) ||
        (op_I_DE == `SLTI_I) ||
        (op_I_DE == `SLTIU_I ) ||
        (op_I_DE == `LW_I ) ||
        (op_I_DE == `JR_I) ||
        (op_I_DE == `JALR_I) ) begin
      type_I_DE = `I_Type;
      type_immediate_DE = `I_immediate;
    end else
    if ((op_I_DE ==  `SRAI_I ) ||
        (op_I_DE == `SRLI_I) ||
        (op_I_DE == `SLLI_I)) begin
      type_I_DE = `I_Type;
      type_immediate_DE = `I_immediate;
    end else
    if ((op_I_DE ==  `LUI_I) ||
        (op_I_DE == `AUIPC_I )) begin
      type_I_DE = `I_Type;
      type_immediate_DE = `U_immediate;
    end else
    if (op_I_DE == `SW_I) begin
      type_I_DE = `S_Type;
      type_immediate_DE = `S_immediate;
    end else
    if (op_I_DE ==  `JAL_I) begin
      type_I_DE = `U_Type;
      type_immediate_DE = `J_immediate;
    end else
    if ((op_I_DE ==  `BEQ_I ) ||
        (op_I_DE == `BNE_I) ||
        (op_I_DE == `BLT_I) ||
        (op_I_DE == `BGE_I) ||
        (op_I_DE == `BLTU_I) ||
        (op_I_DE == `BGEU_I)) begin
      type_I_DE = `S_Type;
      type_immediate_DE = `B_immediate;
    end
  end
 
  // Decode immediate value
  reg [`DBITS-1:0] sxt_imm_DE;
  always @(*) begin
    case (type_immediate_DE)
    `I_immediate: sxt_imm_DE = {{21{inst_DE[31]}}, inst_DE[30:25], inst_DE[24:21], inst_DE[20]};
    `S_immediate: sxt_imm_DE = {{21{inst_DE[31]}}, inst_DE[30:25], inst_DE[11:8], inst_DE[7]};
    `B_immediate: sxt_imm_DE = {{20{inst_DE[31]}}, inst_DE[7], inst_DE[30:25], inst_DE[11:8], 1'b0};
    `U_immediate: sxt_imm_DE = {inst_DE[31], inst_DE[30:20], inst_DE[19:12], 12'b0};
    `J_immediate: sxt_imm_DE = {{12{inst_DE[31]}}, inst_DE[19:12], inst_DE[20], inst_DE[30:25], inst_DE[24:21], 1'b0};
    default:      sxt_imm_DE = '0;
    endcase
  end
 
  /* this signal is passed from WB stage */
  wire wr_reg_WB; // is this instruction writing into a register file?
  wire [`REGNOBITS-1:0] wregno_WB; // destination register ID
  wire [`DBITS-1:0] regval_WB;  // the contents to be written in the register file (or CSR )
 
  // signals come from WB stage for register WB
  assign {
    wr_reg_WB,
    wregno_WB,
    regval_WB
  } = from_WB_to_DE;
 
  wire pipeline_stall_DE;
  wire alu_stall;         // EXCEPTION: stalls DE latch and FE when waiting for ALU result
 
  // decoding the contents of FE latch out. the order should be matched with the fe_stage.v
  assign {
    valid_DE,
    inst_DE,
    PC_DE,
    pcplus_DE,
    pcnext_DE,
    pc_xor_bhr_DE
  } = from_FE_latch;  // based on the contents of the latch, you can decode the conten
 
 
 
  wire [`REGNOBITS-1:0] rs1_DE;
  wire [`REGNOBITS-1:0] rs2_DE;
  wire [`REGNOBITS-1:0] rd_DE;
 
  wire [`DBITS-1:0] rs1_val_DE;
  wire [`DBITS-1:0] rs2_val_DE;
 
  wire is_br_DE;    // is conditional branch instr
  wire is_jmp_DE;   // is jump instr
  wire rd_mem_DE;   // is LD instr
  wire wr_mem_DE;   // is ST instr
  wire wr_reg_DE;   // is writing back to register file
  reg  use_rs1_DE;  // instruction uses rs1
  reg  use_rs2_DE;  // instruction uses rs2
 
  // Decode instruction registers
  assign rs1_DE = inst_DE[19:15];
  assign rs2_DE = inst_DE[24:20];
  assign rd_DE  = inst_DE[11:7];
 
  // Read register file
  assign rs1_val_DE = reg_file[rs1_DE];
  assign rs2_val_DE = reg_file[rs2_DE];
 
  // decode instruction info
  assign is_br_DE  = ((op_I_DE == `BEQ_I) || (op_I_DE == `BNE_I) || (op_I_DE == `BLT_I) || (op_I_DE == `BGE_I) || (op_I_DE == `BLTU_I) || (op_I_DE == `BGEU_I)) ? 1 : 0;
  assign is_jmp_DE = ((op_I_DE == `JAL_I) || (op_I_DE == `JR_I) || (op_I_DE == `JALR_I)) ? 1 : 0;
  assign rd_mem_DE = (op_I_DE == `LW_I) ? 1 :0 ;
  assign wr_mem_DE = (op_I_DE == `SW_I) ? 1 : 0 ;
  assign wr_reg_DE = ((op_I_DE == `CSRR_I) ||
                      (op_I_DE == `ADD_I) ||
                      (op_I_DE == `SUB_I) ||
                      (op_I_DE == `AND_I) ||
                      (op_I_DE == `OR_I) ||
                      (op_I_DE == `XOR_I) ||
                      (op_I_DE == `SLT_I) ||
                      (op_I_DE == `SLTU_I) ||
                      (op_I_DE == `SRA_I) ||
                      (op_I_DE == `SRL_I) ||
                      (op_I_DE == `SLL_I) ||
                      (op_I_DE == `MUL_I) ||
                      (op_I_DE == `ADDI_I) ||
                      (op_I_DE == `ANDI_I) ||
                      (op_I_DE == `ORI_I) ||
                      (op_I_DE == `XORI_I) ||
                      (op_I_DE == `SLTI_I) ||
                      (op_I_DE == `SLTIU_I) ||
                      (op_I_DE == `SRAI_I) ||
                      (op_I_DE == `SRLI_I) ||
                      (op_I_DE == `SLLI_I) ||
                      (op_I_DE == `LUI_I) ||
                      (op_I_DE == `AUIPC_I) ||
                      (op_I_DE == `LW_I) ||
                      (op_I_DE == `JAL_I) ||
                      (op_I_DE == `JALR_I)) ? ((rd_DE != 0) ? 1 : 0): 0;
 
  always @(*) begin
    case (type_I_DE)
    `I_Type: begin
      use_rs1_DE = 1;
      use_rs2_DE = 0;
    end
    `R_Type: begin
      use_rs1_DE = 1;
      use_rs2_DE = 1;
    end
    `S_Type: begin
      use_rs1_DE = 1;
      use_rs2_DE = 1;
    end
    `U_Type: begin
      use_rs1_DE = 0;
      use_rs2_DE = 0;
    end
    default: begin
      use_rs1_DE = 0;
      use_rs2_DE = 0;
    end
    endcase
  end
 
  // Handle data dependency
 
  reg [31:0] in_use_regs;
  wire has_data_hazards;
  wire br_mispred_AGEX;
 
  // process AGEX forwarding
  assign {
    br_mispred_AGEX
  } = from_AGEX_to_DE;
 
  assign has_data_hazards = (use_rs1_DE && in_use_regs[rs1_DE])
                         || (use_rs2_DE && in_use_regs[rs2_DE]);

  wire csr_op1_ready   = csr_alu_out_FU[0];
  wire csr_op2_ready   = csr_alu_out_FU[1];
  wire csr_result_valid = csr_alu_out_FU[2];

  wire op1_load_stall  = valid_DE && (op_I_DE == `LW_I) && (rd_DE == `OP1_REG_IDX) && ~csr_op1_ready;
  wire op2_load_stall  = valid_DE && (op_I_DE == `LW_I) && (rd_DE == `OP2_REG_IDX) && ~csr_op2_ready;
  wire op3_store_stall = valid_DE && is_op3_store && ~csr_result_valid;  // bonus

  // Update existing stall (part 2 needs op1/op2; op3 for bonus)
  assign pipeline_stall_DE = has_data_hazards || br_mispred_AGEX ||
                             op1_load_stall || op2_load_stall || op3_store_stall;
 
  //assign pipeline_stall_DE = has_data_hazards || br_mispred_AGEX;
 
  always @(posedge clk) begin
    if (reset) begin
      in_use_regs <= '0;
    end else begin
      if (~pipeline_stall_DE && wr_reg_DE && rd_DE < 27) begin
        in_use_regs[rd_DE] <= 1;
      end
      if (wr_reg_WB) begin
        in_use_regs[wregno_WB] <= 0;
      end
    end
  end
 
  /// TODO: load operands -> ... state transition stuff
 
  // register file initialization
  initial begin
    for (integer i = 0; i < 32; ++i)
      reg_file[i] = '0;
  end

 
  wire [`DBITS-1:0] final_rs2_val;

  // match to AGEX
  assign DE_latch_contents = {
    valid_DE,
    inst_DE,
    PC_DE,
    pcplus_DE,
    pcnext_DE,
    op_I_DE,
    rs1_val_DE,
    final_rs2_val,
    sxt_imm_DE,
    is_br_DE,
    is_jmp_DE,
    rd_mem_DE,
    wr_mem_DE,
    wr_reg_DE,
    rd_DE,
    pc_xor_bhr_DE
  };

    // register file update
    always @ (negedge clk) begin
      if (wr_reg_WB) begin
            reg_file[wregno_WB] <= regval_WB;
      end
    end
 
  // Update DE latch
  always @ (posedge clk) begin
    if (reset) begin
      DE_latch <= '0;
    end else begin
      if (pipeline_stall_DE)
        DE_latch <= '0;          // pipeline hazard: flush to bubble
      else if (alu_stall)
        DE_latch <= DE_latch;    // using alu stall here as exception
      else
        DE_latch <= DE_latch_contents;
     end
  end
  assign DE_latch_out = DE_latch;
 
  // forward signals to FE stage
  assign from_DE_to_FE = {pipeline_stall_DE || alu_stall };
 

 
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  //TODO: add your code here to load operands, ALUOP;
  //store results to memory;
  //forward data and control signals to FU stage;
  //fetch status update from FU stage;
  //Recommended states transition: load aluop --> load op1 --> load op2 --> alu processing --> store results to memory

  localparam [2:0] ALU_WAIT_ALUOP = 3'd0;
  localparam [2:0] ALU_WAIT_OP1   = 3'd1;
  localparam [2:0] ALU_WAIT_OP2   = 3'd2;
  localparam [2:0] ALU_PROCESSING = 3'd3;
  localparam [2:0] ALU_ACK_RES    = 3'd4;

  reg [2:0] alu_state;

  // Operand/opcode registers — loaded as each LW commits through WB
  reg [`ALUDATABITS-1:0]  alu_op1;
  reg [`ALUDATABITS-1:0]  alu_op2;
  reg [`ALUOPBITS-1:0]    alu_op;

  // CSR_ALU_IN driven as a registered output so pulses are exactly one cycle wide
  reg [`ALUCSRINBITS-1:0] csr_alu_in;

  // Result and status come back from FU stage
  wire [`ALUDATABITS-1:0]   alu_op3;
  wire [`ALUCSROUTBITS-1:0] csr_alu_out_FU;

  assign {alu_op3, csr_alu_out_FU} = from_FU_to_DE;

  // Forward packed operands + CSR control to FU
  assign from_DE_to_FU = {alu_op1, alu_op2, alu_op, csr_alu_in};

  wire is_op3_store = (wr_mem_DE && rs2_DE == `OP3_REG_IDX);
  assign final_rs2_val = is_op3_store ? alu_op3 : rs2_val_DE;

  // latched the result yet (not in ALU_ACK_RES or idle).
  wire alu_in_flight = (alu_state == ALU_WAIT_OP1)  ||
                       (alu_state == ALU_WAIT_OP2)  ||
                       (alu_state == ALU_PROCESSING);
  assign alu_stall  = (valid_DE && is_op3_store) && alu_in_flight;

  // State: load aluop --> load op1 --> load op2 --> alu processing --> store results to memory
  always @(posedge clk) begin
    if (reset) begin
      alu_state  <= ALU_WAIT_ALUOP;
      alu_op     <= '0;
      alu_op1    <= '0;
      alu_op2    <= '0;
      csr_alu_in <= '0;
    end else begin

      csr_alu_in[2:1] <= 2'b00;

      case (alu_state)

        ALU_WAIT_ALUOP: begin
          csr_alu_in[0] <= 1'b0;
          if (wr_reg_WB && wregno_WB == `ALUOP_REG_IDX && regval_WB[`ALUOPBITS-1:0] != '0) begin
            alu_op    <= regval_WB[`ALUOPBITS-1:0];
            alu_state <= ALU_WAIT_OP1;
          end
        end

        ALU_WAIT_OP1: begin
          csr_alu_in[0] <= 1'b0;
          if (wr_reg_WB && wregno_WB == `OP1_REG_IDX) begin
            alu_op1       <= regval_WB;
            csr_alu_in[1] <= 1'b1;
            alu_state     <= ALU_WAIT_OP2;
          end
        end


        ALU_WAIT_OP2: begin
          csr_alu_in[0] <= 1'b0;
          if (wr_reg_WB && wregno_WB == `OP2_REG_IDX) begin
            alu_op2       <= regval_WB;
            csr_alu_in[2] <= 1'b1;
            alu_state     <= ALU_PROCESSING;
          end
        end


        ALU_ACK_RES: begin
          csr_alu_in[0] <= 1'b0;
          alu_state     <= ALU_WAIT_ALUOP;
        end

        ALU_PROCESSING: begin
          if (csr_alu_out_FU[2]) begin
            csr_alu_in[0]              <= 1'b1;
            alu_state                  <= ALU_ACK_RES;
            reg_file[`CSR_OUT_REG_IDX] <= {{(`DBITS-`ALUCSROUTBITS){1'b0}}, csr_alu_out_FU};

          end else begin
            csr_alu_in[0] <= 1'b0;
          end
        end

        default: begin
          alu_state  <= ALU_WAIT_ALUOP;
          csr_alu_in <= '0;
        end
      endcase
    end
  end

endmodule