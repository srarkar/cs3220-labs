// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_axi4_ram__pch.h"

Vtb_axi4_ram__Syms::Vtb_axi4_ram__Syms(VerilatedContext* contextp, const char* namep, Vtb_axi4_ram* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(700);
    // Setup sub module instances
    TOP__tb_axi4_ram.ctor(this, "tb_axi4_ram");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_axi4_ram = &TOP__tb_axi4_ram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_axi4_ram.__Vconfigure(true);
    // Setup scopes
    __Vscopep_tb_axi4_ram = new VerilatedScope{this, "tb_axi4_ram", "tb_axi4_ram", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_tb_axi4_ram->varInsert("correct_V", &(TOP__tb_axi4_ram.correct_V), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axi4_ram->varInsert("correct_V_ap_vld", &(TOP__tb_axi4_ram.correct_V_ap_vld), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
}

Vtb_axi4_ram__Syms::~Vtb_axi4_ram__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_tb_axi4_ram, __Vscopep_tb_axi4_ram = nullptr);
    // Tear down sub module instances
    TOP__tb_axi4_ram.dtor();
}
