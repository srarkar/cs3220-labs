// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE_PIPELINE_H_
#define VERILATED_VPIPELINE_PIPELINE_H_  // guard

#include "verilated.h"
class Vpipeline_WB_STAGE;


class Vpipeline__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpipeline_pipeline final {
  public:
    // CELLS
    Vpipeline_WB_STAGE* my_WB_stage;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ __PVT__from_DE_to_FE;
        CData/*0:0*/ __PVT__from_AGEX_to_DE;
        CData/*0:0*/ __PVT__my_FE_stage__DOT__is_brjmp_AGEX;
        CData/*0:0*/ __PVT__my_FE_stage__DOT__do_brjmp_AGEX;
        CData/*7:0*/ __PVT__my_FE_stage__DOT__BHR;
        CData/*7:0*/ __PVT__my_FE_stage__DOT__pc_xor_bhr_FE;
        CData/*5:0*/ __PVT__my_DE_stage__DOT__op_I_DE;
        CData/*3:0*/ __PVT__my_DE_stage__DOT__type_I_DE;
        CData/*2:0*/ __PVT__my_DE_stage__DOT__type_immediate_DE;
        CData/*0:0*/ __PVT__my_DE_stage__DOT__pipeline_stall_DE;
        CData/*0:0*/ __PVT__my_DE_stage__DOT__alu_stall;
        CData/*0:0*/ __PVT__my_DE_stage__DOT__wr_reg_DE;
        CData/*0:0*/ __PVT__my_DE_stage__DOT__use_rs1_DE;
        CData/*0:0*/ __PVT__my_DE_stage__DOT__use_rs2_DE;
        CData/*0:0*/ __PVT__my_DE_stage__DOT__csr_op1_ready;
        CData/*0:0*/ __PVT__my_DE_stage__DOT__csr_op2_ready;
        CData/*0:0*/ __PVT__my_DE_stage__DOT__csr_result_valid;
        CData/*2:0*/ __PVT__my_DE_stage__DOT__alu_state;
        CData/*3:0*/ __PVT__my_DE_stage__DOT__alu_op;
        CData/*2:0*/ __PVT__my_DE_stage__DOT__csr_alu_in;
        CData/*2:0*/ __PVT__my_DE_stage__DOT__csr_alu_out_FU;
        CData/*0:0*/ __PVT__my_DE_stage__DOT__is_op3_store;
        CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2;
        CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_3;
        CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0;
        CData/*0:0*/ my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack;
        CData/*3:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky;
        CData/*5:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack;
        CData/*3:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit;
        CData/*0:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky;
        CData/*2:0*/ __Vdly__my_DE_stage__DOT__alu_state;
        CData/*0:0*/ __VdlySet__my_DE_stage__DOT__reg_file__v0;
        CData/*0:0*/ __VdlySet__my_MEM_stage__DOT__dmem__v0;
        CData/*4:0*/ __VdlyDim0__my_DE_stage__DOT__reg_file__v1;
        CData/*0:0*/ __VdlySet__my_DE_stage__DOT__reg_file__v1;
        SData/*9:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e;
        SData/*9:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e;
        SData/*9:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e;
        SData/*9:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e;
        SData/*9:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e;
        SData/*9:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e;
        SData/*13:0*/ __VdlyDim0__my_MEM_stage__DOT__dmem__v0;
        IData/*31:0*/ __PVT__cycle_count;
        VlWide<5>/*136:0*/ __PVT__my_FE_stage__DOT__FE_latch;
        IData/*31:0*/ __PVT__my_FE_stage__DOT__PC_FE_latch;
    };
    struct {
        IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_FE;
        IData/*31:0*/ __PVT__my_FE_stage__DOT__pcnext_FE;
        IData/*31:0*/ __PVT__my_FE_stage__DOT__br_target_AGEX;
        IData/*31:0*/ __PVT__my_FE_stage__DOT__num_brjmp;
        IData/*31:0*/ __PVT__my_FE_stage__DOT__mis_pred;
        IData/*31:0*/ __PVT__my_FE_stage__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __PVT__my_FE_stage__DOT__unnamedblk2__DOT__i;
        VlWide<8>/*248:0*/ __PVT__my_DE_stage__DOT__DE_latch;
        IData/*31:0*/ __PVT__my_DE_stage__DOT__regval_WB;
        IData/*31:0*/ __PVT__my_DE_stage__DOT__in_use_regs;
        IData/*31:0*/ __PVT__my_DE_stage__DOT__alu_op1;
        IData/*31:0*/ __PVT__my_DE_stage__DOT__alu_op2;
        IData/*31:0*/ __PVT__my_DE_stage__DOT__unnamedblk1__DOT__i;
        VlWide<5>/*142:0*/ __PVT__my_AGEX_stage__DOT__AGEX_latch;
        IData/*31:0*/ __PVT__my_AGEX_stage__DOT__aluout_AGEX;
        IData/*31:0*/ __PVT__my_AGEX_stage__DOT__memaddr_AGEX;
        VlWide<5>/*140:0*/ __PVT__my_MEM_stage__DOT__MEM_latch;
        IData/*31:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z;
        IData/*31:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a;
        IData/*31:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b;
        IData/*31:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z;
        IData/*23:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m;
        IData/*23:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m;
        IData/*23:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m;
        IData/*31:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z;
        IData/*31:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a;
        IData/*31:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b;
        IData/*31:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z;
        IData/*23:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m;
        IData/*23:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m;
        IData/*23:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m;
        VlWide<8>/*248:0*/ __Vdly__my_DE_stage__DOT__DE_latch;
        IData/*31:0*/ __VdlyVal__my_DE_stage__DOT__reg_file__v0;
        IData/*31:0*/ __VdlyVal__my_MEM_stage__DOT__dmem__v0;
        IData/*31:0*/ __VdlyVal__my_DE_stage__DOT__reg_file__v1;
        QData/*50:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient;
        QData/*50:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor;
        QData/*50:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend;
        QData/*50:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder;
        QData/*47:0*/ __PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product;
        VlUnpacked<IData/*31:0*/, 16384> __PVT__my_FE_stage__DOT__imem;
        VlUnpacked<CData/*1:0*/, 256> __PVT__my_FE_stage__DOT__PHT;
        VlUnpacked<IData/*25:0*/, 16> __PVT__my_FE_stage__DOT__BTB_TAG;
        VlUnpacked<CData/*0:0*/, 16> __PVT__my_FE_stage__DOT__BTB_VALID;
        VlUnpacked<IData/*31:0*/, 16> __PVT__my_FE_stage__DOT__BTB_TARGET;
        VlUnpacked<IData/*31:0*/, 32> __PVT__my_DE_stage__DOT__reg_file;
        VlUnpacked<IData/*31:0*/, 16384> __PVT__my_MEM_stage__DOT__dmem;
    };

    // INTERNAL VARIABLES
    Vpipeline__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpipeline_pipeline() = default;
    ~Vpipeline_pipeline() = default;
    void ctor(Vpipeline__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpipeline_pipeline);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
