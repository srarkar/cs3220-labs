// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

VL_ATTR_COLD void Vpipeline_FE_STAGE___eval_initial__TOP__pipeline__my_FE_stage(Vpipeline_FE_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___eval_initial__TOP__pipeline__my_FE_stage\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 16384, 0, "/Users/ricksarkar/Spring26/CS3220/Labs/lab2/test/towers/towers.mem"s
                 ,  &(vlSelfRef.__PVT__imem), 0, ~0ULL);
    vlSelfRef.total_branch_predictions = 0U;
    vlSelfRef.correct_branch_predictions = 0U;
    vlSelfRef.__PVT__GHR = 0U;
    vlSelfRef.__PVT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__i)) {
        vlSelfRef.__PVT__PHT[(0x000000ffU & vlSelfRef.__PVT__i)] = 1U;
        vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
    }
    vlSelfRef.__PVT__PHT_T[(0x000000ffU & vlSelfRef.__PVT__i)] = 0U;
    vlSelfRef.__PVT__PHTT[(0x000000ffU & vlSelfRef.__PVT__i)] = 1U;
    vlSelfRef.__PVT__BTB[0U] = 0ULL;
    vlSelfRef.__PVT__BTB[1U] = 0ULL;
    vlSelfRef.__PVT__BTB[2U] = 0ULL;
    vlSelfRef.__PVT__BTB[3U] = 0ULL;
    vlSelfRef.__PVT__BTB[4U] = 0ULL;
    vlSelfRef.__PVT__BTB[5U] = 0ULL;
    vlSelfRef.__PVT__BTB[6U] = 0ULL;
    vlSelfRef.__PVT__BTB[7U] = 0ULL;
    vlSelfRef.__PVT__BTB[8U] = 0ULL;
    vlSelfRef.__PVT__BTB[9U] = 0ULL;
    vlSelfRef.__PVT__BTB[0x0aU] = 0ULL;
    vlSelfRef.__PVT__BTB[0x0bU] = 0ULL;
    vlSelfRef.__PVT__BTB[0x0cU] = 0ULL;
    vlSelfRef.__PVT__BTB[0x0dU] = 0ULL;
    vlSelfRef.__PVT__BTB[0x0eU] = 0ULL;
    vlSelfRef.__PVT__BTB[0x0fU] = 0ULL;
    vlSelfRef.__PVT__i = 0x00000010U;
}

VL_ATTR_COLD void Vpipeline_FE_STAGE___stl_sequent__TOP__pipeline__my_FE_stage__0(Vpipeline_FE_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___stl_sequent__TOP__pipeline__my_FE_stage__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pcplus_FE = ((IData)(4U) + vlSelfRef.__PVT__PC_FE_latch);
    vlSelfRef.__PVT__BTB_FE_VAL = vlSelfRef.__PVT__BTB
        [(0x0000000fU & (vlSelfRef.__PVT__PC_FE_latch 
                         >> 2U))];
    vlSelfRef.__PVT__PHT_AGEX_ADDR = (0x000000ffU & 
                                      (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         << 0x0000001bU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 5U)) 
                                       ^ (IData)(vlSelfRef.__PVT__GHR)));
    vlSelfRef.__PVT__brj_AGEX = (IData)((0U != (0x00000300U 
                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])));
    vlSelfRef.__PVT__br_target_AGEX = ((0x19U == (0x0000003fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x0000000aU)))
                                        ? vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0
                                        : ((0x1aU == 
                                            (0x0000003fU 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x0000000aU)))
                                            ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 0x00000016U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x0000000aU))
                                            : ((0x1bU 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x0000000aU)))
                                                ? (0xfffffffeU 
                                                   & vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0)
                                                : (
                                                   (((0x1cU 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                          >> 0x0000000aU)))
                                                      ? 
                                                     (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 0x00000016U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x0000000aU)) 
                                                      == 
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0x00000016U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x0000000aU)))
                                                      : 
                                                     ((0x1dU 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                           >> 0x0000000aU)))
                                                       ? 
                                                      (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         << 0x00000016U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           >> 0x0000000aU)) 
                                                       != 
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         << 0x00000016U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           >> 0x0000000aU)))
                                                       : 
                                                      ((0x1eU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                            >> 0x0000000aU)))
                                                        ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                                                        : 
                                                       ((0x1fU 
                                                         == 
                                                         (0x0000003fU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                             >> 0x0000000aU)))
                                                         ? 
                                                        VL_GTES_III(32, 
                                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                      << 0x00000016U) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                        >> 0x0000000aU)), 
                                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      << 0x00000016U) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                        >> 0x0000000aU)))
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                              >> 0x0000000aU)))
                                                          ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0)
                                                          : (IData)(
                                                                    ((0x00008400U 
                                                                      == 
                                                                      (0x0000fc00U 
                                                                       & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                                     & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                          << 0x00000016U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                            >> 0x0000000aU)) 
                                                                        >= 
                                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                          << 0x00000016U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                            >> 0x0000000aU)))))))))) 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 9U))
                                                    ? vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0
                                                    : 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     << 0x00000010U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0x00000010U))))));
    vlSelfRef.__PVT__PHT_AGEX_VAL = vlSelfRef.__PVT__PHT
        [vlSelfRef.__PVT__PHT_AGEX_ADDR];
    vlSelfRef.__PVT__br_taken_AGEX = ((IData)(vlSelfRef.__PVT__brj_AGEX) 
                                      & (vlSelfRef.__PVT__br_target_AGEX 
                                         != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                              << 0x00000010U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x00000010U))));
}

VL_ATTR_COLD void Vpipeline_FE_STAGE___ctor_var_reset(Vpipeline_FE_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___ctor_var_reset\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__from_DE_to_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414734384858919506ull);
    VL_SCOPED_RAND_RESET_W(99, vlSelf->__PVT__from_AGEX_to_FE, __VscopeHash, 12927555927732673396ull);
    vlSelf->__PVT__from_MEM_to_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13537855715426154997ull);
    vlSelf->__PVT__from_WB_to_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6524857196495691538ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__FE_latch_out, __VscopeHash, 13591943434426788268ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15493272201884789258ull);
    }
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__FE_latch, __VscopeHash, 1111005681113694399ull);
    vlSelf->__PVT__valid_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15707734284286541495ull);
    vlSelf->__PVT__PC_FE_latch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6793303167614019953ull);
    vlSelf->__PVT__inst_count_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2386120870818899356ull);
    vlSelf->__PVT__inst_count_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3534183065795075936ull);
    vlSelf->__PVT__pcplus_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6292927741016144195ull);
    vlSelf->__PVT__GHR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12372701623086205505ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__PHT_T[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11244404052054756819ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__PHTT[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11888646164444201905ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__PHT[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15551795187877739869ull);
    }
    vlSelf->__PVT__PHT_AGEX_ADDR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16183409895333068639ull);
    vlSelf->__PVT__PHT_AGEX_VAL = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10520654502440384029ull);
    vlSelf->__PVT__BTB_FE_VAL = VL_SCOPED_RAND_RESET_Q(59, __VscopeHash, 13435655913821615920ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__BTB[__Vi0] = VL_SCOPED_RAND_RESET_Q(59, __VscopeHash, 7014380467207470057ull);
    }
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
    vlSelf->total_branch_predictions = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7667925104010604859ull);
    vlSelf->correct_branch_predictions = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3212279713009349680ull);
    vlSelf->__PVT__br_wrong_now_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1078135693675823883ull);
    vlSelf->__PVT__br_taken_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16018926079160472141ull);
    vlSelf->__PVT__br_target_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14597973583492189140ull);
    vlSelf->__PVT__brj_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15474734022102737688ull);
    VL_ZERO_RESET_W(161, vlSelf->__Vdly__FE_latch);
}
