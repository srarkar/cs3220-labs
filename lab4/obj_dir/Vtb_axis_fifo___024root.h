// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_axis_fifo.h for the primary calling header

#ifndef VERILATED_VTB_AXIS_FIFO___024ROOT_H_
#define VERILATED_VTB_AXIS_FIFO___024ROOT_H_  // guard

#include "verilated.h"
class Vtb_axis_fifo_tb_axis_fifo;


class Vtb_axis_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_axis_fifo___024root final {
  public:
    // CELLS
    Vtb_axis_fifo_tb_axis_fifo* tb_axis_fifo;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtb_axis_fifo__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_axis_fifo___024root(Vtb_axis_fifo__Syms* symsp, const char* namep);
    ~Vtb_axis_fifo___024root();
    VL_UNCOPYABLE(Vtb_axis_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
