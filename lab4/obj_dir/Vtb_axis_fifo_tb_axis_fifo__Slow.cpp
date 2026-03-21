// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "Vtb_axis_fifo__pch.h"

void Vtb_axis_fifo_tb_axis_fifo___ctor_var_reset(Vtb_axis_fifo_tb_axis_fifo* vlSelf);

void Vtb_axis_fifo_tb_axis_fifo::ctor(Vtb_axis_fifo__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_axis_fifo_tb_axis_fifo___ctor_var_reset(this);
}

void Vtb_axis_fifo_tb_axis_fifo::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_axis_fifo_tb_axis_fifo::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
