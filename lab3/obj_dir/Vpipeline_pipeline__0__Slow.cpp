// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 16384, 0, "/Users/ricksarkar/Spring26/CS3220/Labs/lab3/test/part6/alutest1.mem"s
                 ,  &(vlSelfRef.__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    vlSelfRef.__PVT__my_FE_stage__DOT__BHR = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[1U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[1U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[1U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[2U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[2U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[2U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[3U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[3U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[3U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[4U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[4U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[4U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[5U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[5U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[5U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[6U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[6U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[6U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[7U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[7U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[7U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[8U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[8U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[8U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[9U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[9U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[9U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0aU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0aU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0aU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0bU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0bU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0bU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0cU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0cU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0cU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0dU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0dU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0dU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0eU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0eU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0eU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0x0fU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0x0fU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0x0fU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i = 0x00000010U;
    vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.__PVT__my_FE_stage__DOT__PHT[(0x000000ffU 
                                                & vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i)] = 3U;
        vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[1U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[2U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[3U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[4U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[5U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[6U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[7U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[8U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[9U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0aU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0bU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0cU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0dU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0eU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x0fU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x10U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x11U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x12U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x13U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x14U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x15U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x16U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x17U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x18U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x19U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1aU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1bU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1cU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1dU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1eU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1fU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i = 0x00000020U;
    VL_READMEM_N(true, 32, 16384, 0, "/Users/ricksarkar/Spring26/CS3220/Labs/lab3/test/part6/alutest1.mem"s
                 ,  &(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*3:0*/, 64> Vpipeline__ConstPool__TABLE_h486bc076_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vpipeline__ConstPool__TABLE_hcec10f5e_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h29143c0b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h5064a2f5_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0;
    my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0;
    my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0;
    my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB = 
        ((0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   >> 6U))) ? ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                << 0x0000001aU) 
                                               | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                  >> 6U))
          : ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
              << 0x0000001aU) | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                 >> 6U)));
    vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE = vlSelfRef.__PVT__my_FE_stage__DOT__imem
        [(0x00003fffU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                         >> 2U))];
    vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE 
        = (0x000000ffU & ((vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                           >> 2U) ^ (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR)));
    vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX 
        = (IData)((0U != (0x00030000U & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])));
    if ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_op))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_op1_ready 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack;
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_op2_ready 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack;
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_result_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb;
    } else {
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_op1_ready 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack;
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_op2_ready 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack;
        vlSelfRef.__PVT__my_DE_stage__DOT__csr_result_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb;
    }
    my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
             << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                       >> 0x00000018U)) + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 0x00000012U)));
    my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                >> 0x00000012U)) + 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                >> 0x00000012U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                >> 0x00000012U)) < 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                >> 0x00000012U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0 
        = VL_LTS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                           << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x00000012U)), 
                     ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6 
        = (IData)((0x00003300U == (0x00707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15 
        = (IData)((0x00503300U == (0x00707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22 
        = (IData)(((0x00100000U == (0x00700000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                   & (0U == (0x00feU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18 
        = (IData)((0x00501300U == (0x00707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE = 
        (((1U < vlSelfRef.__PVT__my_FE_stage__DOT__PHT
           [vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE]) 
          & ((vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG
              [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                               >> 2U))] == (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                            >> 6U)) 
             & vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID
             [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                              >> 2U))])) ? vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET
         [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                          >> 2U))] : ((IData)(4U) + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch));
    vlSelfRef.__PVT__my_DE_stage__DOT__csr_alu_out_FU 
        = (((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_result_valid) 
            << 2U) | (((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_op2_ready) 
                       << 1U) | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_op1_ready)));
    if ((1U & (~ ((((((((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U))) 
                        | (2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                       | (3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                      | (4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                     | (5U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) 
                    | (6U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) 
                   | (7U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U)))) 
                  | (8U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x00000012U))))))) {
        if ((1U & (~ ((((((((9U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U))) 
                            | (0x0aU == (0x0000003fU 
                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U)))) 
                           | (0x0bU == (0x0000003fU 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x00000012U)))) 
                          | (0x0cU == (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))) 
                         | (0x0dU == (0x0000003fU & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x00000012U)))) 
                        | (0x0eU == (0x0000003fU & 
                                     (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))) 
                       | (0x0fU == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U)))) 
                      | (0x10U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U))))))) {
            if (((((((((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U))) 
                       | (0x12U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U)))) 
                      | (0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) 
                     | (0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                    | (0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                   | (0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                  | ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U))) 
                     || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U))))) 
                 | (0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U))))) {
                if ((0x11U != (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) {
                    if ((0x12U != (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) {
                        if ((0x13U != (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))) {
                            if ((0x14U != (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) {
                                if ((0x15U != (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) {
                                    if ((0x16U != (0x0000003fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x00000012U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         >> 0x00000012U))) 
                                                    || (0x1bU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            >> 0x00000012U))))))) {
                                            vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                                                = my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                    = ((0x18U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                        ? my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0
                        : 0U);
            }
        }
    }
    if (((((((((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U))) 
               | (2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x00000012U)))) 
              | (3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x00000012U)))) 
             | (4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))) 
            | (5U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x00000012U)))) 
           | (6U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    >> 0x00000012U)))) 
          | (7U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x00000012U)))) 
         | (8U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x00000012U))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))
                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                : ((2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))
                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x00000012U)) 
                       - ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                           << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x00000012U)))
                    : ((3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))
                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x00000012U)) 
                           & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x00000012U)))
                        : ((4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))
                            ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0x0000000eU) | 
                                (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 >> 0x00000012U)) | 
                               ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x0000000eU) | 
                                (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                 >> 0x00000012U))) : 
                           ((5U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x00000012U)))
                             ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x0000000eU) | 
                                 (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x00000012U)) 
                                ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                    << 0x0000000eU) 
                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x00000012U)))
                             : ((6U == (0x0000003fU 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x00000012U)))
                                 ? ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                                     ? 1U : 0U) : (
                                                   (7U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        >> 0x00000012U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, 
                                                                  ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                    << 0x0000000eU) 
                                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      >> 0x00000012U)), 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                      >> 0x00000012U))))))))));
    } else if (((((((((9U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U))) 
                      | (0x0aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) 
                     | (0x0bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                    | (0x0cU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                   | (0x0dU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                  | (0x0eU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) 
                 | (0x0fU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) 
                | (0x10U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))
                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   >> (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x00000012U)))
                : ((0x0aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x00000012U)) 
                       << (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                    : ((0x0bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                        ? VL_MULS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x00000012U)), 
                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x0000000eU) 
                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                        : ((0x0cU == (0x0000003fU & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x00000012U)))
                            ? my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0
                            : ((0x0dU == (0x0000003fU 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x0000000eU) 
                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x00000012U)) 
                                   & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0x0000000eU) 
                                      | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                         >> 0x00000012U)))
                                : ((0x0eU == (0x0000003fU 
                                              & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x00000012U)) 
                                       | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 0x0000000eU) 
                                          | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0x00000012U)))
                                    : ((0x0fU == (0x0000003fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x00000012U)))
                                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x00000012U)) 
                                           ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               << 0x0000000eU) 
                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x00000012U)))
                                        : (VL_LTS_III(32, 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0x0000000eU) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x00000012U)), 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        << 0x0000000eU) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                          >> 0x00000012U)))
                                            ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U))) 
                      | (0x12U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))) 
                     | (0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))) 
                    | (0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))) 
                   | (0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x00000012U)))) 
                  | (0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))) 
                 | ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U))) 
                    || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U))))) 
                | (0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000012U))))) {
        if ((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x00000012U)) 
                    < ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                        << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x00000012U)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x0000000eU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x00000012U)), 
                                 (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x00000012U)));
        } else if ((0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   >> (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0x00000012U)));
        } else if ((0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x00000012U)) 
                   << (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0x00000012U)));
        } else if ((0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                    << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0x00000012U));
        } else if ((0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0;
        } else if (((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U))) 
                    || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U))))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                    << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x00000018U));
        }
    } else {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x00000012U)))
                ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x00000012U))
                : 0U);
    }
    my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0 
        = (((0x1cU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x00000012U)))
             ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                  << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     >> 0x00000012U)) 
                == ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                     << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x00000012U)))
             : ((0x1dU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))
                 ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x00000012U)) 
                    != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x00000012U)))
                 : ((0x1eU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x00000012U)))
                     ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                     : ((0x1fU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000012U)))
                         ? VL_GTES_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x00000012U)), 
                                       ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x0000000eU) 
                                        | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x00000012U)))
                         : ((0x20U == (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x00000012U)))
                             ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0)
                             : (IData)(((0x00840000U 
                                         == (0x00fc0000U 
                                             & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                        & (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0x0000000eU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x00000012U)) 
                                           >= ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 0x0000000eU) 
                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x00000012U)))))))))) 
           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
              >> 0x00000011U));
    vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6) 
                                                   & (0U 
                                                      == 
                                                      (0x00feU 
                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                   ? 1U
                                                   : 
                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6) 
                                                    & (0x0040U 
                                                       == 
                                                       (0x00feU 
                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            ((0x00703300U 
                                                              == 
                                                              (0x00707f00U 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0x00feU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                     ? 3U
                                                     : 
                                                    ((IData)(
                                                             ((0x00603300U 
                                                               == 
                                                               (0x00707f00U 
                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x00feU 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              ((0x00403300U 
                                                                == 
                                                                (0x00707f00U 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x00feU 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                       ? 5U
                                                       : 
                                                      ((IData)(
                                                               ((0x00203300U 
                                                                 == 
                                                                 (0x00707f00U 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                & (0U 
                                                                   == 
                                                                   (0x00feU 
                                                                    & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                        ? 6U
                                                        : 
                                                       ((IData)(
                                                                ((0x00303300U 
                                                                  == 
                                                                  (0x00707f00U 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x00feU 
                                                                     & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                         ? 7U
                                                         : 
                                                        (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15) 
                                                          & (0x0040U 
                                                             == 
                                                             (0x00feU 
                                                              & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                          ? 8U
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_15) 
                                                           & (0U 
                                                              == 
                                                              (0x00feU 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                           ? 9U
                                                           : 
                                                          ((IData)(
                                                                   ((0x00003300U 
                                                                     == 
                                                                     (0x00007f00U 
                                                                      & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                    & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22)))
                                                            ? 0x0aU
                                                            : 
                                                           (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_6) 
                                                             & (2U 
                                                                == 
                                                                (0x00feU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0x0bU
                                                             : 
                                                            ((IData)(
                                                                     (0x00001300U 
                                                                      == 
                                                                      (0x00707f00U 
                                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0x0cU
                                                              : 
                                                             ((IData)(
                                                                      (0x00701300U 
                                                                       == 
                                                                       (0x00707f00U 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0x0dU
                                                               : 
                                                              ((IData)(
                                                                       (0x00601300U 
                                                                        == 
                                                                        (0x00707f00U 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0x0eU
                                                                : 
                                                               ((IData)(
                                                                        (0x00401300U 
                                                                         == 
                                                                         (0x00707f00U 
                                                                          & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0x0fU
                                                                 : 
                                                                ((IData)(
                                                                         (0x00201300U 
                                                                          == 
                                                                          (0x00707f00U 
                                                                           & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(
                                                                          (0x00301300U 
                                                                           == 
                                                                           (0x00707f00U 
                                                                            & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                   ? 0x11U
                                                                   : 
                                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18) 
                                                                    & (0x0040U 
                                                                       == 
                                                                       (0x00feU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                    ? 0x12U
                                                                    : 
                                                                   (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_18) 
                                                                     & (0U 
                                                                        == 
                                                                        (0x00feU 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((IData)(
                                                                             ((0x00001300U 
                                                                               == 
                                                                               (0x00007f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                              & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_22)))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x37U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U)))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x17U 
                                                                        == 
                                                                        (0x0000007fU 
                                                                         & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 8U)))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(
                                                                                (0x00200300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x00202300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x6fU 
                                                                           == 
                                                                           (0x0000007fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 8U)))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(
                                                                                (0x00006700U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x00006300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x00106300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x00406300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x1eU
                                                                               : 
                                                                              ((IData)(
                                                                                (0x00506300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(
                                                                                (0x00606300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00706300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00207300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00107300U 
                                                                                == 
                                                                                (0x00707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__my_FE_stage__DOT__do_brjmp_AGEX 
        = (1U & ((IData)(my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0) 
                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                    >> 0x00000010U)));
    vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x00000012U)))
            ? my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0
            : ((0x1aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x00000012U)))
                ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                    << 0x0000000eU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x00000012U))
                : ((0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                    ? (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0)
                    : ((IData)(my_AGEX_stage__DOT____VdfgRegularize_h3f620fe0_0_0)
                        ? my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0
                        : ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                            << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x00000018U))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE = 
        ((0U != (0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                >> 0x0000000fU))) & 
         ((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
          | ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
             | ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | ((3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                   | ((4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | ((5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | ((6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | ((0x0cU 
                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              | ((0x0dU 
                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                 | ((0x0eU 
                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    | ((0x0fU 
                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       | ((0x10U 
                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x11U 
                                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x12U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x13U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x14U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | ((0x15U 
                                                                          == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | ((0x16U 
                                                                             == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x17U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x19U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))));
    vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2 
        = ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
            >> 8U) & (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)));
    vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_store 
        = ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
           & (0x1bU == (0x0000001fU & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 4U) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x0000001cU)))));
    __Vtableidx1 = vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 
        Vpipeline__ConstPool__TABLE_h486bc076_0[__Vtableidx1];
    vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vpipeline__ConstPool__TABLE_hcec10f5e_0[__Vtableidx1];
    vlSelfRef.__PVT__from_AGEX_to_DE = ((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX) 
                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                           != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x00000018U))));
    vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_3 
        = ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
            >> 8U) & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_store));
    __Vtableidx2 = vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE = 
        Vpipeline__ConstPool__TABLE_h29143c0b_0[__Vtableidx2];
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE = 
        Vpipeline__ConstPool__TABLE_h5064a2f5_0[__Vtableidx2];
    vlSelfRef.__PVT__my_DE_stage__DOT__alu_stall = 
        ((IData)(vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_3) 
         & ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state)) 
            | ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state)) 
               | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_state)))));
    vlSelfRef.__PVT__my_DE_stage__DOT__pipeline_stall_DE 
        = ((((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE) 
             & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                >> (0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 0x00000017U)))) 
            | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE) 
               & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                  >> (0x0000001fU & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 4U) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x0000001cU)))))) 
           | ((IData)(vlSelfRef.__PVT__from_AGEX_to_DE) 
              | ((((IData)(vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2) 
                   & (~ (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_op1_ready))) 
                  & (0x000f0000U == (0x000f8000U & 
                                     vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                 | ((((IData)(vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2) 
                      & (~ (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_op2_ready))) 
                     & (0x000f8000U == (0x000f8000U 
                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))) 
                    | ((~ (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__csr_result_valid)) 
                       & (IData)(vlSelfRef.my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_3))))));
    vlSelfRef.__PVT__from_DE_to_FE = ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__pipeline_stall_DE) 
                                      | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__alu_stall));
}

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 812857792956672393ull);
    vlSelf->__PVT__from_DE_to_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414734384858919506ull);
    vlSelf->__PVT__from_AGEX_to_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2519706715303777601ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2590999655931444546ull);
    }
    VL_SCOPED_RAND_RESET_W(137, vlSelf->__PVT__my_FE_stage__DOT__FE_latch, __VscopeHash, 16724734215674187246ull);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14704622217992474899ull);
    vlSelf->__PVT__my_FE_stage__DOT__inst_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2614456735871709498ull);
    vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6758766444726075816ull);
    vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10962988922985332400ull);
    vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5495475968793447921ull);
    vlSelf->__PVT__my_FE_stage__DOT__do_brjmp_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16524130899998657795ull);
    vlSelf->__PVT__my_FE_stage__DOT__BHR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7762396466406797407ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__PHT[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15617420004451046826ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TAG[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 13482899700475034357ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_VALID[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7936968116275050157ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TARGET[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17246044309538133980ull);
    }
    vlSelf->__PVT__my_FE_stage__DOT__pc_xor_bhr_FE = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9287237368450356633ull);
    vlSelf->__PVT__my_FE_stage__DOT__num_brjmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14213793009368410016ull);
    vlSelf->__PVT__my_FE_stage__DOT__mis_pred = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1401459799338684293ull);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5776656098319616114ull);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6185495815363716569ull);
    VL_SCOPED_RAND_RESET_W(249, vlSelf->__PVT__my_DE_stage__DOT__DE_latch, __VscopeHash, 12720121764206633172ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6527157088466704871ull);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18007936897921350699ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11218727599284980111ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 783089451810364172ull);
    vlSelf->__PVT__my_DE_stage__DOT__regval_WB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5070650556380662180ull);
    vlSelf->__PVT__my_DE_stage__DOT__pipeline_stall_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12563743657401244535ull);
    vlSelf->__PVT__my_DE_stage__DOT__alu_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17355059080716009873ull);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1249650228049212677ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3587661886766856571ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12338438627132944225ull);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14209109425183318264ull);
    vlSelf->__PVT__my_DE_stage__DOT__csr_op1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18322742266463896997ull);
    vlSelf->__PVT__my_DE_stage__DOT__csr_op2_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17726181560088017224ull);
    vlSelf->__PVT__my_DE_stage__DOT__csr_result_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9657374383283130894ull);
    vlSelf->__PVT__my_DE_stage__DOT__alu_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6482895033544049626ull);
    vlSelf->__PVT__my_DE_stage__DOT__alu_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17237635450992439865ull);
    vlSelf->__PVT__my_DE_stage__DOT__alu_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11761703699694416830ull);
    vlSelf->__PVT__my_DE_stage__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 637357008128509977ull);
    vlSelf->__PVT__my_DE_stage__DOT__csr_alu_in = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6024754663932675263ull);
    vlSelf->__PVT__my_DE_stage__DOT__csr_alu_out_FU = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 791673185194233966ull);
    vlSelf->__PVT__my_DE_stage__DOT__is_op3_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1251116496363876890ull);
    vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3831243570589901782ull);
    vlSelf->my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_2 = 0;
    vlSelf->my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_3 = 0;
    VL_SCOPED_RAND_RESET_W(143, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch, __VscopeHash, 18426125699513857839ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10689303648146888781ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4634093393574144463ull);
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0 = 0;
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5716915382548216729ull);
    }
    VL_SCOPED_RAND_RESET_W(141, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch, __VscopeHash, 13271297185850210100ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3174643154050080788ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4862495390318754642ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16882154293072290357ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3327398563234900802ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9880869934229914078ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12857364859425787820ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5083552272182555135ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10154758125280901200ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18170184396002757386ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6296446359358631845ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8646861659045001545ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7923816094170836936ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16062293050872982792ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6464198525386643522ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8202596283337130234ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12524120410434368658ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7682232910413515479ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6694367715967292610ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5643419929569775193ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9255828236931988430ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 14395181772839348852ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 8463352813268605507ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 6297493420285752226ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 17642147618779569987ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16869843566140148395ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15965080486660640879ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17985040333084057758ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14389567023736080801ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13579821566181568362ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1957963967501918730ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3055586711961179093ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13109576086254138409ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10713611242996499402ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8374843788625514830ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10604772104813541404ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13613000261927012911ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1752882494840579483ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15052638220757166983ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13365655334654201090ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12098642486991081327ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11115181881901105113ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1101885863598884875ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8229023624826296740ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 568643461592208392ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3370015355772324093ull);
    vlSelf->__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 4464243472873940648ull);
    VL_ZERO_RESET_W(249, vlSelf->__Vdly__my_DE_stage__DOT__DE_latch);
    vlSelf->__Vdly__my_DE_stage__DOT__alu_state = 0;
    vlSelf->__VdlyVal__my_DE_stage__DOT__reg_file__v0 = 0;
    vlSelf->__VdlySet__my_DE_stage__DOT__reg_file__v0 = 0;
    vlSelf->__VdlyVal__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__VdlyDim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__VdlySet__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__VdlyVal__my_DE_stage__DOT__reg_file__v1 = 0;
    vlSelf->__VdlyDim0__my_DE_stage__DOT__reg_file__v1 = 0;
    vlSelf->__VdlySet__my_DE_stage__DOT__reg_file__v1 = 0;
}
