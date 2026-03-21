// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram.h for the primary calling header

#include "Vtb_axi4_ram__pch.h"

VL_ATTR_COLD void Vtb_axi4_ram_tb_axi4_ram___eval_static__TOP__tb_axi4_ram(Vtb_axi4_ram_tb_axi4_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_tb_axi4_ram___eval_static__TOP__tb_axi4_ram\n"); );
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n = 1U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n = 1U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_id_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_bid_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg = 0U;
}

VL_ATTR_COLD void Vtb_axi4_ram_tb_axi4_ram___eval_initial__TOP__tb_axi4_ram(Vtb_axi4_ram_tb_axi4_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_tb_axi4_ram___eval_initial__TOP__tb_axi4_ram\n"); );
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm = 1U;
    VL_READMEM_N(true, 10, 1024, 0, "./axi4_tester_src_non_burst/axi4_tester_addr_rom.dat"s
                 ,  &(vlSelfRef.__PVT__axi4_tester_inst__DOT__addr_U__DOT__axi4_tester_addr_rom_U__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 1024, 0, "./axi4_tester_src_non_burst/axi4_tester_test_data_V_rom.dat"s
                 ,  &(vlSelfRef.__PVT__axi4_tester_inst__DOT__test_data_V_U__DOT__axi4_tester_test_data_V_rom_U__DOT__ram)
                 , 0, ~0ULL);
    vlSelfRef.__PVT__axi_ram_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00004000U, vlSelfRef.__PVT__axi_ram_inst__DOT__i)) {
        vlSelfRef.__PVT__axi_ram_inst__DOT__j = vlSelfRef.__PVT__axi_ram_inst__DOT__i;
        while (VL_LTS_III(32, vlSelfRef.__PVT__axi_ram_inst__DOT__j, 
                          ((IData)(0x00000080U) + vlSelfRef.__PVT__axi_ram_inst__DOT__i))) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__mem[(0x00003fffU 
                                                     & vlSelfRef.__PVT__axi_ram_inst__DOT__j)] = 0U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__j = 
                ((IData)(1U) + vlSelfRef.__PVT__axi_ram_inst__DOT__j);
        }
        vlSelfRef.__PVT__axi_ram_inst__DOT__i = ((IData)(0x00000080U) 
                                                 + vlSelfRef.__PVT__axi_ram_inst__DOT__i);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtb_axi4_ram__ConstPool__TABLE_h84ff9522_0;

VL_ATTR_COLD void Vtb_axi4_ram_tb_axi4_ram___stl_sequent__TOP__tb_axi4_ram__0(Vtb_axi4_ram_tb_axi4_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_tb_axi4_ram___stl_sequent__TOP__tb_axi4_ram__0\n"); );
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.correct_V_ap_vld = (1U & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                        >> 0x00000017U));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__data_from_mem_V_U__DOT__axi4_tester_data_from_mem_V_ram_U__DOT__ce0 
        = (IData)((0U != (0x00300000U & vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)));
    vlSelfRef.correct_V = vlSelfRef.__PVT__axi4_tester_inst__DOT__storemerge_reg_199;
    vlSelfRef.__PVT__axi_ram_inst__DOT__mem_rd_en = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid) 
           & (0U == (IData)((vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                             >> 0x00000020U))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid) 
           & (IData)((vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                      >> 0x0000003fU)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
           == (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
               >> 0x0000000cU));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
           == (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
               >> 0x0000000cU));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__if_din 
        = (((QData)((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg)) 
            << 0x00000022U) | (QData)((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_data 
        = (((QData)((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf)));
    vlSelfRef.__PVT__axi_ram_inst__DOT__mem_wr_en = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld));
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_reg;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__data_from_mem_V_U__DOT__axi4_tester_data_from_mem_V_ram_U__DOT__addr0 
        = (0x000003ffU & ((0x00200000U & vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                           ? (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)
                           : ((0x00100000U & vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                               ? (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__zext_ln22_reg_335)
                               : (IData)(vlSelfRef.axi4_tester_inst__DOT____Vxrand___1))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awaddr_tmp 
        = ((0U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt))
            ? vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf
            : (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
               + VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf)), 2U)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__araddr_tmp 
        = ((0U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt))
            ? vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf
            : (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
               + VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf)), 2U)));
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_next = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_reg;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_reg)))) {
        if (((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_reg) 
             & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_next = 1U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_next = 2U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_next 
                = vlSelfRef.__PVT__s_axi_arid;
        }
    }
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_bvalid_next 
        = ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg) 
           & (~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready)));
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_bid_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_bid_reg;
    if ((0U != (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg))) {
            if (((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_reg) 
                 & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy))) {
                vlSelfRef.__PVT__axi_ram_inst__DOT__mem_wr_en = 1U;
                if (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy) {
                    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_bvalid_next = 1U;
                    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_bid_next 
                        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_id_reg;
                }
            }
        }
    }
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n) 
           & (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__wrreq 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp) 
           & ((IData)((0U != (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata))) 
              & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp)));
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_reg;
    if (vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_reg) {
        if (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__mem_rd_en = 1U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next = 1U;
            if ((0U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg))) {
                vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_next = 1U;
                vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_next 
                    = vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_reg;
                vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_next = 1U;
            } else {
                vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_next = 0U;
                vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_next 
                    = vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_reg;
            }
            if ((0U != (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg))) {
                vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_next 
                    = (0x000000ffU & ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg) 
                                      - (IData)(1U)));
                if ((0U != (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_reg))) {
                    vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_next 
                        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_reg) 
                                          + ((IData)(1U) 
                                             << (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_reg))));
                }
            }
        }
        vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_next 
            = ((1U & (~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n))) 
               || (0U != (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg)));
    } else {
        vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_reg) 
             & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_next = 0U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_next 
                = vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf;
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_next 
                = (0x0000ffffU & vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf);
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_next = 1U;
        } else {
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_next = 0U;
        }
    }
    vlSelfRef.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0 
           == vlSelfRef.__PVT__axi4_tester_inst__DOT__test_data_V_q0);
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
           == (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf 
               >> 0x0000000cU));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
           == (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf 
               >> 0x0000000cU));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_BREADY 
        = ((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 9U) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_WVALID 
        = ((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 4U) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt) 
           == (0x0000003fU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf) 
                              >> 4U)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_AWVALID 
        = ((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 3U) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_ARVALID 
        = ((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_RREADY 
        = (1U & ((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                  >> 0x00000013U) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t)) 
                    & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_reg)) 
                    & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt) 
           == (0x0000003fU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf) 
                              >> 4U)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__wrreq 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling) 
           & ((~ ((~ (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)) 
                  & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) 
              & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy 
        = ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_reg) 
           & (0U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt)));
    vlSelfRef.__PVT__s_axi_awvalid = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy) 
                                      & (0U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__wnext 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push)
                           ? ((0xffU == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))
                           : (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__wrreq));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_BREADY)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_WVALID));
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_AWVALID) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next 
        = Vtb_axi4_ram__ConstPool__TABLE_h84ff9522_0
        [__Vtableidx3];
    __Vtableidx5 = (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_ARVALID) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next 
        = Vtb_axi4_ram__ConstPool__TABLE_h84ff9522_0
        [__Vtableidx5];
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_RREADY) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next 
        = Vtb_axi4_ram__ConstPool__TABLE_h84ff9522_0
        [__Vtableidx7];
    vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_NS_fsm 
        = ((((1U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
             | (2U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
            | (((4U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                | (8U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
               | ((0x00000010U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                  | ((0x00000020U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                     | ((0x00000040U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                        | (0x00000080U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm))))))
            ? ((1U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                ? 2U : ((2U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                         ? (((0x0400U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__i_0_reg_166)) 
                             & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                >> 1U)) ? 0x00000400U
                             : 4U) : ((4U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                       ? 8U : ((8U 
                                                == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                ? ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_AWVALID)
                                                    ? 0x00000010U
                                                    : 8U)
                                                : (
                                                   (0x00000010U 
                                                    == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_WVALID)
                                                     ? 0x00000020U
                                                     : 0x00000010U)
                                                    : 
                                                   ((0x00000020U 
                                                     == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                     ? 0x00000040U
                                                     : 
                                                    ((0x00000040U 
                                                      == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                      ? 0x00000080U
                                                      : 0x00000100U)))))))
            : ((((0x00000100U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                 | (0x00000200U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                | (((0x00000400U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                    | (0x00000800U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                   | ((0x00001000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                      | ((0x00002000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                         | ((0x00004000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                            | (0x00008000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm))))))
                ? ((0x00000100U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                    ? 0x00000200U : ((0x00000200U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                      ? ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_BREADY)
                                          ? 2U : 0x00000200U)
                                      : ((0x00000400U 
                                          == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                          ? (((0x0400U 
                                               == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__i1_0_reg_177)) 
                                              & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                 >> 0x0000000aU))
                                              ? 0x00200000U
                                              : 0x00000800U)
                                          : ((0x00000800U 
                                              == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                              ? 0x00001000U
                                              : ((0x00001000U 
                                                  == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_ARVALID)
                                                   ? 0x00002000U
                                                   : 0x00001000U)
                                                  : 
                                                 ((0x00002000U 
                                                   == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                   ? 0x00004000U
                                                   : 
                                                  ((0x00004000U 
                                                    == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                    ? 0x00008000U
                                                    : 0x00010000U)))))))
                : ((((0x00010000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                     | (0x00020000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                    | (((0x00040000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                        | (0x00080000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                       | ((0x00100000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                          | ((0x00200000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                             | ((0x00400000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                                | (0x00800000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm))))))
                    ? ((0x00010000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                        ? 0x00020000U : ((0x00020000U 
                                          == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                          ? 0x00040000U
                                          : ((0x00040000U 
                                              == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                              ? 0x00080000U
                                              : ((0x00080000U 
                                                  == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_RREADY)
                                                   ? 0x00100000U
                                                   : 0x00080000U)
                                                  : 
                                                 ((0x00100000U 
                                                   == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                   ? 0x00000400U
                                                   : 
                                                  ((0x00200000U 
                                                    == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                    ? 
                                                   (((0x0400U 
                                                      == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)) 
                                                     & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                        >> 0x00000015U))
                                                     ? 0x00800000U
                                                     : 0x00400000U)
                                                    : 
                                                   ((0x00400000U 
                                                     == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                     ? 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2)) 
                                                         & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                            >> 0x00000016U)))
                                                      ? 0x00800000U
                                                      : 0x00200000U)
                                                     : 1U)))))))
                    : vlSelfRef.axi4_tester_inst__DOT____Vxrand___3)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__if_read 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__if_read 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid) 
           & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data) 
              & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop)
            ? (0x0000000fU & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf))
            : 0x0fU);
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__wrreq));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect 
        = ((~ ((~ ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                   & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__wrreq))) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__wrreq 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling) 
           & ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy)) 
                  & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy))) 
              & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
                 & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready))));
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_id_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_id_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_next = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_next = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg))) {
        vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_next = 1U;
        if (((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_reg) 
             & (IData)(vlSelfRef.__PVT__s_axi_awvalid))) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_next = 2U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_next = 1U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_id_next 
                = vlSelfRef.__PVT__s_axi_awid;
            vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_next = 1U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_next 
                = vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf;
            vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_next = 0U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 1U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_next 
                = (0x0000ffffU & vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf);
        } else {
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg))) {
        vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_next = 1U;
        if (((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_reg) 
             & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy))) {
            if (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy) {
                vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_next = 0U;
                if (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready) {
                    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_next = 1U;
                    vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 0U;
                } else {
                    vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 2U;
                }
            } else {
                vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 1U;
            }
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_next 
                = (0x000000ffU & ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg) 
                                  - (IData)(1U)));
            if ((0U != (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_reg))) {
                vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_next 
                    = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_reg))));
            }
        } else {
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg))) {
        if (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_next = 1U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 0U;
        } else {
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 2U;
        }
    }
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__wnext 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push)
                           ? ((0xffU == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))
                           : (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid)) 
              | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__if_read)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__rdreq 
        = (((IData)((vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                     >> 0x00000022U)) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid)) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__if_read));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid)) 
              | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__if_read)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__rdreq 
        = (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len) 
            == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt)) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__if_read));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect) 
                        & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect))) 
                    & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__wrreq));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2)) 
              & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__wrreq)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect 
        = ((~ ((~ ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                   & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__wrreq))) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop)
                           ? ((0xffU == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr)))
                           : (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__rdreq)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop)
                           ? ((0xffU == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr)))
                           : (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__rdreq)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__rdreq 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq) 
           & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
              | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect) 
                        & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect))) 
                    & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__rdreq)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__rdreq 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq) 
           & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid) 
              | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__rdreq)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld));
}

VL_ATTR_COLD void Vtb_axi4_ram_tb_axi4_ram___ctor_var_reset(Vtb_axi4_ram_tb_axi4_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_tb_axi4_ram___ctor_var_reset\n"); );
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__s_axi_awid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4725810032491308062ull);
    vlSelf->__PVT__s_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13986037914296269070ull);
    vlSelf->__PVT__s_axi_arid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13831230078639723453ull);
    vlSelf->correct_V = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18230729411509299086ull);
    vlSelf->correct_V_ap_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4511594895307449411ull);
    vlSelf->axi4_tester_inst__DOT____Vxrand___3 = VL_SCOPED_RAND_RESET_ASSIGN_I(24, __VscopeHash, 10721681401772793258ull);
    vlSelf->axi4_tester_inst__DOT____Vxrand___2 = VL_SCOPED_RAND_RESET_ASSIGN_I(10, __VscopeHash, 15071445135334261081ull);
    vlSelf->axi4_tester_inst__DOT____Vxrand___1 = VL_SCOPED_RAND_RESET_ASSIGN_I(10, __VscopeHash, 11281324780051810506ull);
    vlSelf->axi4_tester_inst__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(10, __VscopeHash, 10348605055515044251ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_RUSER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15969947481826186056ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_BUSER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4588144722926793707ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__addr_q0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13350459419146556394ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_q0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2791898991523311459ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 41826029561387542ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11729915636093126288ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17730946075178061922ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__reg_213 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14666551958497472406ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_reg_301 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9073266722099751811ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_316 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6980774045093540370ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_1_reg_330 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6648822644859819733ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__zext_ln22_reg_335 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2725984309721250066ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_addr_1_1_reg_351 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14421710735298100014ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_2_reg_359 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2218571000437886586ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4271820798520053208ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_0_reg_166 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16898035019391399773ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__i1_0_reg_177 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12505803180625533678ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__i2_0_reg_188 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6533150571540153988ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7597614535536731757ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__storemerge_reg_199 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13227209598827263623ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__ap_NS_fsm = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14992476083946842196ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__addr_U__DOT__axi4_tester_addr_rom_U__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7808056780584307471ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_U__DOT__axi4_tester_test_data_V_rom_U__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7996119181172514989ull);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_AWVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13433357565957183172ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_WVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11280910572746247532ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_BREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2193205879633371799ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_ARVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12801010953485990611ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__I_RREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5209081766946998627ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7287325892967526077ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2064384652976892893ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__m = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12397010115251463434ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7166163509697186570ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__calc_data_width__Vstatic__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17319865282569412691ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2222123741857876917ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__m = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6330871822261277971ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7913764444008993421ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11177102210977830327ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7058298248303316117ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awaddr_tmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3227639928424255024ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1684761252749796922ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6823275891281398541ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2699401286324583165ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8641064039374999853ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12131793848521900687ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1709004662493877527ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17297058104234738979ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5702697776321427348ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8490238492700449956ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11916848188763002345ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8332791274978015534ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5382142345120073288ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15045103212794800643ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13988966590358530678ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16286396119503459375ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8875327684693274095ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9735042785164993454ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17445979234467515560ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7198921159112799335ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 662094805036162619ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14111932234465318194ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10891016621669320642ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10975694300778620918ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10335989664119426478ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16647637905992582831ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1514584692461703502ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14828682780442417621ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8407817444628860011ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15222641481065217770ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12582355031752710019ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bresp_tmp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12929367233763581155ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14485963018375387784ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16380676239088228146ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10874546921494869399ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11399038642234058367ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18390249503847910437ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12375677688141910298ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7722063431088268471ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15072452539875226988ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15298466290783610425ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__data_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7279809288967806041ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__strb_buf = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1491230738149998197ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17244034386253329949ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16840155234427864040ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7752009591513649802ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11914228234586207817ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3188758869746038386ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7124136513966589383ull);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT____Vlvbound_h009b1c58__0 = 0;
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_Q(64, __VscopeHash, 13228681547041284739ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__rdreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13850084928741146085ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18093209676729478446ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6793461225342965712ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13695662388910711486ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9873468918909265442ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16494374931541379237ull);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7561280225350163159ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__if_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13424410306644528747ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 14371762799221231201ull);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 228909482974654161ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15202195574758100654ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7856000387257873602ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__wnext = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10680935052081923810ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13962257790750269199ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 478951559742561607ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2711415760385027011ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8613782787528020263ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12253718112743022874ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15976445232952242126ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 1377609920375052711ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3912945652750790331ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 17876536897599477310ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6018113524589718916ull);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT____Vlvbound_h233b9095__0 = 0;
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(2, __VscopeHash, 12428455990870329527ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__wrreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4201023021422772285ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3580092833962980782ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9519433262079665422ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 431807144444471843ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9229593551106545065ull);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2974603051476563125ull);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10496307610472245921ull);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT____Vlvbound_hfd64ca52__0 = 0;
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(2, __VscopeHash, 13848792757338911642ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__wrreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5238796501514580763ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4734135027462489467ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13041279050066792071ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14650735273250268272ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6346738584720576479ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2819355537220099664ull);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5125151469004307900ull);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT____Vlvbound_h2fb6c94e__0 = 0;
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(8, __VscopeHash, 18086571223155695061ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__rdreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10991674691486434264ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235606179277838695ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8990922245601427007ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9272677118278205418ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7516343410667809129ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4650673624662780154ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7886778828283750364ull);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9784566694898961034ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__calc_data_width__Vstatic__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10522182023514129170ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17270354177601324902ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__m = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 636228351233392655ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7450222627145419717ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5311694662944326376ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11272711231373811864ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__araddr_tmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1258664361139580721ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15126860642668026377ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12090941281314122688ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6299700225966395971ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1075548573670119689ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6642073302966411860ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13931398797640956488ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4287940704334443523ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6180887643465423073ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3231604993597462386ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18398363831692357748ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8276883488835996013ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8647755345298759239ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10894142513686159346ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_resp_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12696364559649632912ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16890006314966153082ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11920155260404390191ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7544408894522835381ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10351428266848676202ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6061209344926738033ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10092717479347651705ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__len_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15935742279394669839ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ar2r_rdata = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3218652924186672844ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1636099593931438423ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5983771118874405753ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1817096748036346277ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__burst_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11240378554798070525ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_burst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5495662550058695681ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1088686261501691632ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13933308818672834290ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13765002116126544275ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8528053327145680765ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8272932828544284680ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4240006533389323532ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18256016758243328439ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8513664356446106084ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7940486274731531433ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11067057716014873548ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1892701562214982912ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15522218193613439380ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13706101111398348545ull);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT____Vlvbound_h009b1c58__0 = 0;
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_Q(64, __VscopeHash, 17473273124353318543ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__rdreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6285765746369647360ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10248385983536052589ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8446524177000192997ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9953673002057533994ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12055063942810049434ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10885095105733740940ull);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11343869638024160540ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__if_din = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6875605118468284563ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__if_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18287828111804012256ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 1405931945186565893ull);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 1609333993119783176ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17531649255968229275ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9915152005147508381ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__wnext = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4237050382965832459ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15771403819554816853ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11827230172939381496ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4592579909226776652ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7454654489987845498ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9611105802724160393ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5666391615112717426ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6801123580967421ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15228323824998576848ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6286027473015421903ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4639469066098342500ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_data = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16806999356826665457ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12811076454298069533ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16216307215699750203ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1777127439817898981ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7200160765650259208ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9361562495706466810ull);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT____Vlvbound_h233b9095__0 = 0;
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(2, __VscopeHash, 11408202501266817436ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__rdreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1779952228899325547ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__wrreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13088529106641693342ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11865456183126949141ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3963073448009478123ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2851798698095796681ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5548022486470619747ull);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2625592252565250385ull);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10133424789965936236ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_U__DOT__axi4_tester_data_from_mem_V_ram_U__DOT__addr0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18434863248217693379ull);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_U__DOT__axi4_tester_data_from_mem_V_ram_U__DOT__ce0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9208351625608187650ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_U__DOT__axi4_tester_data_from_mem_V_ram_U__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8385190449722319145ull);
    }
    vlSelf->__PVT__axi_ram_inst__DOT__read_state_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6033202489200771044ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_state_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1466372729452793902ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18261211528765609800ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 175670279507775071ull);
    vlSelf->__PVT__axi_ram_inst__DOT__mem_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2361989371951021991ull);
    vlSelf->__PVT__axi_ram_inst__DOT__mem_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9412031868229425729ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_id_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18049434096689105631ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_id_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9782974401199788723ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_addr_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1589753062077462888ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_addr_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4570112559028532339ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_count_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3839637810696158813ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_count_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12921774838442995725ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_size_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 657017981205551667ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_size_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15989195539642083759ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_burst_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16952275773798275345ull);
    vlSelf->__PVT__axi_ram_inst__DOT__read_burst_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13791804592439036765ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_id_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13689099274273717258ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_id_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15897765030265185444ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_addr_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2676798343157355799ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_addr_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16137484029284478507ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_count_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4095005262440381081ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_count_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11306587977595914704ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_size_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5505045505461631584ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_size_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7504479326606716134ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_burst_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15618620445526251125ull);
    vlSelf->__PVT__axi_ram_inst__DOT__write_burst_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5083227923783138195ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7957199387717674789ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 147157290650326417ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10279259794493326031ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11575280402151594377ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9818239322625179469ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9995874944760392706ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11277232131086488120ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2345807307143277470ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12215921405124277226ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5437722792340429657ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 982829507123469365ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13277639995748872601ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7594645522822366626ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12766178373785262872ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9033818263473108171ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1820310027532440609ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3670039489602028645ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9084294613260628483ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6407927592780239912ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7514235511228915079ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18268581319381887574ull);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9717840605988406155ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__axi_ram_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3793917547216520469ull);
    }
    vlSelf->__PVT__axi_ram_inst__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15273590158599900271ull);
    vlSelf->__PVT__axi_ram_inst__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7956628066169405668ull);
}
