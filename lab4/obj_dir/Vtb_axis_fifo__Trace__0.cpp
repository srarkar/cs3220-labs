// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_axis_fifo__Syms.h"


void Vtb_axis_fifo___024root__trace_chg_0_sub_0(Vtb_axis_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axis_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root__trace_chg_0\n"); );
    // Body
    Vtb_axis_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axis_fifo___024root*>(voidSelf);
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_axis_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axis_fifo___024root__trace_chg_0_sub_0(Vtb_axis_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root__trace_chg_0_sub_0\n"); );
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_next),5);
        bufp->chgCData(oldp+1,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next),5);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_next),5);
        bufp->chgCData(oldp+3,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next),5);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next));
        bufp->chgQData(oldp+5,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_write_data),33);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+7,(vlSymsp->TOP__tb_axis_fifo.__PVT__din_0_rsc_dat_reg),32);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__tb_axis_fifo.__PVT__din_0_rsc_vld_reg));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__tb_axis_fifo.__PVT__dout_0_rsc_rdy_reg));
        bufp->chgWData(oldp+10,(vlSymsp->TOP__tb_axis_fifo.__PVT__cycle_count_reg),129);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__tb_axis_fifo.__PVT__in_0_ptr),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__tb_axis_fifo.__PVT__out_0_ptr),32);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_reg),5);
        bufp->chgCData(oldp+18,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg),5);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_addr_reg),5);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_reg),5);
        bufp->chgCData(oldp+21,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg),5);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_addr_reg),5);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg),5);
        bufp->chgCData(oldp+24,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg),5);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg),5);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg),5);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg));
        bufp->chgQData(oldp+33,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[0]),33);
        bufp->chgQData(oldp+35,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[1]),33);
        bufp->chgQData(oldp+37,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[2]),33);
        bufp->chgQData(oldp+39,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[3]),33);
        bufp->chgQData(oldp+41,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[4]),33);
        bufp->chgQData(oldp+43,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[5]),33);
        bufp->chgQData(oldp+45,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[6]),33);
        bufp->chgQData(oldp+47,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[7]),33);
        bufp->chgQData(oldp+49,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[8]),33);
        bufp->chgQData(oldp+51,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[9]),33);
        bufp->chgQData(oldp+53,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[10]),33);
        bufp->chgQData(oldp+55,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[11]),33);
        bufp->chgQData(oldp+57,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[12]),33);
        bufp->chgQData(oldp+59,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[13]),33);
        bufp->chgQData(oldp+61,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[14]),33);
        bufp->chgQData(oldp+63,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem[15]),33);
        bufp->chgQData(oldp+65,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_read_data_reg),33);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg));
        bufp->chgQData(oldp+68,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_data_reg),33);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__full));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__empty));
    }
    bufp->chgBit(oldp+73,(vlSelfRef.clk));
    bufp->chgBit(oldp+74,(vlSelfRef.reset));
    bufp->chgIData(oldp+75,(vlSymsp->TOP__tb_axis_fifo.din_0_rsc_dat),32);
    bufp->chgBit(oldp+76,(vlSymsp->TOP__tb_axis_fifo.din_0_rsc_rdy));
    bufp->chgBit(oldp+77,(vlSymsp->TOP__tb_axis_fifo.din_0_rsc_vld));
    bufp->chgIData(oldp+78,(vlSymsp->TOP__tb_axis_fifo.dout_0_rsc_dat),32);
    bufp->chgBit(oldp+79,(vlSymsp->TOP__tb_axis_fifo.dout_0_rsc_rdy));
    bufp->chgBit(oldp+80,(vlSymsp->TOP__tb_axis_fifo.dout_0_rsc_vld));
    bufp->chgBit(oldp+81,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+82,(((IData)(vlSymsp->TOP__tb_axis_fifo.dout_0_rsc_rdy)
                            ? (IData)(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg)
                            : (IData)(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg))));
    bufp->chgBit(oldp+83,(((~ (IData)(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__full)) 
                           & (IData)(vlSymsp->TOP__tb_axis_fifo.din_0_rsc_vld))));
    bufp->chgBit(oldp+84,(((IData)(vlSymsp->TOP__tb_axis_fifo.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg) 
                           & (IData)(vlSymsp->TOP__tb_axis_fifo.dout_0_rsc_rdy))));
}

void Vtb_axis_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root__trace_cleanup\n"); );
    // Body
    Vtb_axis_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axis_fifo___024root*>(voidSelf);
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
