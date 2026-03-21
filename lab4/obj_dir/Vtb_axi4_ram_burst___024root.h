// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_axi4_ram_burst.h for the primary calling header

#ifndef VERILATED_VTB_AXI4_RAM_BURST___024ROOT_H_
#define VERILATED_VTB_AXI4_RAM_BURST___024ROOT_H_  // guard

#include "verilated.h"
class Vtb_axi4_ram_burst_tb_axi4_ram_burst;


class Vtb_axi4_ram_burst__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_axi4_ram_burst___024root final {
  public:
    // CELLS
    Vtb_axi4_ram_burst_tb_axi4_ram_burst* tb_axi4_ram_burst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtb_axi4_ram_burst__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_axi4_ram_burst___024root(Vtb_axi4_ram_burst__Syms* symsp, const char* namep);
    ~Vtb_axi4_ram_burst___024root();
    VL_UNCOPYABLE(Vtb_axi4_ram_burst___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
