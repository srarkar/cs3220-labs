// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__my_AGEX_stage__DOT__br_count = 0U;
    vlSelfRef.__PVT__my_AGEX_stage__DOT__j_count = 0U;
    vlSelfRef.__PVT__my_AGEX_stage__DOT__jbr_count = 0U;
    vlSelfRef.__PVT__my_AGEX_stage__DOT__brj_AGEX_count = 0U;
    VL_READMEM_N(true, 32, 16384, 0, "/Users/ricksarkar/Spring26/CS3220/Labs/lab2/test/towers/towers.mem"s
                 ,  &(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h29143c0b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h5064a2f5_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0 
        = (((- (IData)((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                        >> 0x0000001fU))) << 0x0000000bU) 
           | (0x000007ffU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                             >> 0x00000014U)));
    vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB = 
        ((0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   >> 6U))) ? ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                << 0x0000001aU) 
                                               | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                  >> 6U))
          : ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
              << 0x0000001aU) | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                 >> 6U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x0000000aU)) < 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                >> 0x0000000aU)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0 
        = VL_LTS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                           << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x0000000aU)), 
                     ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                       << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x0000000aU)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
             << 0x00000010U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                >> 0x00000010U)) + 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
             << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                >> 0x0000000aU)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
             << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x0000000aU)) + 
           ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
             << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                >> 0x0000000aU)));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4 
        = (IData)((0x00000033U == (0x0000707fU & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13 
        = (IData)((0x00005033U == (0x0000707fU & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20 
        = (IData)((0x00001000U == (0xfe007000U & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16 
        = (IData)((0x00005013U == (0x0000707fU & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])));
    if ((1U & (~ ((((((((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x0000000aU))) 
                        | (2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU)))) 
                       | (3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x0000000aU)))) 
                      | (4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x0000000aU)))) 
                     | (5U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x0000000aU)))) 
                    | (6U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))) 
                   | (7U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x0000000aU)))) 
                  | (8U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x0000000aU))))))) {
        if ((1U & (~ ((((((((9U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x0000000aU))) 
                            | (0x0aU == (0x0000003fU 
                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x0000000aU)))) 
                           | (0x0bU == (0x0000003fU 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x0000000aU)))) 
                          | (0x0cU == (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x0000000aU)))) 
                         | (0x0dU == (0x0000003fU & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x0000000aU)))) 
                        | (0x0eU == (0x0000003fU & 
                                     (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x0000000aU)))) 
                       | (0x0fU == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x0000000aU)))) 
                      | (0x10U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000aU))))))) {
            if (((((((((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU))) 
                       | (0x12U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x0000000aU)))) 
                      | (0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000aU)))) 
                     | (0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU)))) 
                    | (0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x0000000aU)))) 
                   | (0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x0000000aU)))) 
                  | ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x0000000aU))) 
                     || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000aU))))) 
                 | (0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU))))) {
                if ((0x11U != (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x0000000aU)))) {
                    if ((0x12U != (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000aU)))) {
                        if ((0x13U != (0x0000003fU 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x0000000aU)))) {
                            if ((0x14U != (0x0000003fU 
                                           & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x0000000aU)))) {
                                if ((0x15U != (0x0000003fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000aU)))) {
                                    if ((0x16U != (0x0000003fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x0000000aU)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x0000000aU))) 
                                                    || (0x1bU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                            >> 0x0000000aU))))))) {
                                            vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                                                = vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                    = ((0x18U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU)))
                        ? vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0
                        : 0U);
            }
        }
    }
    if (((((((((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x0000000aU))) 
               | (2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x0000000aU)))) 
              | (3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x0000000aU)))) 
             | (4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x0000000aU)))) 
            | (5U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     >> 0x0000000aU)))) 
           | (6U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                    >> 0x0000000aU)))) 
          | (7U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   >> 0x0000000aU)))) 
         | (8U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  >> 0x0000000aU))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x0000000aU)))
                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x0000000aU)) 
                   + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                       << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x0000000aU)))
                : ((2U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x0000000aU)))
                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                         << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x0000000aU)) 
                       - ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                           << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x0000000aU)))
                    : ((3U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x0000000aU)))
                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                             << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x0000000aU)) 
                           & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x0000000aU)))
                        : ((4U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000aU)))
                            ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 << 0x00000016U) | 
                                (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 >> 0x0000000aU)) | 
                               ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0x00000016U) | 
                                (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 >> 0x0000000aU))) : 
                           ((5U == (0x0000003fU & (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x0000000aU)))
                             ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x0000000aU)) 
                                ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    << 0x00000016U) 
                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      >> 0x0000000aU)))
                             : ((6U == (0x0000003fU 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x0000000aU)))
                                 ? ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                                     ? 1U : 0U) : (
                                                   (7U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0x0000000aU)))
                                                    ? 
                                                   ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   VL_SHIFTRS_III(32,32,5, 
                                                                  ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                    << 0x00000016U) 
                                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      >> 0x0000000aU)), 
                                                                  (0x0000001fU 
                                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      >> 0x0000000aU))))))))));
    } else if (((((((((9U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU))) 
                      | (0x0aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000aU)))) 
                     | (0x0bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU)))) 
                    | (0x0cU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x0000000aU)))) 
                   | (0x0dU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x0000000aU)))) 
                  | (0x0eU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x0000000aU)))) 
                 | (0x0fU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))) 
                | (0x10U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x0000000aU))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x0000000aU)))
                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x0000000aU)) 
                   >> (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      >> 0x0000000aU)))
                : ((0x0aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))
                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                         << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x0000000aU)) 
                       << (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x0000000aU)))
                    : ((0x0bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU)))
                        ? VL_MULS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0x00000016U) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x0000000aU)), 
                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0x00000016U) 
                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x0000000aU)))
                        : ((0x0cU == (0x0000003fU & 
                                      (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x0000000aU)))
                            ? vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0
                            : ((0x0dU == (0x0000003fU 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))
                                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0x00000016U) 
                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x0000000aU)) 
                                   & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         >> 0x0000000aU)))
                                : ((0x0eU == (0x0000003fU 
                                              & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU)))
                                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 0x00000016U) 
                                        | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x0000000aU)) 
                                       | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 0x00000016U) 
                                          | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x0000000aU)))
                                    : ((0x0fU == (0x0000003fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x0000000aU)))
                                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             << 0x00000016U) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x0000000aU)) 
                                           ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0x00000016U) 
                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x0000000aU)))
                                        : (VL_LTS_III(32, 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 0x00000016U) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x0000000aU)), 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 0x00000016U) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x0000000aU)))
                                            ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x0000000aU))) 
                      | (0x12U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000aU)))) 
                     | (0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU)))) 
                    | (0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x0000000aU)))) 
                   | (0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x0000000aU)))) 
                  | (0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x0000000aU)))) 
                 | ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x0000000aU))) 
                    || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU))))) 
                | (0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x0000000aU))))) {
        if ((0x11U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x0000000aU)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                      << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x0000000aU)) 
                    < ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                        << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x0000000aU)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0x00000016U) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x0000000aU)), 
                                 (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x0000000aU)));
        } else if ((0x13U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x0000000aU)) 
                   >> (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x0000000aU)));
        } else if ((0x14U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                     << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x0000000aU)) 
                   << (0x0000001fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x0000000aU)));
        } else if ((0x15U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                    << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x0000000aU));
        } else if ((0x16U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0;
        } else if (((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x0000000aU))) 
                    || (0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU))))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                    << 0x00000010U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x00000010U));
        }
    } else {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x0000000aU)))
                ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                    << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x0000000aU))
                : 0U);
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4) 
                                                   & (0U 
                                                      == 
                                                      (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                       >> 0x00000019U)))
                                                   ? 1U
                                                   : 
                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4) 
                                                    & (0x20U 
                                                       == 
                                                       (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                        >> 0x00000019U)))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            (0x00007033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                     ? 3U
                                                     : 
                                                    ((IData)(
                                                             (0x00006033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              (0x00004033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                       ? 5U
                                                       : 
                                                      ((IData)(
                                                               (0x00002033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                        ? 6U
                                                        : 
                                                       ((IData)(
                                                                (0x00003033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                         ? 7U
                                                         : 
                                                        (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13) 
                                                          & (0x20U 
                                                             == 
                                                             (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                              >> 0x00000019U)))
                                                          ? 8U
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13) 
                                                           & (0U 
                                                              == 
                                                              (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                               >> 0x00000019U)))
                                                           ? 9U
                                                           : 
                                                          (((0x33U 
                                                             == 
                                                             (0x0000007fU 
                                                              & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                            & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20))
                                                            ? 0x0aU
                                                            : 
                                                           (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4) 
                                                             & (1U 
                                                                == 
                                                                (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                 >> 0x00000019U)))
                                                             ? 0x0bU
                                                             : 
                                                            ((IData)(
                                                                     (0x00000013U 
                                                                      == 
                                                                      (0x0000707fU 
                                                                       & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                              ? 0x0cU
                                                              : 
                                                             ((IData)(
                                                                      (0x00007013U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                               ? 0x0dU
                                                               : 
                                                              ((IData)(
                                                                       (0x00006013U 
                                                                        == 
                                                                        (0x0000707fU 
                                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                ? 0x0eU
                                                                : 
                                                               ((IData)(
                                                                        (0x00004013U 
                                                                         == 
                                                                         (0x0000707fU 
                                                                          & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                 ? 0x0fU
                                                                 : 
                                                                ((IData)(
                                                                         (0x00002013U 
                                                                          == 
                                                                          (0x0000707fU 
                                                                           & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(
                                                                          (0x00003013U 
                                                                           == 
                                                                           (0x0000707fU 
                                                                            & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                   ? 0x11U
                                                                   : 
                                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16) 
                                                                    & (0x20U 
                                                                       == 
                                                                       (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                        >> 0x00000019U)))
                                                                    ? 0x12U
                                                                    : 
                                                                   (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                         >> 0x00000019U)))
                                                                     ? 0x13U
                                                                     : 
                                                                    (((0x13U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])) 
                                                                      & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x37U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U]))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x17U 
                                                                        == 
                                                                        (0x0000007fU 
                                                                         & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U]))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(
                                                                                (0x00002003U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x00002023U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x6fU 
                                                                           == 
                                                                           (0x0000007fU 
                                                                            & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U]))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(
                                                                                (0x00000067U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x00000063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x00001063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x00004063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                               ? 0x1eU
                                                                               : 
                                                                              ((IData)(
                                                                                (0x00005063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(
                                                                                (0x00006063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00007063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00002073U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x00001073U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE 
        = vlSelfRef.my_DE_stage__DOT____Vxrand___1;
    if ((1U & (~ (((((((((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))))) {
        if ((((((((((((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | (0x23U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x0cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x0dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x0eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x0fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x10U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x11U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (0x1aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (0x1bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if ((((0x12U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x13U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x14U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if (((0x15U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x16U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 3U;
        } else if ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 4U;
        } else if ((0x19U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 2U;
        } else if (((((((0x1cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x1dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x1eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x20U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x21U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 5U;
        }
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE = 
        ((0U != (0x0000001fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                >> 7U))) & ((0x22U 
                                             == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                            | ((1U 
                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                               | ((2U 
                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((3U 
                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | ((4U 
                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | ((5U 
                                                            == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                           | ((6U 
                                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                              | ((7U 
                                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                 | ((8U 
                                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                    | ((9U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                       | ((0x0aU 
                                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                          | ((0x0bU 
                                                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
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
    vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = vlSelfRef.my_DE_stage__DOT____Vxrand___0;
    if ((((((((((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                  | (2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
            | (8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
          | (0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
         | (0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 1U;
    } else if ((((((((((((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | (0x23U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (0x0cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x0dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x0eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x0fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x10U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x11U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x1aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x1bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((((0x12U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                 | (0x13U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x14U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if (((0x15U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | (0x16U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    } else if ((0x19U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 4U;
    } else if (((((((0x1cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x1dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x1eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x1fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x20U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x21U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    }
    __Vtableidx1 = vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE = 
        Vpipeline__ConstPool__TABLE_h29143c0b_0[__Vtableidx1];
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE = 
        Vpipeline__ConstPool__TABLE_h5064a2f5_0[__Vtableidx1];
}

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__1\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__from_AGEX_to_DE = ((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__brj_AGEX) 
                                        & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__br_target_AGEX 
                                           != vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U]));
    vlSelfRef.__PVT__from_DE_to_FE = ((((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x0000001fU 
                                               & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                  >> 0x0000000fU)))) 
                                       | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                             >> (0x0000001fU 
                                                 & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                    >> 0x00000014U))))) 
                                      | (IData)(vlSelfRef.__PVT__from_AGEX_to_DE));
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
    vlSelf->my_DE_stage__DOT____Vxrand___1 = VL_SCOPED_RAND_RESET_ASSIGN_I(3, __VscopeHash, 12061010148572372012ull);
    vlSelf->my_DE_stage__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(4, __VscopeHash, 7324809328672732923ull);
    VL_SCOPED_RAND_RESET_W(273, vlSelf->__PVT__my_DE_stage__DOT__DE_latch, __VscopeHash, 12720121764206633172ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2211754412344529817ull);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18007936897921350699ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11218727599284980111ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 783089451810364172ull);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1249650228049212677ull);
    vlSelf->__PVT__my_DE_stage__DOT__regval_WB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5070650556380662180ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3587661886766856571ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12338438627132944225ull);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14209109425183318264ull);
    vlSelf->__PVT__my_DE_stage__DOT__temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2004179363400134783ull);
    vlSelf->my_DE_stage__DOT____VdfgExtracted_h54a4af44__0 = 0;
    VL_SCOPED_RAND_RESET_W(175, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch, __VscopeHash, 18426125699513857839ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10689303648146888781ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4634093393574144463ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__jbr_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4484411985727586396ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__br_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9799976815632313728ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__j_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1171331352794906834ull);
    vlSelf->__PVT__my_AGEX_stage__DOT__brj_AGEX_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15818684371547397132ull);
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0 = 0;
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0 = 0;
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_h32f0a660__0 = 0;
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hbcc182c0__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5716915382548216729ull);
    }
    VL_SCOPED_RAND_RESET_W(173, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch, __VscopeHash, 13271297185850210100ull);
    vlSelf->__VdlyVal__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__VdlyDim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__VdlySet__my_MEM_stage__DOT__dmem__v0 = 0;
}
