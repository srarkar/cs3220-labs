// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram_burst__Syms.h"


void Vtb_axi4_ram_burst___024root__trace_chg_0_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi4_ram_burst___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_chg_0\n"); );
    // Body
    Vtb_axi4_ram_burst___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst___024root*>(voidSelf);
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_axi4_ram_burst___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi4_ram_burst___024root__trace_chg_0_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_chg_0_sub_0\n"); );
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__j),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+1,((0x0000ffffU & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf)),16);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf),8);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__s_axi_awvalid));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_reg));
        bufp->chgIData(oldp+5,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__data_buf),32);
        bufp->chgCData(oldp+6,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__strb_buf),4);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg));
        bufp->chgCData(oldp+10,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bid_reg),8);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready));
        bufp->chgSData(oldp+13,((0x0000ffffU & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf)),16);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf),8);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg));
        bufp->chgCData(oldp+17,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_reg),8);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg),32);
        bufp->chgBit(oldp+19,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n));
        bufp->chgIData(oldp+22,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf),32);
        bufp->chgBit(oldp+24,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_reg))));
        bufp->chgBit(oldp+25,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bid_reg))));
        bufp->chgSData(oldp+26,((0x000003ffU & ((0x00000400U 
                                                 & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                 ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_177)
                                                 : 
                                                ((2U 
                                                  & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                  ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_166)
                                                  : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.axi4_tester_inst__DOT____Vxrand___0))))),10);
        bufp->chgBit(oldp+27,((IData)((0U != (0x00000402U 
                                              & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)))));
        bufp->chgSData(oldp+28,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__addr_q0),10);
        bufp->chgSData(oldp+29,((0x000003ffU & ((0x00200000U 
                                                 & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                 ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)
                                                 : 
                                                ((2U 
                                                  & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                  ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_166)
                                                  : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.axi4_tester_inst__DOT____Vxrand___2))))),10);
        bufp->chgBit(oldp+30,((IData)((0U != (0x00200002U 
                                              & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)))));
        bufp->chgIData(oldp+31,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_q0),32);
        bufp->chgBit(oldp+32,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 3U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_reg)))));
        bufp->chgIData(oldp+33,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm),24);
        bufp->chgBit(oldp+34,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 3U))));
        bufp->chgBit(oldp+35,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 4U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg)))));
        bufp->chgBit(oldp+36,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 4U))));
        bufp->chgBit(oldp+37,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 9U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg)))));
        bufp->chgBit(oldp+38,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 9U))));
        bufp->chgBit(oldp+39,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 0x0000000cU)) 
                                     | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)))));
        bufp->chgBit(oldp+40,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x0000000cU))));
        bufp->chgBit(oldp+41,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 0x00000013U)) 
                                     | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg)))));
        bufp->chgBit(oldp+42,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x00000013U))));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_AWVALID));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t));
        bufp->chgIData(oldp+45,((IData)((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__reg_213)))),32);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_WVALID));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_ARVALID));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t));
        bufp->chgBit(oldp+50,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_RREADY));
        bufp->chgIData(oldp+52,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1)),32);
        bufp->chgCData(oldp+53,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 
                                               >> 0x00000020U)))),2);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_BREADY));
        bufp->chgCData(oldp+56,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BRESP),2);
        bufp->chgSData(oldp+57,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__reg_213),10);
        bufp->chgBit(oldp+58,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 2U))));
        bufp->chgBit(oldp+59,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x0000000bU))));
        bufp->chgSData(oldp+60,((0x000007ffU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_166)))),11);
        bufp->chgSData(oldp+61,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_reg_301),11);
        bufp->chgBit(oldp+62,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 1U))));
        bufp->chgBit(oldp+63,((0x0400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_166))));
        bufp->chgIData(oldp+64,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_316),32);
        bufp->chgSData(oldp+65,((0x000007ffU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_177)))),11);
        bufp->chgSData(oldp+66,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_1_reg_330),11);
        bufp->chgBit(oldp+67,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x0000000aU))));
        bufp->chgQData(oldp+68,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_177))),64);
        bufp->chgQData(oldp+70,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__zext_ln22_reg_335),64);
        bufp->chgBit(oldp+72,((0x0400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_177))));
        bufp->chgIData(oldp+73,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_addr_1_1_reg_351),32);
        bufp->chgSData(oldp+74,((0x000007ffU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)))),11);
        bufp->chgSData(oldp+75,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_2_reg_359),11);
        bufp->chgBit(oldp+76,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x00000015U))));
        bufp->chgBit(oldp+77,((0x0400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_188))));
        bufp->chgSData(oldp+78,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_U__DOT__axi4_tester_data_from_mem_V_ram_U__DOT__addr0),10);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_U__DOT__axi4_tester_data_from_mem_V_ram_U__DOT__ce0));
        bufp->chgBit(oldp+80,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x00000014U))));
        bufp->chgIData(oldp+81,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0),32);
        bufp->chgSData(oldp+82,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_166),11);
        bufp->chgBit(oldp+83,((1U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)));
        bufp->chgSData(oldp+84,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_177),11);
        bufp->chgSData(oldp+85,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_188),11);
        bufp->chgBit(oldp+86,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x00000016U))));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__storemerge_reg_199));
        bufp->chgQData(oldp+89,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_166))),64);
        bufp->chgQData(oldp+91,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_188))),64);
        bufp->chgQData(oldp+93,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__reg_213))),64);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_NS_fsm),24);
        bufp->chgBit(oldp+96,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy));
        bufp->chgQData(oldp+98,((0x0000000100000000ULL 
                                 | (QData)((IData)((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__reg_213)))))),64);
        bufp->chgQData(oldp+100,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p1),64);
        bufp->chgBit(oldp+102,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack));
        bufp->chgQData(oldp+104,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data),64);
        bufp->chgIData(oldp+106,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data)),32);
        bufp->chgIData(oldp+107,((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                          >> 0x00000020U))),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len),32);
        bufp->chgCData(oldp+109,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                   ? (0x0000000fU & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf))
                                   : 0x0fU)),8);
        bufp->chgIData(oldp+110,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt))
                                   ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf
                                   : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                      + VL_SHIFTL_III(32,32,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf)), 2U)))),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf),32);
        bufp->chgIData(oldp+113,((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len 
                                  + vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr)),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf),32);
        bufp->chgIData(oldp+115,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)
                                   ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf
                                   : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
                                      << 0x0000000cU))),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf),32);
        bufp->chgCData(oldp+117,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)
                                   ? (3U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf)
                                   : 3U)),2);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf),2);
        bufp->chgCData(oldp+119,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                   ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf)
                                   : 3U)),2);
        bufp->chgSData(oldp+120,((0x000003ffU & ((IData)(0x03ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                                  >> 2U)))),10);
        bufp->chgSData(oldp+121,((0x000003ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                                  ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf)
                                                  : 
                                                 (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)) 
                                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect))
                                                   ? 
                                                  ((IData)(0x03ffU) 
                                                   - 
                                                   (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                                    >> 2U))
                                                   : 
                                                  (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)) 
                                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                                    ? 
                                                   (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf 
                                                    >> 2U)
                                                    : 0x03ffU))))),10);
        bufp->chgSData(oldp+122,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf),10);
        bufp->chgSData(oldp+123,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf),10);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt),20);
        bufp->chgCData(oldp+125,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                                  << 1U)),2);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__wrreq));
        bufp->chgBit(oldp+127,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                                & (0U == (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                                  >> 0x00000020U))))));
        bufp->chgBit(oldp+128,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                                & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                           >> 0x0000003fU)))));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg1));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg2));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__rdreq));
        bufp->chgBit(oldp+135,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__wrreq))) 
                                         & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling))))));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect));
        bufp->chgQData(oldp+141,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__if_din),35);
        bufp->chgQData(oldp+143,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf),35);
        bufp->chgIData(oldp+145,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf)),32);
        bufp->chgQData(oldp+146,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_data),34);
        bufp->chgQData(oldp+148,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1),34);
        bufp->chgCData(oldp+150,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ar2r_rdata),2);
        bufp->chgCData(oldp+151,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                                >> 0x00000020U)))),2);
        bufp->chgCData(oldp+152,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf),2);
        bufp->chgBit(oldp+153,(((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                         >> 0x00000022U)) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid))));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__rdreq));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__if_read));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t));
        bufp->chgQData(oldp+161,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf),35);
        bufp->chgCData(oldp+163,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr),8);
        bufp->chgCData(oldp+164,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr),8);
        bufp->chgCData(oldp+165,((0x000000ffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push)
                                                  ? 
                                                 ((0xffU 
                                                   == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr))
                                                   ? 0U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))
                                                  : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))),8);
        bufp->chgCData(oldp+166,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext),8);
        bufp->chgBit(oldp+167,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop));
        bufp->chgCData(oldp+169,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw),8);
        bufp->chgBit(oldp+170,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n));
        bufp->chgQData(oldp+171,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp),35);
        bufp->chgBit(oldp+173,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead));
        bufp->chgIData(oldp+174,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf),32);
        bufp->chgBit(oldp+175,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data));
        bufp->chgCData(oldp+176,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt),6);
        bufp->chgBit(oldp+177,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop));
        bufp->chgBit(oldp+179,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready))));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop));
        bufp->chgBit(oldp+182,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push) 
                                   & ((0x0dU == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld))))));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld));
        bufp->chgCData(oldp+184,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout),4);
        bufp->chgCData(oldp+185,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[0]),2);
        bufp->chgCData(oldp+186,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[1]),2);
        bufp->chgCData(oldp+187,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[2]),2);
        bufp->chgCData(oldp+188,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[3]),2);
        bufp->chgCData(oldp+189,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[4]),2);
        bufp->chgCData(oldp+190,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[5]),2);
        bufp->chgCData(oldp+191,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[6]),2);
        bufp->chgCData(oldp+192,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[7]),2);
        bufp->chgCData(oldp+193,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[8]),2);
        bufp->chgCData(oldp+194,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[9]),2);
        bufp->chgCData(oldp+195,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[10]),2);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[11]),2);
        bufp->chgCData(oldp+197,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[12]),2);
        bufp->chgCData(oldp+198,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[13]),2);
        bufp->chgCData(oldp+199,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[14]),2);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__i),32);
        bufp->chgBit(oldp+201,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop));
        bufp->chgBit(oldp+203,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push) 
                                   & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld))))));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld));
        bufp->chgCData(oldp+205,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout),3);
        bufp->chgQData(oldp+206,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[0]),64);
        bufp->chgQData(oldp+208,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[1]),64);
        bufp->chgQData(oldp+210,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[2]),64);
        bufp->chgQData(oldp+212,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[3]),64);
        bufp->chgQData(oldp+214,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[4]),64);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__i),32);
        bufp->chgQData(oldp+217,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2),34);
        bufp->chgBit(oldp+219,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t)) 
                                | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                    & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_RREADY) 
                                       & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t))) 
                                   | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_RREADY))))));
        bufp->chgBit(oldp+220,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t))));
        bufp->chgBit(oldp+221,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
        bufp->chgCData(oldp+222,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state),2);
        bufp->chgCData(oldp+223,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next),2);
        bufp->chgQData(oldp+224,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p2),64);
        bufp->chgBit(oldp+226,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_ARVALID)) 
                                | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                    & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
                                       & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_ARVALID))) 
                                   | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack))))));
        bufp->chgBit(oldp+227,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_ARVALID))));
        bufp->chgBit(oldp+228,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
        bufp->chgCData(oldp+229,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state),2);
        bufp->chgCData(oldp+230,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next),2);
        bufp->chgQData(oldp+231,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p1),64);
        bufp->chgBit(oldp+233,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack));
        bufp->chgQData(oldp+235,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data),64);
        bufp->chgIData(oldp+237,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data)),32);
        bufp->chgIData(oldp+238,((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                                          >> 0x00000020U))),32);
        bufp->chgIData(oldp+239,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len),32);
        bufp->chgCData(oldp+240,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data),8);
        bufp->chgIData(oldp+241,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt))
                                   ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf
                                   : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                      + VL_SHIFTL_III(32,32,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf)), 2U)))),32);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf),32);
        bufp->chgIData(oldp+244,((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len 
                                  + vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr)),32);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf),32);
        bufp->chgIData(oldp+246,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)
                                   ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf
                                   : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
                                      << 0x0000000cU))),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf),32);
        bufp->chgCData(oldp+248,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)
                                   ? (3U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf)
                                   : 3U)),2);
        bufp->chgCData(oldp+249,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf),2);
        bufp->chgCData(oldp+250,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop)
                                   ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf)
                                   : 3U)),2);
        bufp->chgSData(oldp+251,((0x000003ffU & ((IData)(0x03ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                                  >> 2U)))),10);
        bufp->chgSData(oldp+252,((0x000003ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                                  ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf)
                                                  : 
                                                 (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)) 
                                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect))
                                                   ? 
                                                  ((IData)(0x03ffU) 
                                                   - 
                                                   (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                                    >> 2U))
                                                   : 
                                                  (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)) 
                                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                                    ? 
                                                   (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf 
                                                    >> 2U)
                                                    : 0x03ffU))))),10);
        bufp->chgSData(oldp+253,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf),10);
        bufp->chgSData(oldp+254,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf),10);
        bufp->chgCData(oldp+255,(((((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf)) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2))),2);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt),20);
        bufp->chgBit(oldp+257,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg1));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__rdreq));
        bufp->chgBit(oldp+265,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2)) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__wrreq))));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__wrreq));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf));
        bufp->chgBit(oldp+268,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__wrreq))) 
                                         & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling))))));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect));
        bufp->chgQData(oldp+274,((0x0000000f00000000ULL 
                                  | (QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_316)))),36);
        bufp->chgQData(oldp+276,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf),36);
        bufp->chgIData(oldp+278,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf)),32);
        bufp->chgCData(oldp+279,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf 
                                                         >> 0x00000020U)))),4);
        bufp->chgCData(oldp+280,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt),8);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len),8);
        bufp->chgBit(oldp+282,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__if_read));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__rdreq));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid));
        bufp->chgCData(oldp+287,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata),2);
        bufp->chgCData(oldp+288,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bresp_tmp),2);
        bufp->chgBit(oldp+289,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp));
        bufp->chgBit(oldp+290,((1U & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata) 
                                      >> 1U))));
        bufp->chgBit(oldp+291,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata))));
        bufp->chgBit(oldp+292,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready));
        bufp->chgBit(oldp+293,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp));
        bufp->chgBit(oldp+294,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__wrreq));
        bufp->chgQData(oldp+295,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf),36);
        bufp->chgCData(oldp+297,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr),8);
        bufp->chgCData(oldp+298,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr),8);
        bufp->chgCData(oldp+299,((0x000000ffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push)
                                                  ? 
                                                 ((0xffU 
                                                   == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr))
                                                   ? 0U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))
                                                  : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))),8);
        bufp->chgCData(oldp+300,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext),8);
        bufp->chgBit(oldp+301,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push));
        bufp->chgBit(oldp+302,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop));
        bufp->chgCData(oldp+303,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw),8);
        bufp->chgBit(oldp+304,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n));
        bufp->chgQData(oldp+305,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp),36);
        bufp->chgBit(oldp+307,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push));
        bufp->chgBit(oldp+310,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop));
        bufp->chgBit(oldp+311,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push) 
                                   & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld))))));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld));
        bufp->chgCData(oldp+313,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout),3);
        bufp->chgCData(oldp+314,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[0]),8);
        bufp->chgCData(oldp+315,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[1]),8);
        bufp->chgCData(oldp+316,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[2]),8);
        bufp->chgCData(oldp+317,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[3]),8);
        bufp->chgCData(oldp+318,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[4]),8);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__i),32);
        bufp->chgCData(oldp+320,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt),6);
        bufp->chgBit(oldp+321,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop));
        bufp->chgBit(oldp+323,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy)) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy))) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready)))));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop));
        bufp->chgBit(oldp+326,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push) 
                                   & ((0x0dU == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld))))));
        bufp->chgBit(oldp+327,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld));
        bufp->chgCData(oldp+328,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout),4);
        bufp->chgCData(oldp+329,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[0]),2);
        bufp->chgCData(oldp+330,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[1]),2);
        bufp->chgCData(oldp+331,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[2]),2);
        bufp->chgCData(oldp+332,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[3]),2);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[4]),2);
        bufp->chgCData(oldp+334,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[5]),2);
        bufp->chgCData(oldp+335,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[6]),2);
        bufp->chgCData(oldp+336,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[7]),2);
        bufp->chgCData(oldp+337,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[8]),2);
        bufp->chgCData(oldp+338,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[9]),2);
        bufp->chgCData(oldp+339,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[10]),2);
        bufp->chgCData(oldp+340,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[11]),2);
        bufp->chgCData(oldp+341,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[12]),2);
        bufp->chgCData(oldp+342,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[13]),2);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[14]),2);
        bufp->chgIData(oldp+344,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__i),32);
        bufp->chgBit(oldp+345,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop));
        bufp->chgBit(oldp+347,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push) 
                                   & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld))))));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld));
        bufp->chgCData(oldp+349,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout),3);
        bufp->chgCData(oldp+350,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[0]),2);
        bufp->chgCData(oldp+351,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[1]),2);
        bufp->chgCData(oldp+352,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[2]),2);
        bufp->chgCData(oldp+353,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[3]),2);
        bufp->chgCData(oldp+354,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[4]),2);
        bufp->chgIData(oldp+355,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__i),32);
        bufp->chgBit(oldp+356,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop));
        bufp->chgBit(oldp+358,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push) 
                                   & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld))))));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld));
        bufp->chgCData(oldp+360,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout),3);
        bufp->chgQData(oldp+361,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[0]),64);
        bufp->chgQData(oldp+363,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[1]),64);
        bufp->chgQData(oldp+365,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[2]),64);
        bufp->chgQData(oldp+367,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[3]),64);
        bufp->chgQData(oldp+369,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[4]),64);
        bufp->chgIData(oldp+371,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__i),32);
        bufp->chgQData(oldp+372,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p2),64);
        bufp->chgBit(oldp+374,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_AWVALID)) 
                                | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                    & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
                                       & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_AWVALID))) 
                                   | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack))))));
        bufp->chgBit(oldp+375,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_AWVALID))));
        bufp->chgBit(oldp+376,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
        bufp->chgCData(oldp+377,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state),2);
        bufp->chgCData(oldp+378,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next),2);
        bufp->chgBit(oldp+379,((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt))));
        bufp->chgBit(oldp+380,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg))));
        bufp->chgCData(oldp+381,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt),8);
        bufp->chgBit(oldp+382,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_state_reg));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_state_next));
        bufp->chgCData(oldp+384,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_state_reg),2);
        bufp->chgCData(oldp+385,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_state_next),2);
        bufp->chgBit(oldp+386,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__mem_wr_en));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__mem_rd_en));
        bufp->chgCData(oldp+388,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_id_reg),8);
        bufp->chgCData(oldp+389,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_id_next),8);
        bufp->chgSData(oldp+390,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_reg),16);
        bufp->chgSData(oldp+391,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_next),16);
        bufp->chgCData(oldp+392,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_count_reg),8);
        bufp->chgCData(oldp+393,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_count_next),8);
        bufp->chgCData(oldp+394,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_size_reg),3);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_size_next),3);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_burst_reg),2);
        bufp->chgCData(oldp+397,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_burst_next),2);
        bufp->chgCData(oldp+398,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_id_reg),8);
        bufp->chgCData(oldp+399,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_id_next),8);
        bufp->chgSData(oldp+400,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_reg),16);
        bufp->chgSData(oldp+401,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_next),16);
        bufp->chgCData(oldp+402,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_count_reg),8);
        bufp->chgCData(oldp+403,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_count_next),8);
        bufp->chgCData(oldp+404,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_size_reg),3);
        bufp->chgCData(oldp+405,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_size_next),3);
        bufp->chgCData(oldp+406,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_burst_reg),2);
        bufp->chgCData(oldp+407,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_burst_next),2);
        bufp->chgBit(oldp+408,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_next));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_next));
        bufp->chgCData(oldp+410,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bid_next),8);
        bufp->chgBit(oldp+411,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bvalid_next));
        bufp->chgBit(oldp+412,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_next));
        bufp->chgCData(oldp+413,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_next),8);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_next));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next));
        bufp->chgCData(oldp+416,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg),8);
        bufp->chgIData(oldp+417,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg),32);
        bufp->chgBit(oldp+418,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg));
        bufp->chgBit(oldp+419,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg));
        bufp->chgSData(oldp+420,((0x00003fffU & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                                 >> 2U))),14);
        bufp->chgSData(oldp+421,((0x00003fffU & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                                 >> 2U))),14);
        bufp->chgSData(oldp+422,((0x00003fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_reg) 
                                                 >> 2U))),14);
        bufp->chgSData(oldp+423,((0x00003fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_reg) 
                                                 >> 2U))),14);
        bufp->chgIData(oldp+424,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__i),32);
    }
    bufp->chgBit(oldp+425,(vlSelfRef.clk));
    bufp->chgBit(oldp+426,(vlSelfRef.reset));
    bufp->chgBit(oldp+427,(vlSymsp->TOP__tb_axi4_ram_burst.correct_V));
    bufp->chgBit(oldp+428,(vlSymsp->TOP__tb_axi4_ram_burst.correct_V_ap_vld));
    bufp->chgBit(oldp+429,((1U & (~ (IData)(vlSelfRef.reset)))));
}

void Vtb_axi4_ram_burst___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_cleanup\n"); );
    // Body
    Vtb_axi4_ram_burst___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst___024root*>(voidSelf);
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
