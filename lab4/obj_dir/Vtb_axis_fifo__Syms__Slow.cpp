// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_axis_fifo__pch.h"

Vtb_axis_fifo__Syms::Vtb_axis_fifo__Syms(VerilatedContext* contextp, const char* namep, Vtb_axis_fifo* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(438);
    // Setup sub module instances
    TOP__tb_axis_fifo.ctor(this, "tb_axis_fifo");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_axis_fifo = &TOP__tb_axis_fifo;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_axis_fifo.__Vconfigure(true);
    // Setup scopes
    __Vscopep_tb_axis_fifo = new VerilatedScope{this, "tb_axis_fifo", "tb_axis_fifo", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_tb_axis_fifo->varInsert("din_0_rsc_dat", &(TOP__tb_axis_fifo.din_0_rsc_dat), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axis_fifo->varInsert("din_0_rsc_rdy", &(TOP__tb_axis_fifo.din_0_rsc_rdy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axis_fifo->varInsert("din_0_rsc_vld", &(TOP__tb_axis_fifo.din_0_rsc_vld), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axis_fifo->varInsert("dout_0_rsc_dat", &(TOP__tb_axis_fifo.dout_0_rsc_dat), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_tb_axis_fifo->varInsert("dout_0_rsc_rdy", &(TOP__tb_axis_fifo.dout_0_rsc_rdy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_tb_axis_fifo->varInsert("dout_0_rsc_vld", &(TOP__tb_axis_fifo.dout_0_rsc_vld), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
}

Vtb_axis_fifo__Syms::~Vtb_axis_fifo__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_tb_axis_fifo, __Vscopep_tb_axis_fifo = nullptr);
    // Tear down sub module instances
    TOP__tb_axis_fifo.dtor();
}
