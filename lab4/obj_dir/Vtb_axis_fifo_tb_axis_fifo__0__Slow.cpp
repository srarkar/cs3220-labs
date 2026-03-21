// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "Vtb_axis_fifo__pch.h"

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___eval_static__TOP__tb_axis_fifo(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___eval_static__TOP__tb_axis_fifo\n"); );
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_0_ptr = 0U;
    vlSelfRef.__PVT__out_0_ptr = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_addr_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_addr_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_reg = 0ULL;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_data_reg = 0ULL;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg = 0U;
}

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___eval_initial__TOP__tb_axis_fifo(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___eval_initial__TOP__tb_axis_fifo\n"); );
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(false, 32, 1024, 0, "data.txt"s,  &(vlSelfRef.__PVT__din_0_rsc_dat_all_reg)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vtb_axis_fifo__ConstPool__TABLE_h774effad_0;

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___stl_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___stl_sequent__TOP__tb_axis_fifo__0\n"); );
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.dout_0_rsc_dat = (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_data_reg);
    vlSelfRef.dout_0_rsc_vld = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    vlSelfRef.din_0_rsc_dat = vlSelfRef.__PVT__din_0_rsc_dat_reg;
    vlSelfRef.din_0_rsc_vld = vlSelfRef.__PVT__din_0_rsc_vld_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__empty = ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg) 
                                                   == (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg));
    __Vtableidx1 = (((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg) 
                     << 5U) | (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__full = Vtb_axis_fifo__ConstPool__TABLE_h774effad_0
        [__Vtableidx1];
    vlSelfRef.dout_0_rsc_rdy = vlSelfRef.__PVT__dout_0_rsc_rdy_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_write_data 
        = ((0x0000000100000000ULL & vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_write_data) 
           | (IData)((IData)(vlSelfRef.din_0_rsc_dat)));
    vlSelfRef.din_0_rsc_rdy = (1U & (~ ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__full) 
                                        | (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg))));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg;
    if (((IData)(vlSelfRef.din_0_rsc_vld) & (~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__full)))) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next 
            = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_reg)));
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next) 
                              ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next), 1U)));
    }
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next 
        = ((~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__empty)) 
           & ((~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg)) 
              & (IData)(vlSelfRef.dout_0_rsc_rdy)));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
        = ((IData)(vlSelfRef.dout_0_rsc_rdy) ? (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg)
            : (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg;
    if ((((~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__empty)) 
          & (IData)(vlSelfRef.dout_0_rsc_rdy)) & (~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg)))) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next 
            = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg)));
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next) 
                              ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next), 1U)));
    }
}

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___ctor_var_reset(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___ctor_var_reset\n"); );
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->din_0_rsc_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6114748720745502582ull);
    vlSelf->din_0_rsc_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16043427258797721005ull);
    vlSelf->din_0_rsc_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17892002151826624354ull);
    vlSelf->dout_0_rsc_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6465311433203876622ull);
    vlSelf->dout_0_rsc_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11240446050407725429ull);
    vlSelf->dout_0_rsc_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11433188537952259366ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__din_0_rsc_dat_all_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17461317330531832068ull);
    }
    vlSelf->__PVT__din_0_rsc_dat_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5680870846214970633ull);
    vlSelf->__PVT__din_0_rsc_vld_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16001054566556310621ull);
    vlSelf->__PVT__dout_0_rsc_rdy_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11711285920219624008ull);
    VL_SCOPED_RAND_RESET_W(129, vlSelf->__PVT__cycle_count_reg, __VscopeHash, 8861236667595298735ull);
    vlSelf->__PVT__in_0_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4958346546785512548ull);
    vlSelf->__PVT__out_0_ptr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14565119713801619107ull);
    vlSelf->__PVT__f_in_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5579362190123571007ull);
    vlSelf->__PVT__f_out_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1906486355839418961ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17301159962011322512ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8314714118621589193ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13969985838350215539ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5916453717762757555ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_addr_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13294526466239308363ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5837902850103867941ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15743173887562775602ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16507178647612686469ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10769431528986353718ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_addr_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1031666274328632086ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17040417906335149284ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9788185325607419720ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13334583352279902401ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9447448578052542967ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 670761894222656075ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11443666307770535257ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14012839078533168659ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12912748422355512663ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14537860702976645695ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7502559752242318812ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__axis_fifo_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6010244888732612587ull);
    }
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1673944334664442721ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11302971918001549882ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2240249709987943635ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_write_data = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11499423536467971380ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_data_reg = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1168162713132583302ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4029868806129135567ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13961824500264022915ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040566509286987296ull);
    vlSelf->__PVT__axis_fifo_inst__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 788288949095189116ull);
}
