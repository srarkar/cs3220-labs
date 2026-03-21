// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram_burst.h for the primary calling header

#include "Vtb_axi4_ram_burst__pch.h"

void Vtb_axi4_ram_burst_tb_axi4_ram_burst___ctor_var_reset(Vtb_axi4_ram_burst_tb_axi4_ram_burst* vlSelf);

void Vtb_axi4_ram_burst_tb_axi4_ram_burst::ctor(Vtb_axi4_ram_burst__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_axi4_ram_burst_tb_axi4_ram_burst___ctor_var_reset(this);
}

void Vtb_axi4_ram_burst_tb_axi4_ram_burst::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_axi4_ram_burst_tb_axi4_ram_burst::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
