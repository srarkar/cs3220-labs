// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE_FE_STAGE_H_
#define VERILATED_VPIPELINE_FE_STAGE_H_  // guard

#include "verilated.h"


class Vpipeline__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpipeline_FE_STAGE final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__from_DE_to_FE,0,0);
    VL_IN8(__PVT__from_MEM_to_FE,0,0);
    VL_IN8(__PVT__from_WB_to_FE,0,0);
    CData/*0:0*/ __PVT__valid_FE;
    CData/*7:0*/ __PVT__GHR;
    CData/*7:0*/ __PVT__PHT_AGEX_ADDR;
    CData/*1:0*/ __PVT__PHT_AGEX_VAL;
    CData/*0:0*/ __PVT__br_wrong_now_AGEX;
    CData/*0:0*/ __PVT__br_taken_AGEX;
    CData/*0:0*/ __PVT__brj_AGEX;
    VL_INW(__PVT__from_AGEX_to_FE,98,0,4);
    VL_OUTW(__PVT__FE_latch_out,160,0,6);
    VlWide<6>/*160:0*/ __PVT__FE_latch;
    IData/*31:0*/ __PVT__PC_FE_latch;
    IData/*31:0*/ __PVT__inst_count_FE;
    IData/*31:0*/ __PVT__inst_count_AGEX;
    IData/*31:0*/ __PVT__pcplus_FE;
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ total_branch_predictions;
    IData/*31:0*/ correct_branch_predictions;
    IData/*31:0*/ __PVT__br_target_AGEX;
    VlWide<6>/*160:0*/ __Vdly__FE_latch;
    QData/*58:0*/ __PVT__BTB_FE_VAL;
    VlUnpacked<IData/*31:0*/, 16384> __PVT__imem;
    VlUnpacked<CData/*7:0*/, 256> __PVT__PHT_T;
    VlUnpacked<CData/*1:0*/, 256> __PVT__PHTT;
    VlUnpacked<CData/*1:0*/, 256> __PVT__PHT;
    VlUnpacked<QData/*58:0*/, 16> __PVT__BTB;

    // INTERNAL VARIABLES
    Vpipeline__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpipeline_FE_STAGE() = default;
    ~Vpipeline_FE_STAGE() = default;
    void ctor(Vpipeline__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpipeline_FE_STAGE);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
