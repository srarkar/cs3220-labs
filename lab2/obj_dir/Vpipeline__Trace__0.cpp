// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0\n"); );
    // Body
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vpipeline___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0_sub_0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_15;
    VlWide<6>/*191:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<6>/*191:0*/ __Vtemp_25;
    VlWide<9>/*287:0*/ __Vtemp_26;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__jbr_count),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_count),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__j_count),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__brj_AGEX_count),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+5,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+6,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch),161);
        bufp->chgWData(oldp+12,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),273);
        bufp->chgWData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),175);
        bufp->chgWData(oldp+27,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        __Vtemp_4[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                  << 0x00000030U) | 
                                 (((QData)((IData)(
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                   << 0x00000010U) 
                                  | ((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                     >> 0x00000010U))));
        __Vtemp_4[1U] = (IData)(((((QData)((IData)(
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                   << 0x00000030U) 
                                  | (((QData)((IData)(
                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                      << 0x00000010U) 
                                     | ((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                        >> 0x00000010U))) 
                                 >> 0x00000020U));
        __Vtemp_4[2U] = vlSymsp->TOP__pipeline__my_FE_stage.__PVT__br_target_AGEX;
        __Vtemp_4[3U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                          << 2U) | (((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__brj_AGEX) 
                                     << 1U) | (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__br_taken_AGEX)));
        bufp->chgWData(oldp+34,(__Vtemp_4),99);
        bufp->chgBit(oldp+38,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+39,((((QData)((IData)((0x0000003fU 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                                  << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB)))),38);
        __Vtemp_10[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                           << 8U) | (0x000000ffU & 
                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]));
        __Vtemp_10[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                           >> 0x00000018U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x00000020U)) 
                                              << 8U));
        __Vtemp_10[2U] = (((IData)((0x0000003fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                        << 0x00000016U) 
                                       | ((QData)((IData)(
                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                          >> 0x0000000aU)))) 
                           << 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                              >> 0x00000020U)) 
                                     >> 0x00000018U));
        __Vtemp_10[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                            << 0x0000001eU) | (0x3fffc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 2U))) 
                          | (((IData)((0x0000003fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                           << 0x00000016U) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                             >> 0x0000000aU)))) 
                              >> 0x00000018U) | ((IData)(
                                                         ((0x0000003fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0x00000016U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 >> 0x0000000aU))) 
                                                          >> 0x00000020U)) 
                                                 << 8U)));
        __Vtemp_10[4U] = ((0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 2U)) | 
                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                            << 0x0000001eU) | (0x3fffc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 2U))));
        __Vtemp_10[5U] = ((0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                          >> 2U)) | 
                          (0x00004000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                          >> 2U)));
        bufp->chgWData(oldp+41,(__Vtemp_10),175);
        bufp->chgBit(oldp+47,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                     >> 0x00000010U))));
        bufp->chgIData(oldp+48,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                  << 0x00000010U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  >> 0x00000010U))),32);
        bufp->chgIData(oldp+49,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x00000010U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  >> 0x00000010U))),32);
        bufp->chgIData(oldp+50,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 0x00000016U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+51,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 0x00000010U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  >> 0x00000010U))),32);
        bufp->chgCData(oldp+52,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x0000000aU))),6);
        bufp->chgBit(oldp+53,(((0x1cU == (0x0000003fU 
                                          & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000000aU)))
                                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0x00000016U) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x0000000aU)) 
                                   == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0x00000016U) 
                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x0000000aU)))
                                : ((0x1dU == (0x0000003fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x0000000aU)))
                                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 0x00000016U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x0000000aU)) 
                                       != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x00000016U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x0000000aU)))
                                    : ((0x1eU == (0x0000003fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x0000000aU)))
                                        ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                                        : ((0x1fU == 
                                            (0x0000003fU 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x0000000aU)))
                                            ? VL_GTES_III(32, 
                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            << 0x00000016U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              >> 0x0000000aU)), 
                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            << 0x00000016U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              >> 0x0000000aU)))
                                            : ((0x20U 
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
                                                                  >> 0x0000000aU))))))))))));
        bufp->chgBit(oldp+54,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 9U))));
        bufp->chgBit(oldp+55,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 8U))));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__brj_AGEX));
        bufp->chgBit(oldp+57,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 7U))));
        bufp->chgBit(oldp+58,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 6U))));
        bufp->chgBit(oldp+59,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 5U))));
        bufp->chgCData(oldp+60,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])),5);
        bufp->chgIData(oldp+61,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 0x00000016U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+62,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x00000016U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0x00000016U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__br_target_AGEX),32);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__br_taken_AGEX));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
        bufp->chgBit(oldp+69,((1U & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U])));
        bufp->chgIData(oldp+70,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U]),32);
        bufp->chgCData(oldp+74,((7U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+75,((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                 >> 0x00000019U)),7);
        bufp->chgCData(oldp+76,((0x0000007fU & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])),7);
        bufp->chgCData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+80,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                  ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                  : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                      ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                      : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                          ? (((- (IData)(
                                                         (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                    >> 0x00000014U)) 
                                                | (0x0000001fU 
                                                   & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                      >> 7U))))
                                          : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                              ? (((- (IData)(
                                                             (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000800U 
                                                     & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                        << 4U)) 
                                                    | ((0x000007e0U 
                                                        & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                           >> 0x00000014U)) 
                                                       | (0x0000001eU 
                                                          & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                             >> 7U)))))
                                              : ((3U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                >> 0x0000001fU))) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                            >> 0x00000014U))))
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+81,((0x0000001fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+82,((0x0000001fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+83,((0x0000001fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                >> 7U))),5);
        bufp->chgBit(oldp+84,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+85,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+86,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+87,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+89,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 5U))));
        bufp->chgCData(oldp+90,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB),32);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+95,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x0000001fU 
                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                          >> 0x0000000fU)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x0000001fU 
                                         & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                            >> 0x00000014U)))))));
        bufp->chgIData(oldp+96,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[0U]),32);
        bufp->chgBit(oldp+97,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                     >> 0x0000000eU))));
        __Vtemp_15[0U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                         >> 0x0000000aU))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x00000018U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                           << 6U) | (0x0000003fU & 
                                     vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
        __Vtemp_15[1U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                         >> 0x0000000aU))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x00000018U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                           >> 0x0000001aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x00003fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                             >> 0x0000000aU))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                            << 0x00000018U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x00000020U)) 
                                              << 6U));
        __Vtemp_15[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 2U))) 
                          | ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x00003fffU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                            >> 0x0000000aU))])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                           << 0x00000018U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001aU));
        __Vtemp_15[3U] = ((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 2U)) | 
                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 2U))));
        __Vtemp_15[4U] = ((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 2U)) | 
                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                  >> 2U))));
        __Vtemp_15[5U] = ((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                          >> 2U)) | 
                          (0x00001fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                          >> 2U)));
        bufp->chgWData(oldp+98,(__Vtemp_15),173);
        bufp->chgCData(oldp+104,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                 >> 8U))),6);
        bufp->chgIData(oldp+105,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+106,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     >> 0x0000000eU))),32);
        bufp->chgIData(oldp+107,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                     >> 0x0000000eU))),32);
        bufp->chgBit(oldp+108,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+109,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                     >> 8U))),32);
        bufp->chgCData(oldp+110,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+111,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+112,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0x0000000aU))]),32);
        bufp->chgBit(oldp+114,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgIData(oldp+115,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_count_FE),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__imem
                                 [(0x00003fffU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch 
                                                  >> 2U))]),32);
        bufp->chgIData(oldp+118,(((IData)(4U) + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch)),32);
        __Vtemp_18[0U] = (((2U <= vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PHTT
                            [vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PHT_T
                            [(0x000000ffU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__br_target_AGEX 
                                             >> 0x00000015U))]]) 
                           & (IData)((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_FE_VAL 
                                      >> 0x0000003aU)))
                           ? (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_FE_VAL)
                           : ((IData)(4U) + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch));
        __Vtemp_18[1U] = (IData)((((QData)((IData)(
                                                   ((IData)(4U) 
                                                    + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_count_FE))));
        __Vtemp_18[2U] = (IData)(((((QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__inst_count_FE))) 
                                  >> 0x00000020U));
        __Vtemp_18[3U] = (IData)((((QData)((IData)(
                                                   vlSymsp->TOP__pipeline__my_FE_stage.__PVT__imem
                                                   [
                                                   (0x00003fffU 
                                                    & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch 
                                                       >> 2U))])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch))));
        __Vtemp_18[4U] = (IData)(((((QData)((IData)(
                                                    vlSymsp->TOP__pipeline__my_FE_stage.__PVT__imem
                                                    [
                                                    (0x00003fffU 
                                                     & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch 
                                                        >> 2U))])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch))) 
                                  >> 0x00000020U));
        __Vtemp_18[5U] = vlSymsp->TOP__pipeline__my_FE_stage.__PVT__valid_FE;
        bufp->chgWData(oldp+119,(__Vtemp_18),161);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__GHR),8);
        bufp->chgCData(oldp+126,((0x000000ffU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch 
                                                  >> 0x00000015U) 
                                                 ^ (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__GHR)))),8);
        bufp->chgCData(oldp+127,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PHT_AGEX_ADDR),8);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PHT
                                 [(0x000000ffU & ((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch 
                                                   >> 0x00000015U) 
                                                  ^ (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__GHR)))]),2);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PHT_AGEX_VAL),2);
        bufp->chgCData(oldp+130,((0x0000000fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch 
                                                 >> 2U))),4);
        bufp->chgQData(oldp+131,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_FE_VAL),59);
        bufp->chgIData(oldp+133,((0x03ffffffU & (IData)(
                                                        (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_FE_VAL 
                                                         >> 0x00000020U)))),26);
        bufp->chgQData(oldp+134,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[0]),59);
        bufp->chgQData(oldp+136,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[1]),59);
        bufp->chgQData(oldp+138,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[2]),59);
        bufp->chgQData(oldp+140,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[3]),59);
        bufp->chgQData(oldp+142,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[4]),59);
        bufp->chgQData(oldp+144,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[5]),59);
        bufp->chgQData(oldp+146,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[6]),59);
        bufp->chgQData(oldp+148,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[7]),59);
        bufp->chgQData(oldp+150,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[8]),59);
        bufp->chgQData(oldp+152,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[9]),59);
        bufp->chgQData(oldp+154,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[10]),59);
        bufp->chgQData(oldp+156,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[11]),59);
        bufp->chgQData(oldp+158,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[12]),59);
        bufp->chgQData(oldp+160,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[13]),59);
        bufp->chgQData(oldp+162,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[14]),59);
        bufp->chgQData(oldp+164,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB[15]),59);
        bufp->chgIData(oldp+166,((((2U <= vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PHTT
                                    [vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PHT_T
                                    [(0x000000ffU & 
                                      (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__br_target_AGEX 
                                       >> 0x00000015U))]]) 
                                   & (IData)((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_FE_VAL 
                                              >> 0x0000003aU)))
                                   ? (IData)(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB_FE_VAL)
                                   : ((IData)(4U) + vlSymsp->TOP__pipeline__my_FE_stage.__PVT__PC_FE_latch))),32);
        bufp->chgQData(oldp+167,(vlSymsp->TOP__pipeline__my_FE_stage.__PVT__BTB
                                 [(0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0x00000012U))]),59);
        bufp->chgCData(oldp+169,((0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 >> 0x00000012U))),4);
        bufp->chgIData(oldp+170,((0x03ffffffU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  << 0x0000000aU) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    >> 0x00000016U)))),26);
        bufp->chgCData(oldp+171,((0x000000ffU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__br_target_AGEX 
                                                 >> 0x00000015U))),8);
        bufp->chgBit(oldp+172,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0x0000000cU))));
        bufp->chgCData(oldp+173,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                 >> 6U))),6);
        bufp->chgIData(oldp+174,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                     >> 0x0000000cU))),32);
        bufp->chgIData(oldp+175,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                     >> 0x0000000cU))),32);
        bufp->chgIData(oldp+176,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                     >> 6U))),32);
        bufp->chgIData(oldp+177,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 6U))),32);
        bufp->chgIData(oldp+178,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                     >> 6U))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        __Vtemp_24[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                           ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                           : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                               : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? (((- (IData)((
                                                   vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                   >> 0x0000001fU))) 
                                       << 0x0000000bU) 
                                      | ((0x000007e0U 
                                          & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                               >> 7U))))
                                   : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                       >> 0x0000001fU))) 
                                           << 0x0000000cU) 
                                          | ((0x00000800U 
                                              & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                 << 4U)) 
                                             | ((0x000007e0U 
                                                 & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                      >> 7U)))))
                                       : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (0xfffff000U 
                                              & vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U])
                                           : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? ((
                                                   (- (IData)(
                                                              (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                               >> 0x0000001fU))) 
                                                   << 0x00000014U) 
                                                  | ((((0x000001feU 
                                                        & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                           >> 0x0000000bU)) 
                                                       | (1U 
                                                          & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                             >> 0x00000014U))) 
                                                      << 0x0000000bU) 
                                                     | (0x000007feU 
                                                        & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                           >> 0x00000014U))))
                                               : 0U))))));
        __Vtemp_25[0U] = (IData)((((QData)((IData)(
                                                   ((((0x1cU 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((0x1dU 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x1eU 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | ((0x1fU 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                               | ((0x20U 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                  | (0x21U 
                                                                     == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                                     << 2U) 
                                                    | ((((0x19U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x1aU 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | (0x1bU 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                        << 1U) 
                                                       | (0x17U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                   << 0x00000027U) 
                                  | (((QData)((IData)(
                                                      (0x18U 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                      << 0x00000026U) 
                                     | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                         << 0x00000025U) 
                                        | (((QData)((IData)(
                                                            (0x0000001fU 
                                                             & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                >> 7U)))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[0U])))))));
        __Vtemp_25[1U] = ((__Vtemp_24[0U] << 0x0000000aU) 
                          | (IData)(((((QData)((IData)(
                                                       ((((0x1cU 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x1dU 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1eU 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x1fU 
                                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x20U 
                                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | (0x21U 
                                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                                         << 2U) 
                                                        | ((((0x19U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                            << 1U) 
                                                           | (0x17U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                       << 0x00000027U) 
                                      | (((QData)((IData)(
                                                          (0x18U 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                          << 0x00000026U) 
                                         | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                             << 0x00000025U) 
                                            | (((QData)((IData)(
                                                                (0x0000001fU 
                                                                 & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                    >> 7U)))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[0U])))))) 
                                     >> 0x00000020U)));
        __Vtemp_26[0U] = __Vtemp_25[0U];
        __Vtemp_26[1U] = __Vtemp_25[1U];
        __Vtemp_26[2U] = ((__Vtemp_24[0U] >> 0x00000016U) 
                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                             [(0x0000001fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                              >> 0x00000014U))] 
                             << 0x0000000aU));
        __Vtemp_26[3U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                           [(0x0000001fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                            >> 0x00000014U))] 
                           >> 0x00000016U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x0000001fU 
                                                                          & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                             >> 0x0000000fU))])))) 
                                              << 0x0000000aU));
        __Vtemp_26[4U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                      [
                                                      (0x0000001fU 
                                                       & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                          >> 0x0000000fU))])))) 
                           >> 0x00000016U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x0000001fU 
                                                                           & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                                              >> 0x0000000fU))]))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000aU));
        __Vtemp_26[5U] = (((vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                            << 0x00000010U) | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                               << 0x0000000aU)) 
                          | ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                         [
                                                         (0x0000001fU 
                                                          & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                             >> 0x0000000fU))]))) 
                                      >> 0x00000020U)) 
                             >> 0x00000016U));
        __Vtemp_26[6U] = (((0x000003ffU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                           >> 0x00000010U)) 
                           | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                              >> 0x00000016U)) | ((0x0000fc00U 
                                                   & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[2U] 
                                                      >> 0x00000010U)) 
                                                  | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                                     << 0x00000010U)));
        __Vtemp_26[7U] = ((0x000003ffU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                          >> 0x00000010U)) 
                          | ((0x0000fc00U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[3U] 
                                             >> 0x00000010U)) 
                             | (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                << 0x00000010U)));
        __Vtemp_26[8U] = ((0x000003ffU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                          >> 0x00000010U)) 
                          | ((0x0000fc00U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                             >> 0x00000010U)) 
                             | (0x00010000U & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[5U] 
                                               << 0x00000010U))));
        bufp->chgWData(oldp+179,(__Vtemp_26),273);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x0000001fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                  >> 0x0000000fU))]),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x0000001fU & (vlSymsp->TOP__pipeline__my_FE_stage.__PVT__FE_latch[4U] 
                                                  >> 0x00000014U))]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+223,(vlSelfRef.clk));
    bufp->chgBit(oldp+224,(vlSelfRef.reset));
    bufp->chgIData(oldp+225,(vlSymsp->TOP__pipeline__my_FE_stage.total_branch_predictions),32);
    bufp->chgIData(oldp+226,(vlSymsp->TOP__pipeline__my_FE_stage.correct_branch_predictions),32);
    bufp->chgIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000aU]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000bU]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000cU]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000dU]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000eU]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000fU]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000010U]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000011U]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000012U]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000013U]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000014U]),32);
    bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000015U]),32);
    bufp->chgIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000016U]),32);
    bufp->chgIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000017U]),32);
    bufp->chgIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000018U]),32);
    bufp->chgIData(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000019U]),32);
    bufp->chgIData(oldp+253,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001aU]),32);
    bufp->chgIData(oldp+254,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001bU]),32);
    bufp->chgIData(oldp+255,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001cU]),32);
    bufp->chgIData(oldp+256,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001dU]),32);
    bufp->chgIData(oldp+257,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001eU]),32);
    bufp->chgIData(oldp+258,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001fU]),32);
    bufp->chgIData(oldp+259,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+260,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+261,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+262,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+263,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+264,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+265,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+266,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Body
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
