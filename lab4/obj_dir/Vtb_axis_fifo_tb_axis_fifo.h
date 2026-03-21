// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_axis_fifo.h for the primary calling header

#ifndef VERILATED_VTB_AXIS_FIFO_TB_AXIS_FIFO_H_
#define VERILATED_VTB_AXIS_FIFO_TB_AXIS_FIFO_H_  // guard

#include "verilated.h"


class Vtb_axis_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_axis_fifo_tb_axis_fifo final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ din_0_rsc_rdy;
    CData/*0:0*/ din_0_rsc_vld;
    CData/*0:0*/ dout_0_rsc_rdy;
    CData/*0:0*/ dout_0_rsc_vld;
    CData/*0:0*/ __PVT__din_0_rsc_vld_reg;
    CData/*0:0*/ __PVT__dout_0_rsc_rdy_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__wr_ptr_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__wr_ptr_next;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__wr_ptr_gray_next;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__wr_addr_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__rd_ptr_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__rd_ptr_next;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__rd_ptr_gray_next;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__rd_addr_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg;
    CData/*4:0*/ __PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__mem_read_data_valid_next;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__rd_axis_vld_next;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__full;
    CData/*0:0*/ __PVT__axis_fifo_inst__DOT__empty;
    IData/*31:0*/ din_0_rsc_dat;
    IData/*31:0*/ dout_0_rsc_dat;
    IData/*31:0*/ __PVT__din_0_rsc_dat_reg;
    VlWide<5>/*128:0*/ __PVT__cycle_count_reg;
    IData/*31:0*/ __PVT__in_0_ptr;
    IData/*31:0*/ __PVT__out_0_ptr;
    IData/*31:0*/ __PVT__f_in_0;
    IData/*31:0*/ __PVT__f_out_0;
    QData/*32:0*/ __PVT__axis_fifo_inst__DOT__mem_read_data_reg;
    QData/*32:0*/ __PVT__axis_fifo_inst__DOT__mem_write_data;
    QData/*32:0*/ __PVT__axis_fifo_inst__DOT__rd_data_reg;
    VlUnpacked<IData/*31:0*/, 1024> __PVT__din_0_rsc_dat_all_reg;
    VlUnpacked<QData/*32:0*/, 16> __PVT__axis_fifo_inst__DOT__mem;

    // INTERNAL VARIABLES
    Vtb_axis_fifo__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_axis_fifo_tb_axis_fifo() = default;
    ~Vtb_axis_fifo_tb_axis_fifo() = default;
    void ctor(Vtb_axis_fifo__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_axis_fifo_tb_axis_fifo);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
