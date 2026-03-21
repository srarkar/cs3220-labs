// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

void Vpipeline_FE_STAGE___nba_sequent__TOP__pipeline__my_FE_stage__0(Vpipeline_FE_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___nba_sequent__TOP__pipeline__my_FE_stage__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__PC_FE_latch;
    __Vdly__PC_FE_latch = 0;
    IData/*31:0*/ __Vdly__inst_count_FE;
    __Vdly__inst_count_FE = 0;
    QData/*58:0*/ __VdlyVal__BTB__v0;
    __VdlyVal__BTB__v0 = 0;
    CData/*3:0*/ __VdlyDim0__BTB__v0;
    __VdlyDim0__BTB__v0 = 0;
    CData/*0:0*/ __VdlySet__BTB__v0;
    __VdlySet__BTB__v0 = 0;
    CData/*1:0*/ __VdlyVal__PHTT__v0;
    __VdlyVal__PHTT__v0 = 0;
    CData/*7:0*/ __VdlyDim0__PHTT__v0;
    __VdlyDim0__PHTT__v0 = 0;
    CData/*0:0*/ __VdlySet__PHTT__v0;
    __VdlySet__PHTT__v0 = 0;
    CData/*1:0*/ __VdlyVal__PHTT__v1;
    __VdlyVal__PHTT__v1 = 0;
    CData/*7:0*/ __VdlyDim0__PHTT__v1;
    __VdlyDim0__PHTT__v1 = 0;
    CData/*0:0*/ __VdlySet__PHTT__v1;
    __VdlySet__PHTT__v1 = 0;
    CData/*7:0*/ __VdlyVal__PHT_T__v0;
    __VdlyVal__PHT_T__v0 = 0;
    CData/*7:0*/ __VdlyDim0__PHT_T__v0;
    __VdlyDim0__PHT_T__v0 = 0;
    CData/*0:0*/ __VdlySet__PHT_T__v0;
    __VdlySet__PHT_T__v0 = 0;
    CData/*1:0*/ __VdlyVal__PHT__v0;
    __VdlyVal__PHT__v0 = 0;
    CData/*7:0*/ __VdlyDim0__PHT__v0;
    __VdlyDim0__PHT__v0 = 0;
    CData/*0:0*/ __VdlySet__PHT__v0;
    __VdlySet__PHT__v0 = 0;
    CData/*1:0*/ __VdlyVal__PHT__v1;
    __VdlyVal__PHT__v1 = 0;
    CData/*7:0*/ __VdlyDim0__PHT__v1;
    __VdlyDim0__PHT__v1 = 0;
    CData/*0:0*/ __VdlySet__PHT__v1;
    __VdlySet__PHT__v1 = 0;
    // Body
    VL_WRITEF_NX("FE - Total: %x, Correct: %x\n",0,
                 32,vlSelfRef.total_branch_predictions,
                 32,vlSelfRef.correct_branch_predictions);
    __Vdly__inst_count_FE = vlSelfRef.__PVT__inst_count_FE;
    __VdlySet__PHT__v0 = 0U;
    __VdlySet__PHT__v1 = 0U;
    __Vdly__PC_FE_latch = vlSelfRef.__PVT__PC_FE_latch;
    __VdlySet__PHT_T__v0 = 0U;
    __VdlySet__PHTT__v0 = 0U;
    __VdlySet__PHTT__v1 = 0U;
    vlSelfRef.__Vdly__FE_latch[0U] = vlSelfRef.__PVT__FE_latch[0U];
    vlSelfRef.__Vdly__FE_latch[1U] = vlSelfRef.__PVT__FE_latch[1U];
    vlSelfRef.__Vdly__FE_latch[2U] = vlSelfRef.__PVT__FE_latch[2U];
    vlSelfRef.__Vdly__FE_latch[3U] = vlSelfRef.__PVT__FE_latch[3U];
    vlSelfRef.__Vdly__FE_latch[4U] = vlSelfRef.__PVT__FE_latch[4U];
    vlSelfRef.__Vdly__FE_latch[5U] = vlSelfRef.__PVT__FE_latch[5U];
    __VdlySet__BTB__v0 = 0U;
    if (vlSelfRef.__PVT__brj_AGEX) {
        vlSelfRef.total_branch_predictions = ((IData)(1U) 
                                              + vlSelfRef.total_branch_predictions);
        if ((1U & (~ (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))) {
            vlSelfRef.correct_branch_predictions = 
                ((IData)(1U) + vlSelfRef.correct_branch_predictions);
        }
        vlSelfRef.__PVT__GHR = ((0x000000feU & ((IData)(vlSelfRef.__PVT__GHR) 
                                                << 1U)) 
                                | (IData)(vlSelfRef.__PVT__br_taken_AGEX));
        if (((IData)(vlSelfRef.__PVT__br_taken_AGEX) 
             & (3U > (IData)(vlSelfRef.__PVT__PHT_AGEX_VAL)))) {
            __VdlyVal__PHT__v0 = (3U & ((IData)(1U) 
                                        + vlSelfRef.__PVT__PHT
                                        [vlSelfRef.__PVT__PHT_AGEX_ADDR]));
            __VdlyDim0__PHT__v0 = vlSelfRef.__PVT__PHT_AGEX_ADDR;
            __VdlySet__PHT__v0 = 1U;
        } else if (((~ (IData)(vlSelfRef.__PVT__br_taken_AGEX)) 
                    & (0U < (IData)(vlSelfRef.__PVT__PHT_AGEX_VAL)))) {
            __VdlyVal__PHT__v1 = (3U & (vlSelfRef.__PVT__PHT
                                        [vlSelfRef.__PVT__PHT_AGEX_ADDR] 
                                        - (IData)(1U)));
            __VdlyDim0__PHT__v1 = vlSelfRef.__PVT__PHT_AGEX_ADDR;
            __VdlySet__PHT__v1 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__br_taken_AGEX) 
             & (3U > vlSelfRef.__PVT__PHTT[vlSelfRef.__PVT__PHT_T
                [(0x000000ffU & (vlSelfRef.__PVT__br_target_AGEX 
                                 >> 0x00000015U))]]))) {
            __VdlyVal__PHTT__v0 = (3U & ((IData)(1U) 
                                         + vlSelfRef.__PVT__PHTT
                                         [vlSelfRef.__PVT__PHT_T
                                         [(0x000000ffU 
                                           & (vlSelfRef.__PVT__br_target_AGEX 
                                              >> 0x00000015U))]]));
            __VdlyDim0__PHTT__v0 = vlSelfRef.__PVT__PHT_T
                [(0x000000ffU & (vlSelfRef.__PVT__br_target_AGEX 
                                 >> 0x00000015U))];
            __VdlySet__PHTT__v0 = 1U;
        } else if (((~ (IData)(vlSelfRef.__PVT__br_taken_AGEX)) 
                    & (0U < vlSelfRef.__PVT__PHTT[vlSelfRef.__PVT__PHT_T
                       [(0x000000ffU & (vlSelfRef.__PVT__br_target_AGEX 
                                        >> 0x00000015U))]]))) {
            __VdlyVal__PHTT__v1 = (3U & (vlSelfRef.__PVT__PHTT
                                         [vlSelfRef.__PVT__PHT_T
                                         [(0x000000ffU 
                                           & (vlSelfRef.__PVT__br_target_AGEX 
                                              >> 0x00000015U))]] 
                                         - (IData)(1U)));
            __VdlyDim0__PHTT__v1 = vlSelfRef.__PVT__PHT_T
                [(0x000000ffU & (vlSelfRef.__PVT__br_target_AGEX 
                                 >> 0x00000015U))];
            __VdlySet__PHTT__v1 = 1U;
        }
        __VdlyVal__PHT_T__v0 = ((0x000000feU & (vlSelfRef.__PVT__PHT_T
                                                [(0x000000ffU 
                                                  & (vlSelfRef.__PVT__br_target_AGEX 
                                                     >> 0x00000015U))] 
                                                << 1U)) 
                                | (IData)(vlSelfRef.__PVT__br_taken_AGEX));
        __VdlyDim0__PHT_T__v0 = (0x000000ffU & (vlSelfRef.__PVT__br_target_AGEX 
                                                >> 0x00000015U));
        __VdlySet__PHT_T__v0 = 1U;
        __VdlyVal__BTB__v0 = (0x0400000000000000ULL 
                              | (((QData)((IData)((0x03ffffffU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                       << 0x0000000aU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                         >> 0x00000016U))))) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__br_target_AGEX))));
        __VdlyDim0__BTB__v0 = (0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                              >> 0x00000012U));
        __VdlySet__BTB__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__PC_FE_latch = 0x00000200U;
        __Vdly__inst_count_FE = 1U;
        vlSelfRef.__Vdly__FE_latch[0U] = 0U;
        vlSelfRef.__Vdly__FE_latch[1U] = 0U;
        vlSelfRef.__Vdly__FE_latch[2U] = 0U;
        vlSelfRef.__Vdly__FE_latch[3U] = 0U;
        vlSelfRef.__Vdly__FE_latch[4U] = 0U;
        vlSelfRef.__Vdly__FE_latch[5U] = 0U;
    } else if (vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) {
        __Vdly__PC_FE_latch = vlSelfRef.__PVT__br_target_AGEX;
        vlSelfRef.__Vdly__FE_latch[0U] = 0U;
        vlSelfRef.__Vdly__FE_latch[1U] = 0U;
        vlSelfRef.__Vdly__FE_latch[2U] = 0U;
        vlSelfRef.__Vdly__FE_latch[3U] = 0U;
        vlSelfRef.__Vdly__FE_latch[4U] = 0U;
        vlSelfRef.__Vdly__FE_latch[5U] = 0U;
    } else if (vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE) {
        __Vdly__PC_FE_latch = vlSelfRef.__PVT__PC_FE_latch;
        vlSelfRef.__Vdly__FE_latch[0U] = vlSelfRef.__PVT__FE_latch[0U];
        vlSelfRef.__Vdly__FE_latch[1U] = vlSelfRef.__PVT__FE_latch[1U];
        vlSelfRef.__Vdly__FE_latch[2U] = vlSelfRef.__PVT__FE_latch[2U];
        vlSelfRef.__Vdly__FE_latch[3U] = vlSelfRef.__PVT__FE_latch[3U];
        vlSelfRef.__Vdly__FE_latch[4U] = vlSelfRef.__PVT__FE_latch[4U];
        vlSelfRef.__Vdly__FE_latch[5U] = vlSelfRef.__PVT__FE_latch[5U];
    } else {
        if ((((2U <= vlSelfRef.__PVT__PHTT[vlSelfRef.__PVT__PHT_T
               [(0x000000ffU & (vlSelfRef.__PVT__br_target_AGEX 
                                >> 0x00000015U))]]) 
              & (IData)((vlSelfRef.__PVT__BTB_FE_VAL 
                         >> 0x3aU))) & ((0x03ffffffU 
                                         & (IData)(
                                                   (vlSelfRef.__PVT__BTB_FE_VAL 
                                                    >> 0x20U))) 
                                        == (vlSelfRef.__PVT__PC_FE_latch 
                                            >> 6U)))) {
            __Vdly__PC_FE_latch = (IData)(vlSelfRef.__PVT__BTB_FE_VAL);
        } else {
            __Vdly__inst_count_FE = ((IData)(1U) + vlSelfRef.__PVT__inst_count_FE);
            __Vdly__PC_FE_latch = vlSelfRef.__PVT__pcplus_FE;
        }
        vlSelfRef.__Vdly__FE_latch[0U] = (((2U <= vlSelfRef.__PVT__PHTT
                                            [vlSelfRef.__PVT__PHT_T
                                            [(0x000000ffU 
                                              & (vlSelfRef.__PVT__br_target_AGEX 
                                                 >> 0x00000015U))]]) 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__BTB_FE_VAL 
                                                      >> 0x0000003aU)))
                                           ? (IData)(vlSelfRef.__PVT__BTB_FE_VAL)
                                           : ((IData)(4U) 
                                              + vlSelfRef.__PVT__PC_FE_latch));
        vlSelfRef.__Vdly__FE_latch[1U] = (IData)((((QData)((IData)(
                                                                   ((IData)(4U) 
                                                                    + vlSelfRef.__PVT__PC_FE_latch))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.__PVT__inst_count_FE))));
        vlSelfRef.__Vdly__FE_latch[2U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + vlSelfRef.__PVT__PC_FE_latch))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__inst_count_FE))) 
                                                  >> 0x00000020U));
        vlSelfRef.__Vdly__FE_latch[3U] = (IData)((((QData)((IData)(
                                                                   vlSelfRef.__PVT__imem
                                                                   [
                                                                   (0x00003fffU 
                                                                    & (vlSelfRef.__PVT__PC_FE_latch 
                                                                       >> 2U))])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.__PVT__PC_FE_latch))));
        vlSelfRef.__Vdly__FE_latch[4U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__imem
                                                                    [
                                                                    (0x00003fffU 
                                                                     & (vlSelfRef.__PVT__PC_FE_latch 
                                                                        >> 2U))])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__PC_FE_latch))) 
                                                  >> 0x00000020U));
        vlSelfRef.__Vdly__FE_latch[5U] = vlSelfRef.__PVT__valid_FE;
    }
    if (__VdlySet__PHT__v0) {
        vlSelfRef.__PVT__PHT[__VdlyDim0__PHT__v0] = __VdlyVal__PHT__v0;
    }
    if (__VdlySet__PHT__v1) {
        vlSelfRef.__PVT__PHT[__VdlyDim0__PHT__v1] = __VdlyVal__PHT__v1;
    }
    vlSelfRef.__PVT__inst_count_FE = __Vdly__inst_count_FE;
    if (__VdlySet__PHT_T__v0) {
        vlSelfRef.__PVT__PHT_T[__VdlyDim0__PHT_T__v0] 
            = __VdlyVal__PHT_T__v0;
    }
    if (__VdlySet__PHTT__v0) {
        vlSelfRef.__PVT__PHTT[__VdlyDim0__PHTT__v0] 
            = __VdlyVal__PHTT__v0;
    }
    if (__VdlySet__PHTT__v1) {
        vlSelfRef.__PVT__PHTT[__VdlyDim0__PHTT__v1] 
            = __VdlyVal__PHTT__v1;
    }
    vlSelfRef.__PVT__PC_FE_latch = __Vdly__PC_FE_latch;
    if (__VdlySet__BTB__v0) {
        vlSelfRef.__PVT__BTB[__VdlyDim0__BTB__v0] = __VdlyVal__BTB__v0;
    }
    vlSelfRef.__PVT__pcplus_FE = ((IData)(4U) + vlSelfRef.__PVT__PC_FE_latch);
    vlSelfRef.__PVT__BTB_FE_VAL = vlSelfRef.__PVT__BTB
        [(0x0000000fU & (vlSelfRef.__PVT__PC_FE_latch 
                         >> 2U))];
}

void Vpipeline_FE_STAGE___nba_sequent__TOP__pipeline__my_FE_stage__1(Vpipeline_FE_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_FE_STAGE___nba_sequent__TOP__pipeline__my_FE_stage__1\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__FE_latch[0U] = vlSelfRef.__Vdly__FE_latch[0U];
    vlSelfRef.__PVT__FE_latch[1U] = vlSelfRef.__Vdly__FE_latch[1U];
    vlSelfRef.__PVT__FE_latch[2U] = vlSelfRef.__Vdly__FE_latch[2U];
    vlSelfRef.__PVT__FE_latch[3U] = vlSelfRef.__Vdly__FE_latch[3U];
    vlSelfRef.__PVT__FE_latch[4U] = vlSelfRef.__Vdly__FE_latch[4U];
    vlSelfRef.__PVT__FE_latch[5U] = vlSelfRef.__Vdly__FE_latch[5U];
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
