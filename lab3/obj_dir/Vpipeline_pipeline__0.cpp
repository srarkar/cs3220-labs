// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

extern const VlWide<8>/*255:0*/ Vpipeline__ConstPool__CONST_hea9cc873_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vpipeline__ConstPool__TABLE_h486bc076_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vpipeline__ConstPool__TABLE_hcec10f5e_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h29143c0b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h5064a2f5_0;

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__num_brjmp;
    __Vdly__my_FE_stage__DOT__num_brjmp = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__mis_pred;
    __Vdly__my_FE_stage__DOT__mis_pred = 0;
    VlWide<5>/*136:0*/ __Vdly__my_FE_stage__DOT__FE_latch;
    VL_ZERO_W(137, __Vdly__my_FE_stage__DOT__FE_latch);
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a = 0;
    CData/*3:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e = 0;
    QData/*50:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient = 0;
    QData/*50:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder = 0;
    CData/*5:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count = 0;
    QData/*50:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend = 0;
    QData/*50:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a = 0;
    CData/*3:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s = 0;
    IData/*31:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s = 0;
    SData/*9:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e = 0;
    QData/*47:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product = 0;
    IData/*23:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky = 0;
    CData/*0:0*/ __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb = 0;
    CData/*3:0*/ __VdlyDim0__my_FE_stage__DOT__BTB_VALID__v0;
    __VdlyDim0__my_FE_stage__DOT__BTB_VALID__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__BTB_VALID__v0;
    __VdlySet__my_FE_stage__DOT__BTB_VALID__v0 = 0;
    IData/*25:0*/ __VdlyVal__my_FE_stage__DOT__BTB_TAG__v0;
    __VdlyVal__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*3:0*/ __VdlyDim0__my_FE_stage__DOT__BTB_TAG__v0;
    __VdlyDim0__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__BTB_TAG__v0;
    __VdlySet__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*1:0*/ __VdlyVal__my_FE_stage__DOT__PHT__v0;
    __VdlyVal__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*7:0*/ __VdlyDim0__my_FE_stage__DOT__PHT__v0;
    __VdlyDim0__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__PHT__v0;
    __VdlySet__my_FE_stage__DOT__PHT__v0 = 0;
    IData/*31:0*/ __VdlyVal__my_FE_stage__DOT__BTB_TARGET__v0;
    __VdlyVal__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    CData/*3:0*/ __VdlyDim0__my_FE_stage__DOT__BTB_TARGET__v0;
    __VdlyDim0__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__BTB_TARGET__v0;
    __VdlySet__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_11;
    // Body
    __Vdly__my_FE_stage__DOT__mis_pred = vlSelfRef.__PVT__my_FE_stage__DOT__mis_pred;
    __Vdly__my_FE_stage__DOT__num_brjmp = vlSelfRef.__PVT__my_FE_stage__DOT__num_brjmp;
    vlSelfRef.__VdlySet__my_MEM_stage__DOT__dmem__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__BTB_VALID__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__BTB_TAG__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__PHT__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__BTB_TARGET__v0 = 0U;
    vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state = vlSelfRef.__PVT__my_DE_stage__DOT__alu_state;
    __Vdly__my_FE_stage__DOT__FE_latch[0U] = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
    __Vdly__my_FE_stage__DOT__FE_latch[1U] = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
    __Vdly__my_FE_stage__DOT__FE_latch[2U] = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
    __Vdly__my_FE_stage__DOT__FE_latch[3U] = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
    __Vdly__my_FE_stage__DOT__FE_latch[4U] = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack;
    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb 
        = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb;
    vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[0U] 
        = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U];
    vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[1U] 
        = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U];
    vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[2U] 
        = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U];
    vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[3U] 
        = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U];
    vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[4U] 
        = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U];
    vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[5U] 
        = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U];
    vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[6U] 
        = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U];
    vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[7U] 
        = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U];
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX) {
            vlSelfRef.__PVT__my_FE_stage__DOT__BHR 
                = ((0x000000feU & (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR)) 
                   | (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
            __VdlyDim0__my_FE_stage__DOT__BTB_VALID__v0 
                = (0x0000000fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  >> 0x0000001aU));
            __VdlySet__my_FE_stage__DOT__BTB_VALID__v0 = 1U;
            __VdlyVal__my_FE_stage__DOT__BTB_TAG__v0 
                = (0x03ffffffU & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                   << 2U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000001eU)));
            __VdlyDim0__my_FE_stage__DOT__BTB_TAG__v0 
                = (0x0000000fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  >> 0x0000001aU));
            __VdlySet__my_FE_stage__DOT__BTB_TAG__v0 = 1U;
            __VdlyVal__my_FE_stage__DOT__PHT__v0 = 
                ((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)
                  ? ((2U & vlSelfRef.__PVT__my_FE_stage__DOT__PHT
                      [(0x000000ffU & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])])
                      ? 3U : ((1U & vlSelfRef.__PVT__my_FE_stage__DOT__PHT
                               [(0x000000ffU & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])])
                               ? 2U : 1U)) : ((2U & 
                                               vlSelfRef.__PVT__my_FE_stage__DOT__PHT
                                               [(0x000000ffU 
                                                 & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])])
                                               ? ((1U 
                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__PHT
                                                   [
                                                   (0x000000ffU 
                                                    & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])])
                                                   ? 2U
                                                   : 1U)
                                               : 0U));
            __VdlyDim0__my_FE_stage__DOT__PHT__v0 = 
                (0x000000ffU & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U]);
            __VdlySet__my_FE_stage__DOT__PHT__v0 = 1U;
            __VdlyVal__my_FE_stage__DOT__BTB_TARGET__v0 
                = vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX;
            __VdlyDim0__my_FE_stage__DOT__BTB_TARGET__v0 
                = (0x0000000fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  >> 0x0000001aU));
            __VdlySet__my_FE_stage__DOT__BTB_TARGET__v0 = 1U;
        }
    }
    if ((0x00000040U & vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])) {
        vlSelfRef.__VdlyVal__my_MEM_stage__DOT__dmem__v0 
            = ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                << 0x00000018U) | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 8U));
        vlSelfRef.__VdlyDim0__my_MEM_stage__DOT__dmem__v0 
            = (0x00003fffU & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                              >> 0x0000000aU));
        vlSelfRef.__VdlySet__my_MEM_stage__DOT__dmem__v0 = 1U;
    }
    __Vtemp_11[0U] = (((IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_store)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op))
                                                    ? vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z
                                                    : vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z)
                                                   : 
                                                  vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                  [
                                                  (0x0000001fU 
                                                   & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U) 
                                                      | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x0000001cU)))]))) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   ((1U 
                                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                     ? 
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                      << 0x0000000bU) 
                                                                     | (0x000007ffU 
                                                                        & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 4U) 
                                                                           | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x0000001cU))))
                                                                     : 
                                                                    ((4U 
                                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                      ? 
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                       << 0x0000000bU) 
                                                                      | ((0x000007e0U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 4U)) 
                                                                         | (0x0000001fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x0000000fU))))
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                       ? 
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                        << 0x0000000cU) 
                                                                       | ((0x00000800U 
                                                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 4U)) 
                                                                          | ((0x000007e0U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U)) 
                                                                             | (0x0000001eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000fU)))))
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                        ? 
                                                                       (0xfffff000U 
                                                                        & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x00000018U) 
                                                                           | (0x00fff000U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 8U))))
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                          << 0x00000014U) 
                                                                         | ((((0x000001feU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000013U)) 
                                                                              | (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))) 
                                                                             << 0x0000000bU) 
                                                                            | (0x000007feU 
                                                                               & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (0x0000000eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))))))
                                                                         : 0U))))))))) 
                       << 0x00000012U) | (((((((0x1cU 
                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                               | ((0x1dU 
                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((0x1eU 
                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | ((0x1fU 
                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | ((0x20U 
                                                            == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                           | (0x21U 
                                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                              << 4U) 
                                             | ((((0x19U 
                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((0x1aU 
                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | (0x1bU 
                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                 << 3U) 
                                                | ((0x17U 
                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   << 2U))) 
                                            | (((0x18U 
                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE))) 
                                           << 0x0000000dU) 
                                          | ((0x00001f00U 
                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 7U)) 
                                             | (0x000000ffU 
                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U]))));
    __Vtemp_11[1U] = (((IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_store)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op))
                                                    ? vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z
                                                    : vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z)
                                                   : 
                                                  vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                  [
                                                  (0x0000001fU 
                                                   & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U) 
                                                      | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x0000001cU)))]))) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   ((1U 
                                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                     ? 
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                      << 0x0000000bU) 
                                                                     | (0x000007ffU 
                                                                        & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 4U) 
                                                                           | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x0000001cU))))
                                                                     : 
                                                                    ((4U 
                                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                      ? 
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                       << 0x0000000bU) 
                                                                      | ((0x000007e0U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 4U)) 
                                                                         | (0x0000001fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x0000000fU))))
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                       ? 
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                        << 0x0000000cU) 
                                                                       | ((0x00000800U 
                                                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 4U)) 
                                                                          | ((0x000007e0U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U)) 
                                                                             | (0x0000001eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000fU)))))
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                        ? 
                                                                       (0xfffff000U 
                                                                        & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x00000018U) 
                                                                           | (0x00fff000U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 8U))))
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                          << 0x00000014U) 
                                                                         | ((((0x000001feU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000013U)) 
                                                                              | (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))) 
                                                                             << 0x0000000bU) 
                                                                            | (0x000007feU 
                                                                               & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (0x0000000eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))))))
                                                                         : 0U))))))))) 
                       >> 0x0000000eU) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_store)
                                                                       ? 
                                                                      ((1U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op))
                                                                        ? vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z
                                                                        : vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z)
                                                                       : 
                                                                      vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                                      [
                                                                      (0x0000001fU 
                                                                       & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 4U) 
                                                                          | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x0000001cU)))]))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      ((1U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                        ? 
                                                                       (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                         << 0x0000000bU) 
                                                                        | (0x000007ffU 
                                                                           & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 4U) 
                                                                              | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))))
                                                                        : 
                                                                       ((4U 
                                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                          << 0x0000000bU) 
                                                                         | ((0x000007e0U 
                                                                             & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U)) 
                                                                            | (0x0000001fU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000fU))))
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                          ? 
                                                                         (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                           << 0x0000000cU) 
                                                                          | ((0x00000800U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)) 
                                                                             | ((0x000007e0U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U)) 
                                                                                | (0x0000001eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000fU)))))
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                           ? 
                                                                          (0xfffff000U 
                                                                           & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 0x00000018U) 
                                                                              | (0x00fff000U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 8U))))
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                            ? 
                                                                           (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                             << 0x00000014U) 
                                                                            | ((((0x000001feU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000013U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))) 
                                                                                << 0x0000000bU) 
                                                                               | (0x000007feU 
                                                                                & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (0x0000000eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))))))
                                                                            : 0U)))))))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000012U));
    __Vtemp_11[2U] = ((IData)(((((QData)((IData)(((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_store)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op))
                                                    ? vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z
                                                    : vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z)
                                                   : 
                                                  vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                  [
                                                  (0x0000001fU 
                                                   & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U) 
                                                      | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x0000001cU)))]))) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   ((1U 
                                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                     ? 
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                      << 0x0000000bU) 
                                                                     | (0x000007ffU 
                                                                        & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 4U) 
                                                                           | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x0000001cU))))
                                                                     : 
                                                                    ((4U 
                                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                      ? 
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                       << 0x0000000bU) 
                                                                      | ((0x000007e0U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 4U)) 
                                                                         | (0x0000001fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x0000000fU))))
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                       ? 
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                        << 0x0000000cU) 
                                                                       | ((0x00000800U 
                                                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 4U)) 
                                                                          | ((0x000007e0U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U)) 
                                                                             | (0x0000001eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000fU)))))
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                        ? 
                                                                       (0xfffff000U 
                                                                        & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x00000018U) 
                                                                           | (0x00fff000U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 8U))))
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                          << 0x00000014U) 
                                                                         | ((((0x000001feU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000013U)) 
                                                                              | (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))) 
                                                                             << 0x0000000bU) 
                                                                            | (0x000007feU 
                                                                               & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (0x0000000eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))))))
                                                                         : 0U)))))))) 
                               >> 0x00000020U)) >> 0x0000000eU);
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__mis_pred = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__mis_pred 
            = __Vdly__my_FE_stage__DOT__mis_pred;
        __Vdly__my_FE_stage__DOT__num_brjmp = 0U;
    } else {
        vlSelfRef.__PVT__cycle_count = ((IData)(1U) 
                                        + vlSelfRef.__PVT__cycle_count);
        if (vlSelfRef.__PVT__from_AGEX_to_DE) {
            __Vdly__my_FE_stage__DOT__mis_pred = ((IData)(1U) 
                                                  + vlSelfRef.__PVT__my_FE_stage__DOT__mis_pred);
        }
        vlSelfRef.__PVT__my_FE_stage__DOT__mis_pred 
            = __Vdly__my_FE_stage__DOT__mis_pred;
        if (vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX) {
            __Vdly__my_FE_stage__DOT__num_brjmp = ((IData)(1U) 
                                                   + vlSelfRef.__PVT__my_FE_stage__DOT__num_brjmp);
        }
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__num_brjmp = __Vdly__my_FE_stage__DOT__num_brjmp;
    if (__VdlySet__my_FE_stage__DOT__BTB_VALID__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[__VdlyDim0__my_FE_stage__DOT__BTB_VALID__v0] = 1U;
    }
    if (__VdlySet__my_FE_stage__DOT__BTB_TAG__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[__VdlyDim0__my_FE_stage__DOT__BTB_TAG__v0] 
            = __VdlyVal__my_FE_stage__DOT__BTB_TAG__v0;
    }
    if (__VdlySet__my_FE_stage__DOT__PHT__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__PHT[__VdlyDim0__my_FE_stage__DOT__PHT__v0] 
            = __VdlyVal__my_FE_stage__DOT__PHT__v0;
    }
    if (__VdlySet__my_FE_stage__DOT__BTB_TARGET__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[__VdlyDim0__my_FE_stage__DOT__BTB_TARGET__v0] 
            = __VdlyVal__my_FE_stage__DOT__BTB_TARGET__v0;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        __Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        __Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        __Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        __Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[0U];
        vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[1U];
        vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[2U];
        vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[3U];
        vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[4U];
        vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[5U];
        vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[6U];
        vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[7U];
        vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs = 0U;
    } else {
        if (vlSelfRef.__PVT__from_AGEX_to_DE) {
            __Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            __Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            __Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            __Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            __Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        } else if (vlSelfRef.__PVT__from_DE_to_FE) {
            __Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
            __Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
            __Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
            __Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
            __Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
        } else {
            __Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = (((IData)((((QData)((IData)(((IData)(4U) 
                                               + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE)))) 
                    << 8U) | (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
            __Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = (((IData)((((QData)((IData)(((IData)(4U) 
                                               + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE)))) 
                    >> 0x00000018U) | ((IData)(((((QData)((IData)(
                                                                  ((IData)(4U) 
                                                                   + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE))) 
                                                >> 0x00000020U)) 
                                       << 8U));
            __Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                    << 8U) | ((IData)(((((QData)((IData)(
                                                         ((IData)(4U) 
                                                          + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE))) 
                                       >> 0x00000020U)) 
                              >> 0x00000018U));
            __Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                    >> 0x00000018U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                >> 0x00000020U)) 
                                       << 8U));
            __Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = (((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE)) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                             >> 0x00000020U)) >> 0x00000018U) 
                   | ((0U != vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE) 
                      << 8U));
        }
        if (vlSelfRef.__PVT__my_DE_stage__DOT__pipeline_stall_DE) {
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[0U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[0U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[1U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[1U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[2U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[2U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[3U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[3U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[4U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[4U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[5U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[5U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[6U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[6U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[7U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[7U];
        } else if (vlSelfRef.__PVT__my_DE_stage__DOT__alu_stall) {
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[0U] 
                = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[1U] 
                = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[2U] 
                = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[3U] 
                = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[4U] 
                = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[5U] 
                = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[6U] 
                = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[7U] 
                = vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U];
        } else {
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[0U] 
                = __Vtemp_11[0U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[1U] 
                = __Vtemp_11[1U];
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                                [
                                                                (0x0000001fU 
                                                                 & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x00000017U))])))) 
                    << 0x00000012U) | __Vtemp_11[2U]);
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[3U] 
                = ((0xff000000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                   << 0x00000010U)) 
                   | (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x00000017U))])))) 
                       >> 0x0000000eU) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                                      [
                                                                      (0x0000001fU 
                                                                       & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x00000017U))]))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000012U)));
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[4U] 
                = (((0x00ff0000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    << 0x00000010U)) 
                    | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                       >> 0x00000010U)) | (0xff000000U 
                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                              << 0x00000010U)));
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[5U] 
                = (((0x00ff0000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    << 0x00000010U)) 
                    | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                       >> 0x00000010U)) | (0xff000000U 
                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              << 0x00000010U)));
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[6U] 
                = (((0x00ff0000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    << 0x00000010U)) 
                    | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                       >> 0x00000010U)) | (0xff000000U 
                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              << 0x00000010U)));
            vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[7U] 
                = (((0x00ff0000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    << 0x00000010U)) 
                    | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                       >> 0x00000010U)) | (0x01000000U 
                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0x00000010U)));
        }
        if ((((~ (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__pipeline_stall_DE)) 
              & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
             & (0x1bU > (0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x0000000fU))))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0x00000000ffffffffULL & ((IData)(1U) 
                                               << (0x0000001fU 
                                                   & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x0000000fU)))));
        }
        if ((0x00000020U & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x0000001fU 
                                       & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                   & vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs);
        }
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[4U];
    if (((((((((0U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) 
           | (5U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) 
          | (6U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack = 1U;
            if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack) 
                 & ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op)) 
                    & ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in) 
                       >> 1U)))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a 
                    = vlSelfRef.__PVT__my_DE_stage__DOT__alu_op1;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack = 0U;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack) 
                 & ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op)) 
                    & ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in) 
                       >> 2U)))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b 
                    = vlSelfRef.__PVT__my_DE_stage__DOT__alu_op2;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack = 0U;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m 
                = (0x007fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a);
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m 
                = (0x007fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b);
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 3U;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e 
                = (0x000003ffU & ((0x000000ffU & (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a 
                                                  >> 0x17U)) 
                                  - (IData)(0x007fU)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e 
                = (0x000003ffU & ((0x000000ffU & (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b 
                                                  >> 0x17U)) 
                                  - (IData)(0x007fU)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s 
                = (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a 
                   >> 0x1fU);
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s 
                = (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b 
                   >> 0x1fU);
        } else if ((3U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
            if ((((0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e)) 
                  & (0U != vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m)) 
                 | ((0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e)) 
                    & (0U != vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m)))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z = 0xffc00000U;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0x0cU;
            } else if ((0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s) 
                                       ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s)) 
                                      << 0x0000001fU));
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0x0cU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e))) 
                     & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m))) {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z = 0xffc00000U;
                }
            } else if ((0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s) 
                                       ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s)) 
                                      << 0x0000001fU));
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0x0cU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e))) 
                     & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m))) {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z = 0xffc00000U;
                }
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e))) 
                        & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
                    = (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s) 
                        ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s)) 
                       << 0x0000001fU);
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0x0cU;
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e))) 
                        & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
                    = (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s) 
                        ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s)) 
                       << 0x0000001fU);
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0x0cU;
            } else {
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e)))) {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e = 0x0382U;
                } else {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m 
                        = (0x00800000U | __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m);
                }
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e)))) {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e = 0x0382U;
                } else {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m 
                        = (0x00800000U | __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m);
                }
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
            if ((0x00800000U & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m)) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 5U;
            } else {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m, 1U));
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e 
                    = (0x000003ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e) 
                                      - (IData)(1U)));
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
            if ((0x00800000U & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m)) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 6U;
            } else {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m, 1U));
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e 
                    = (0x000003ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e) 
                                      - (IData)(1U)));
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s 
                = ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s) 
                   ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e 
                = (0x000003ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e) 
                                                 + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e))));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product 
                = (0x0000ffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m)) 
                                            * (QData)((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m))));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 7U;
        } else {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m 
                = (0x00ffffffU & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product 
                                          >> 0x18U)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 8U;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard 
                = (1U & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product 
                                 >> 0x17U)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit 
                = (1U & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product 
                                 >> 0x16U)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky 
                = (0U != (0x003fffffU & (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product)));
        }
    } else if ((8U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
        if ((0x00800000U & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m)) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 9U;
        } else {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e 
                = (0x000003ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e) 
                                  - (IData)(1U)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m 
                = (0x00ffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m, 1U));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m 
                = ((0x00fffffeU & __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m) 
                   | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard 
                = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit = 0U;
        }
    } else if ((9U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
        if (VL_GTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e)))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m 
                = (0x00ffffffU & VL_SHIFTR_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m, 1U));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky 
                = ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky) 
                   | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit 
                = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard 
                = (1U & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m);
        } else {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0x0aU;
        }
    } else if ((0x0aU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
        if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard) 
             & (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit) 
                 | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky)) 
                | vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m 
                = (0x00ffffffU & ((IData)(1U) + vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m));
            if ((0x00ffffffU == vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m)) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e)));
            }
        }
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0x0bU;
    } else if ((0x0bU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
            = ((0xff800000U & __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z) 
               | (0x007fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m));
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0x0cU;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
            = ((0x007fffffU & __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z) 
               | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s) 
                   << 0x0000001fU) | (0x7f800000U & 
                                      (((IData)(0x7fU) 
                                        + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e)) 
                                       << 0x00000017U))));
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e))) 
             & (~ (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m 
                   >> 0x17U)))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
                = (0x807fffffU & __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z);
        }
        if (VL_LTS_III(32, 0x0000007fU, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e)))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
                = (0x7f800000U | ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s) 
                                  << 0x0000001fU));
        }
    } else if ((0x0cU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb = 1U;
        vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z;
        if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb) 
             & ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op)) 
                & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in)))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb = 0U;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0U;
        }
    }
    if (((((((((0U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) 
           | (5U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) 
          | (6U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack = 1U;
            if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack) 
                 & ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op)) 
                    & ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in) 
                       >> 1U)))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a 
                    = vlSelfRef.__PVT__my_DE_stage__DOT__alu_op1;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack = 0U;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack) 
                 & ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op)) 
                    & ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in) 
                       >> 2U)))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b 
                    = vlSelfRef.__PVT__my_DE_stage__DOT__alu_op2;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack = 0U;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m 
                = (0x007fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a);
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m 
                = (0x007fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b);
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 3U;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e 
                = (0x000003ffU & ((0x000000ffU & (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a 
                                                  >> 0x17U)) 
                                  - (IData)(0x007fU)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e 
                = (0x000003ffU & ((0x000000ffU & (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b 
                                                  >> 0x17U)) 
                                  - (IData)(0x007fU)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s 
                = (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a 
                   >> 0x1fU);
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s 
                = (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b 
                   >> 0x1fU);
        } else if ((3U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
            if ((((0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e)) 
                  & (0U != vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m)) 
                 | ((0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e)) 
                    & (0U != vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m)))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z = 0xffc00000U;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0eU;
            } else if (((0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e)) 
                        & (0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e)))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z = 0xffc00000U;
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0eU;
            } else if ((0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s) 
                                       ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s)) 
                                      << 0x0000001fU));
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0eU;
            } else if ((0x0080U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
                    = (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s) 
                        ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s)) 
                       << 0x0000001fU);
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0eU;
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e))) 
                        & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
                    = (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s) 
                        ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s)) 
                       << 0x0000001fU);
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0eU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e))) 
                     & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m))) {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z = 0xffc00000U;
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0eU;
                }
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e))) 
                        & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m))) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s) 
                                       ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s)) 
                                      << 0x0000001fU));
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0eU;
            } else {
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e)))) {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e = 0x0382U;
                } else {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m 
                        = (0x00800000U | __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m);
                }
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e)))) {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e = 0x0382U;
                } else {
                    __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m 
                        = (0x00800000U | __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m);
                }
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
            if ((0x00800000U & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m)) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 5U;
            } else {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m, 1U));
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e 
                    = (0x000003ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e) 
                                      - (IData)(1U)));
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
            if ((0x00800000U & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m)) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 6U;
            } else {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m 
                    = (0x00ffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m, 1U));
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e 
                    = (0x000003ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e) 
                                      - (IData)(1U)));
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s 
                = ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s) 
                   ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e 
                = (0x000003ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e) 
                                  - (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient = 0ULL;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder = 0ULL;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count = 0U;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend 
                = (0x0007ffffffffffffULL & VL_SHIFTL_QQI(51,51,32, (QData)((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m)), 0x0000001bU));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor 
                = (QData)((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 7U;
        } else {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient 
                = (0x0007ffffffffffffULL & VL_SHIFTL_QQI(51,51,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient, 1U));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder 
                = (0x0007ffffffffffffULL & VL_SHIFTL_QQI(51,51,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder, 1U));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 8U;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder 
                = ((0x0007fffffffffffeULL & __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder) 
                   | (IData)((IData)((1U & (IData)(
                                                   (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend 
                                                    >> 0x32U))))));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend 
                = (0x0007ffffffffffffULL & VL_SHIFTL_QQI(51,51,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend, 1U));
        }
    } else if ((8U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
        if ((vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder 
             >= vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor)) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder 
                = (0x0007ffffffffffffULL & (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder 
                                            - vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient 
                = (1ULL | __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient);
        }
        if ((0x31U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 9U;
        } else {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 7U;
        }
    } else if ((9U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m 
            = (0x00ffffffU & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient 
                                      >> 3U)));
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0aU;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard 
            = (1U & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient 
                             >> 2U)));
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit 
            = (1U & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient 
                             >> 1U)));
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky 
            = (1U & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient) 
                     | (0ULL != vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder)));
    } else if ((0x0aU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
        if (((~ (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m 
                 >> 0x17U)) & VL_LTS_III(32, 0xffffff82U, 
                                         VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e))))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e 
                = (0x000003ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e) 
                                  - (IData)(1U)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m 
                = (0x00ffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m, 1U));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m 
                = ((0x00fffffeU & __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m) 
                   | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard 
                = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit = 0U;
        } else {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0bU;
        }
    } else if ((0x0bU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
        if (VL_GTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e)))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e)));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m 
                = (0x00ffffffU & VL_SHIFTR_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m, 1U));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky 
                = ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky) 
                   | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit));
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit 
                = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard 
                = (1U & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m);
        } else {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0cU;
        }
    } else if ((0x0cU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
        if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard) 
             & (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit) 
                 | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky)) 
                | vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m 
                = (0x00ffffffU & ((IData)(1U) + vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m));
            if ((0x00ffffffU == vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m)) {
                __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e)));
            }
        }
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0dU;
    } else if ((0x0dU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
            = ((0xff800000U & __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z) 
               | (0x007fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m));
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0x0eU;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
            = ((0x007fffffU & __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z) 
               | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s) 
                   << 0x0000001fU) | (0x7f800000U & 
                                      (((IData)(0x7fU) 
                                        + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e)) 
                                       << 0x00000017U))));
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e))) 
             & (~ (vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m 
                   >> 0x17U)))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
                = (0x807fffffU & __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z);
        }
        if (VL_LTS_III(32, 0x0000007fU, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e)))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
                = (0x7f800000U | ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s) 
                                  << 0x0000001fU));
        }
    } else if ((0x0eU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state))) {
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb = 1U;
        vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z;
        if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb) 
             & ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op)) 
                & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in)))) {
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb = 0U;
            __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch = 0x00000200U;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack = 0U;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack = 0U;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb = 0U;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = 0U;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack = 0U;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack = 0U;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb = 0U;
        __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = 0U;
    } else if (vlSelfRef.__PVT__from_AGEX_to_DE) {
        vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
            = vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__from_DE_to_FE)))) {
        vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
            = vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE;
    }
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6 
        = (IData)((0x00003300U == (0x00707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15 
        = (IData)((0x00503300U == (0x00707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22 
        = (IData)(((0x00100000U == (0x00700000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                   & (0U == (0x00feU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18 
        = (IData)((0x00501300U == (0x00707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack;
    vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb 
        = __Vdly__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb;
    vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6) 
                                                   & (0U 
                                                      == 
                                                      (0x00feU 
                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                   ? 1U
                                                   : 
                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6) 
                                                    & (0x0040U 
                                                       == 
                                                       (0x00feU 
                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            ((0x00703300U 
                                                              == 
                                                              (0x00707f00U 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0x00feU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                     ? 3U
                                                     : 
                                                    ((IData)(
                                                             ((0x00603300U 
                                                               == 
                                                               (0x00707f00U 
                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x00feU 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              ((0x00403300U 
                                                                == 
                                                                (0x00707f00U 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x00feU 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                       ? 5U
                                                       : 
                                                      ((IData)(
                                                               ((0x00203300U 
                                                                 == 
                                                                 (0x00707f00U 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                & (0U 
                                                                   == 
                                                                   (0x00feU 
                                                                    & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                        ? 6U
                                                        : 
                                                       ((IData)(
                                                                ((0x00303300U 
                                                                  == 
                                                                  (0x00707f00U 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x00feU 
                                                                     & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                         ? 7U
                                                         : 
                                                        (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15) 
                                                          & (0x0040U 
                                                             == 
                                                             (0x00feU 
                                                              & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                          ? 8U
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15) 
                                                           & (0U 
                                                              == 
                                                              (0x00feU 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                           ? 9U
                                                           : 
                                                          ((IData)(
                                                                   ((0x00003300U 
                                                                     == 
                                                                     (0x00007f00U 
                                                                      & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                    & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22)))
                                                            ? 0x0aU
                                                            : 
                                                           (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6) 
                                                             & (2U 
                                                                == 
                                                                (0x00feU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0x0bU
                                                             : 
                                                            ((IData)(
                                                                     (0x00001300U 
                                                                      == 
                                                                      (0x00707f00U 
                                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0x0cU
                                                              : 
                                                             ((IData)(
                                                                      (0x00701300U 
                                                                       == 
                                                                       (0x00707f00U 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0x0dU
                                                               : 
                                                              ((IData)(
                                                                       (0x00601300U 
                                                                        == 
                                                                        (0x00707f00U 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0x0eU
                                                                : 
                                                               ((IData)(
                                                                        (0x00401300U 
                                                                         == 
                                                                         (0x00707f00U 
                                                                          & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0x0fU
                                                                 : 
                                                                ((IData)(
                                                                         (0x00201300U 
                                                                          == 
                                                                          (0x00707f00U 
                                                                           & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(
                                                                          (0x00301300U 
                                                                           == 
                                                                           (0x00707f00U 
                                                                            & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                   ? 0x11U
                                                                   : 
                                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18) 
                                                                    & (0x0040U 
                                                                       == 
                                                                       (0x00feU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                    ? 0x12U
                                                                    : 
                                                                   (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18) 
                                                                     & (0U 
                                                                        == 
                                                                        (0x00feU 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((IData)(
                                                                             ((0x00001300U 
                                                                               == 
                                                                               (0x00007f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                              & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22)))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x37U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U)))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x17U 
                                                                        == 
                                                                        (0x0000007fU 
                                                                         & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 8U)))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(
                                                                                (0x00200300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x00202300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x6fU 
                                                                           == 
                                                                           (0x0000007fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 8U)))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(
                                                                                (0x00006700U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x00006300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x00106300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x00406300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x1eU
                                                                               : 
                                                                              ((IData)(
                                                                                (0x00506300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(
                                                                                (0x00606300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00706300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00207300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00107300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE = vlSelfRef.__PVT__my_FE_stage__DOT__imem
        [(0x00003fffU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                         >> 2U))];
    vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE 
        = (0x000000ffU & ((vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                           >> 2U) ^ (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR)));
    vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE = 
        ((0U != (0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                >> 0x0000000fU))) & 
         ((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
          | ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
             | ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | ((3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                   | ((4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | ((5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | ((6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | ((0x0cU 
                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              | ((0x0dU 
                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                 | ((0x0eU 
                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    | ((0x0fU 
                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       | ((0x10U 
                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x11U 
                                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x12U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x13U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x14U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | ((0x15U 
                                                                          == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | ((0x16U 
                                                                             == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x17U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x19U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))));
    vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2 
        = ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
            >> 8U) & (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)));
    vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_store 
        = ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
           & (0x1bU == (0x0000001fU & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 4U) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x0000001cU)))));
    __Vtableidx1 = vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 
        Vpipeline__ConstPool__TABLE_h486bc076_0[__Vtableidx1];
    vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vpipeline__ConstPool__TABLE_hcec10f5e_0[__Vtableidx1];
    vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE = 
        (((1U < vlSelfRef.__PVT__my_FE_stage__DOT__PHT
           [vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE]) 
          & ((vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG
              [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                               >> 2U))] == (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                            >> 6U)) 
             & vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID
             [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                              >> 2U))])) ? vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET
         [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                          >> 2U))] : ((IData)(4U) + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch));
    vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_3 
        = ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
            >> 8U) & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_store));
    __Vtableidx2 = vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE = 
        Vpipeline__ConstPool__TABLE_h29143c0b_0[__Vtableidx2];
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE = 
        Vpipeline__ConstPool__TABLE_h5064a2f5_0[__Vtableidx2];
}

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__my_DE_stage__DOT__reg_file__v1 = 0U;
    vlSelfRef.__VdlySet__my_DE_stage__DOT__reg_file__v0 = 0U;
}

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00000020U & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
        vlSelfRef.__VdlyVal__my_DE_stage__DOT__reg_file__v1 
            = vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB;
        vlSelfRef.__VdlyDim0__my_DE_stage__DOT__reg_file__v1 
            = (0x0000001fU & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U]);
        vlSelfRef.__VdlySet__my_DE_stage__DOT__reg_file__v1 = 1U;
    }
}

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__3(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__3\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0;
    my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0;
    my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0;
    my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0 = 0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__alu_op = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__alu_op1 = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__alu_op2 = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
    } else {
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in 
            = (1U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in));
        if ((4U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state))) {
                vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state = 0U;
                vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state))) {
                vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state = 0U;
                vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in = 0U;
            } else {
                vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in 
                    = (6U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in));
                vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state))) {
                if ((4U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_out_FU))) {
                    vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in 
                        = (1U | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in));
                    vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state = 4U;
                    vlSelfRef.__VdlyVal__my_DE_stage__DOT__reg_file__v0 
                        = vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_out_FU;
                    vlSelfRef.__VdlySet__my_DE_stage__DOT__reg_file__v0 = 1U;
                } else {
                    vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in 
                        = (6U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in));
                }
            } else {
                vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in 
                    = (6U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in));
                if ((IData)((0x0000003fU == (0x0000003fU 
                                             & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U])))) {
                    vlSelfRef.__PVT__my_DE_stage__DOT__alu_op2 
                        = vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB;
                    vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in 
                        = (4U | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in));
                    vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in 
                = (6U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in));
            if ((IData)((0x0000003eU == (0x0000003fU 
                                         & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U])))) {
                vlSelfRef.__PVT__my_DE_stage__DOT__alu_op1 
                    = vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB;
                vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in 
                    = (2U | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in));
                vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state = 2U;
            }
        } else {
            vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in 
                = (6U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_in));
            if ((IData)(((0x0000003dU == (0x0000003fU 
                                          & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) 
                         & (0U != (0x0000000fU & vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB))))) {
                vlSelfRef.__PVT__my_DE_stage__DOT__alu_op 
                    = (0x0000000fU & vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB);
                vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state = 1U;
            }
        }
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                          [(0x00003fffU 
                                            & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0x0000000aU))])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x00000018U) 
                                                             | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                << 6U) | (0x0000003fU & vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                          [(0x00003fffU 
                                            & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0x0000000aU))])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x00000018U) 
                                                             | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                >> 0x0000001aU) | ((IData)(((((QData)((IData)(
                                                              vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x00003fffU 
                                                               & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                  >> 0x0000000aU))])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                 << 0x00000018U) 
                                                                | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                                            >> 0x00000020U)) 
                                   << 6U));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = (((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                 << 0x0000001eU) | (0x3fffffc0U & (
                                                   vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                   >> 2U))) 
               | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                             [(0x00003fffU 
                                               & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0x0000000aU))])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                 << 0x00000018U) 
                                                                | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                           >> 0x00000020U)) >> 0x0000001aU));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x0000003fU & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                               >> 2U)) | ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                           << 0x0000001eU) 
                                          | (0x3fffffc0U 
                                             & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                >> 2U))));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x0000003fU & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                               >> 2U)) | (0x00001fc0U 
                                          & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                             >> 2U)));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                << 8U) | (0x000000ffU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 8U)));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                >> 0x00000018U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                            >> 0x00000020U)) 
                                   << 8U));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                   << 0x0000000eU) | (0x00003fc0U & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x00000012U))) 
                 | (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x00000012U))) 
                << 8U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                   >> 0x00000020U)) 
                          >> 0x00000018U));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = (((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                   << 0x0000000eU) | (0x00003fc0U & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x00000012U))) 
                 | (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x00000012U))) 
                >> 0x00000018U) | (((0x0000003fU & 
                                     (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                      >> 0x00000012U)) 
                                    | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                        << 0x0000000eU) 
                                       | (0x00003fc0U 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 0x00000012U)))) 
                                   << 8U));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((((0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 >> 0x00000012U)) | 
                 ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                   << 0x0000000eU) | (0x00003fc0U & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       >> 0x00000012U)))) 
                >> 0x00000018U) | (((0x0000003fU & 
                                     (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      >> 0x00000012U)) 
                                    | (0x00000040U 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 0x00000012U))) 
                                   << 8U));
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__alu_state = vlSelfRef.__Vdly__my_DE_stage__DOT__alu_state;
    vlSelfRef.__PVT__my_DE_stage__DOT__alu_stall = 
        ((IData)(vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_3) 
         & ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state)) 
            | ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state)) 
               | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state)))));
    if ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_op1_ready 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack;
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_op2_ready 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack;
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_result_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb;
    } else {
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_op1_ready 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack;
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_op2_ready 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack;
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_result_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb;
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_out_FU 
        = (((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_result_valid) 
            << 2U) | (((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_op2_ready) 
                       << 1U) | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_op1_ready)));
    if (vlSelfRef.__VdlySet__my_MEM_stage__DOT__dmem__v0) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__dmem[vlSelfRef.__VdlyDim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelfRef.__VdlyVal__my_MEM_stage__DOT__dmem__v0;
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB = 
        ((0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   >> 6U))) ? ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                << 0x0000001aU) 
                                               | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                  >> 6U))
          : ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
              << 0x0000001aU) | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                 >> 6U)));
    vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
        = vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[0U];
    vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
        = vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[1U];
    vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
        = vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[2U];
    vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
        = vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[3U];
    vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
        = vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[4U];
    vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
        = vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[5U];
    vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
        = vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[6U];
    vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
        = vlSelfRef.__Vdly__my_DE_stage__DOT__DE_latch[7U];
    vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX 
        = (IData)((0U != (0x00030000U & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])));
    my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
             << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                       >> 0x00000018U)) + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x00000012U)));
    my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                >> 0x00000012U)) + 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                >> 0x00000012U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                >> 0x00000012U)) < 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                >> 0x00000012U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0 
        = VL_LTS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                           << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x00000012U)), 
                     ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)));
    if ((1U & (~ ((((((((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U))) 
                        | (2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                       | (3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                      | (4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                     | (5U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) 
                    | (6U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) 
                   | (7U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U)))) 
                  | (8U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x00000012U))))))) {
        if ((1U & (~ ((((((((9U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U))) 
                            | (0x0aU == (0x0000003fU 
                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U)))) 
                           | (0x0bU == (0x0000003fU 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x00000012U)))) 
                          | (0x0cU == (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))) 
                         | (0x0dU == (0x0000003fU & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x00000012U)))) 
                        | (0x0eU == (0x0000003fU & 
                                     (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))) 
                       | (0x0fU == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U)))) 
                      | (0x10U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U))))))) {
            if (((((((((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U))) 
                       | (0x12U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U)))) 
                      | (0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) 
                     | (0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                    | (0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                   | (0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                  | ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U))) 
                     || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U))))) 
                 | (0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U))))) {
                if ((0x11U != (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) {
                    if ((0x12U != (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) {
                        if ((0x13U != (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))) {
                            if ((0x14U != (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) {
                                if ((0x15U != (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) {
                                    if ((0x16U != (0x0000003fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x00000012U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         >> 0x00000012U))) 
                                                    || (0x1bU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            >> 0x00000012U))))))) {
                                            vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                                                = my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                    = ((0x18U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0
                        : 0U);
            }
        }
    }
    if (((((((((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U))) 
               | (2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x00000012U)))) 
              | (3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x00000012U)))) 
             | (4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))) 
            | (5U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x00000012U)))) 
           | (6U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    >> 0x00000012U)))) 
          | (7U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x00000012U)))) 
         | (8U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x00000012U))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))
                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                : ((2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))
                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x00000012U)) 
                       - ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                           << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x00000012U)))
                    : ((3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))
                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x00000012U)) 
                           & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x00000012U)))
                        : ((4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))
                            ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0x0000000eU) | 
                                (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 >> 0x00000012U)) | 
                               ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x0000000eU) | 
                                (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                 >> 0x00000012U))) : 
                           ((5U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U)))
                             ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x0000000eU) | 
                                 (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x00000012U)) 
                                ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                    << 0x0000000eU) 
                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x00000012U)))
                             : ((6U == (0x0000003fU 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x00000012U)))
                                 ? ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                                     ? 1U : 0U) : (
                                                   (7U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        >> 0x00000012U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, 
                                                                  ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                    << 0x0000000eU) 
                                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      >> 0x00000012U)), 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                      >> 0x00000012U))))))))));
    } else if (((((((((9U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U))) 
                      | (0x0aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) 
                     | (0x0bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                    | (0x0cU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                   | (0x0dU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                  | (0x0eU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) 
                 | (0x0fU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) 
                | (0x10U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))
                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   >> (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x00000012U)))
                : ((0x0aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x00000012U)) 
                       << (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                    : ((0x0bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                        ? VL_MULS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x00000012U)), 
                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x0000000eU) 
                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                        : ((0x0cU == (0x0000003fU & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x00000012U)))
                            ? my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0
                            : ((0x0dU == (0x0000003fU 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x0000000eU) 
                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x00000012U)) 
                                   & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0x0000000eU) 
                                      | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 0x00000012U)))
                                : ((0x0eU == (0x0000003fU 
                                              & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x00000012U)) 
                                       | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 0x0000000eU) 
                                          | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0x00000012U)))
                                    : ((0x0fU == (0x0000003fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x00000012U)))
                                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x00000012U)) 
                                           ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               << 0x0000000eU) 
                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x00000012U)))
                                        : (VL_LTS_III(32, 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0x0000000eU) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x00000012U)), 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        << 0x0000000eU) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                          >> 0x00000012U)))
                                            ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U))) 
                      | (0x12U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) 
                     | (0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                    | (0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                   | (0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                  | (0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) 
                 | ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U))) 
                    || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U))))) 
                | (0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U))))) {
        if ((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x00000012U)) 
                    < ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                        << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x00000012U)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x00000012U)), 
                                 (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x00000012U)));
        } else if ((0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   >> (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0x00000012U)));
        } else if ((0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   << (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0x00000012U)));
        } else if ((0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                    << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0x00000012U));
        } else if ((0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0;
        } else if (((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U))) 
                    || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U))))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                    << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x00000018U));
        }
    } else {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x00000012U)))
                ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x00000012U))
                : 0U);
    }
    my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0 
        = (((0x1cU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))
             ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                  << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     >> 0x00000012U)) 
                == ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x00000012U)))
             : ((0x1dU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))
                 ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x00000012U)) 
                    != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x00000012U)))
                 : ((0x1eU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))
                     ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                     : ((0x1fU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))
                         ? VL_GTES_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x00000012U)), 
                                       ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x00000012U)))
                         : ((0x20U == (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))
                             ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0)
                             : (IData)(((0x00840000U 
                                         == (0x00fc0000U 
                                             & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                        & (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x00000012U)) 
                                           >= ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 0x0000000eU) 
                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x00000012U)))))))))) 
           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
              >> 0x00000011U));
    vlSelfRef.__PVT__my_FE_stage__DOT__do_brjmp_AGEX 
        = (1U & ((IData)(my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0) 
                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                    >> 0x00000010U)));
    vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x00000012U)))
            ? my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0
            : ((0x1aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x00000012U)))
                ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                    << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x00000012U))
                : ((0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                    ? (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0)
                    : ((IData)(my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0)
                        ? my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0
                        : ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                            << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x00000018U))))));
    vlSelfRef.__PVT__from_AGEX_to_DE = ((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX) 
                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                           != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000018U))));
    vlSelfRef.__PVT__my_DE_stage__DOT__pipeline_stall_DE 
        = ((((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE) 
             & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                >> (0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x00000017U)))) 
            | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE) 
               & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                  >> (0x0000001fU & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 4U) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x0000001cU)))))) 
           | ((IData)(vlSelfRef.__PVT__from_AGEX_to_DE) 
              | ((((IData)(vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2) 
                   & (~ (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_op1_ready))) 
                  & (0x000f0000U == (0x000f8000U & 
                                     vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                 | ((((IData)(vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2) 
                      & (~ (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_op2_ready))) 
                     & (0x000f8000U == (0x000f8000U 
                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                    | ((~ (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_result_valid)) 
                       & (IData)(vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_3))))));
    vlSelfRef.__PVT__from_DE_to_FE = ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__pipeline_stall_DE) 
                                      | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_stall));
}

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__4(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__4\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__my_DE_stage__DOT__reg_file__v0) {
        vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1aU] 
            = vlSelfRef.__VdlyVal__my_DE_stage__DOT__reg_file__v0;
    }
    if (vlSelfRef.__VdlySet__my_DE_stage__DOT__reg_file__v1) {
        vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[vlSelfRef.__VdlyDim0__my_DE_stage__DOT__reg_file__v1] 
            = vlSelfRef.__VdlyVal__my_DE_stage__DOT__reg_file__v1;
    }
}
