// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_sub_4(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 10912);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
        bufp->chgBit(oldp+0,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                    [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))))));
        bufp->chgBit(oldp+2,((((~ (IData)((1ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                              | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x27U) 
                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x))) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x3fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+3,((1U & (IData)((0x3fffffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U))))));
        bufp->chgBit(oldp+4,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                              [6U])));
        bufp->chgBit(oldp+5,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                    [6U] >> 1U))));
        bufp->chgBit(oldp+6,((1U & (~ (IData)((0x3fffffffffc0000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x12U)))))));
        bufp->chgBit(oldp+7,((((~ (IData)((0x3fffffffffc0000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x12U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffc0000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x12U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+8,((1U & (IData)((0x1fffffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U))))));
        bufp->chgBit(oldp+9,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                              [7U])));
        bufp->chgBit(oldp+10,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [7U] >> 1U))));
        bufp->chgBit(oldp+11,((1U & (~ (IData)((0x1fffffffffe0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x11U)))))));
        bufp->chgBit(oldp+12,((((~ (IData)((0x1fffffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [7U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+13,((1U & (IData)((0xffffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))))));
        bufp->chgBit(oldp+14,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [8U])));
        bufp->chgBit(oldp+15,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [8U] >> 1U))));
        bufp->chgBit(oldp+16,((1U & (~ (IData)((0xffffffffff0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))))));
        bufp->chgBit(oldp+17,((((~ (IData)((0xffffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+18,((1U & (IData)((0x7fffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))))));
        bufp->chgBit(oldp+19,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [9U])));
        bufp->chgBit(oldp+20,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [9U] >> 1U))));
        bufp->chgBit(oldp+21,((1U & (~ (IData)((0x7fffffffff8000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xfU)))))));
        bufp->chgBit(oldp+22,((((~ (IData)((0x7fffffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+23,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+24,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x18U)))));
        bufp->chgCData(oldp+25,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x19U)))),3);
        bufp->chgQData(oldp+26,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                 << 0x1aU)),64);
        bufp->chgQData(oldp+28,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+30,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+34,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1aU)))));
        bufp->chgBit(oldp+35,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU))))));
        bufp->chgBit(oldp+36,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x1aU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x1aU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+37,((1U & (IData)((0x3fffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))))));
        bufp->chgBit(oldp+38,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xaU])));
        bufp->chgBit(oldp+39,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xaU] >> 1U))));
        bufp->chgBit(oldp+40,((1U & (~ (IData)((0x3fffffffff0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))))));
        bufp->chgBit(oldp+41,((((~ (IData)((0x3fffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+42,((1U & (IData)((0x1fffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))))));
        bufp->chgBit(oldp+43,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xbU])));
        bufp->chgBit(oldp+44,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xbU] >> 1U))));
        bufp->chgBit(oldp+45,((1U & (~ (IData)((0x1fffffffff8000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xfU)))))));
        bufp->chgBit(oldp+46,((((~ (IData)((0x1fffffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+47,((1U & (IData)((0xfffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))))));
        bufp->chgBit(oldp+48,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xcU])));
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xcU] >> 1U))));
        bufp->chgBit(oldp+50,((1U & (~ (IData)((0xfffffffffc000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xeU)))))));
        bufp->chgBit(oldp+51,((((~ (IData)((0xfffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+52,((1U & (IData)((0x7ffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))))));
        bufp->chgBit(oldp+53,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xdU])));
        bufp->chgBit(oldp+54,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xdU] >> 1U))));
        bufp->chgBit(oldp+55,((1U & (~ (IData)((0x7ffffffffe000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xdU)))))));
        bufp->chgBit(oldp+56,((((~ (IData)((0x7ffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+57,((1U & (IData)((0x3fffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))))));
        bufp->chgBit(oldp+58,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xeU])));
        bufp->chgBit(oldp+59,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xeU] >> 1U))));
        bufp->chgBit(oldp+60,((1U & (~ (IData)((0x3fffffffff000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xcU)))))));
        bufp->chgBit(oldp+61,((((~ (IData)((0x3fffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+62,((1U & (IData)((0x1fffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))))));
        bufp->chgBit(oldp+63,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xfU])));
        bufp->chgBit(oldp+64,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xfU] >> 1U))));
        bufp->chgBit(oldp+65,((1U & (~ (IData)((0x1fffffffff800ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xbU)))))));
        bufp->chgBit(oldp+66,((((~ (IData)((0x1fffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+67,((1U & (IData)((0xfffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))))));
        bufp->chgBit(oldp+68,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x10U])));
        bufp->chgBit(oldp+69,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x10U] >> 1U))));
        bufp->chgBit(oldp+70,((1U & (~ (IData)((0xfffffffffc00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xaU)))))));
        bufp->chgBit(oldp+71,((((~ (IData)((0xfffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+72,((1U & (IData)((0x7ffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))))));
        bufp->chgBit(oldp+73,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x11U])));
        bufp->chgBit(oldp+74,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x11U] >> 1U))));
        bufp->chgBit(oldp+75,((1U & (~ (IData)((0x7ffffffffe00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 9U)))))));
        bufp->chgBit(oldp+76,((((~ (IData)((0x7ffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+77,((1U & (IData)((0x3fffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))))));
        bufp->chgBit(oldp+78,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
        bufp->chgBit(oldp+79,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
        bufp->chgBit(oldp+80,((1U & (~ (IData)((0x3fffffffff00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 8U)))))));
        bufp->chgBit(oldp+81,((((~ (IData)((0x3fffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+82,((1U & (IData)((0x1fffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))))));
        bufp->chgBit(oldp+83,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
        bufp->chgBit(oldp+84,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
        bufp->chgBit(oldp+85,((1U & (~ (IData)((0x1fffffffff80ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 7U)))))));
        bufp->chgBit(oldp+86,((((~ (IData)((0x1fffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+87,((1U & (IData)((0x7ffffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U))))));
        bufp->chgBit(oldp+88,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
        bufp->chgBit(oldp+89,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
        bufp->chgBit(oldp+90,((1U & (~ (IData)((0x7ffffffffe000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x19U)))))));
        bufp->chgBit(oldp+91,((((~ (IData)((0x7ffffffffe000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x19U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffe000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x19U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+92,((1U & (IData)((0xfffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))))));
        bufp->chgBit(oldp+93,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
        bufp->chgBit(oldp+94,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
        bufp->chgBit(oldp+95,((1U & (~ (IData)((0xfffffffffc0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 6U)))))));
        bufp->chgBit(oldp+96,((((~ (IData)((0xfffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+97,((1U & (IData)((0x7ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))))));
        bufp->chgBit(oldp+98,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
        bufp->chgBit(oldp+99,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
        bufp->chgBit(oldp+100,((1U & (~ (IData)((0x7ffffffffe0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+101,((((~ (IData)((0x7ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+102,((1U & (IData)((0x3fffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+103,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+104,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+105,((1U & (~ (IData)((0x3fffffffff0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+106,((((~ (IData)((0x3fffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+107,((1U & (IData)((0x1fffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+108,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+109,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+110,((1U & (~ (IData)((0x1fffffffff8ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+111,((((~ (IData)((0x1fffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+112,((1U & (IData)((0xfffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+113,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+114,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+115,((1U & (~ (IData)((0xfffffffffcULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+116,((((~ (IData)((0xfffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+117,((1U & (IData)((0x7ffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+118,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+119,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+120,((1U & (~ (IData)((0x7ffffffffeULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+121,((((~ (IData)((0x7ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+122,((1U & (IData)((0x3fffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+123,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+124,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+125,((1U & (~ (IData)((0x3fffffffffULL 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+126,((((~ (IData)((0x3fffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+127,((1U & (IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+128,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+130,((1U & (~ (IData)((0x1fffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+131,((((~ (IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+132,((1U & (IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+133,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+134,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+135,((1U & (~ (IData)((0xfffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+136,((((~ (IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+137,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+138,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+139,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+140,((1U & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+141,((((~ (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+142,((1U & (IData)((0x3fffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))))));
        bufp->chgBit(oldp+143,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+144,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+145,((1U & (~ (IData)((0x3fffffffff000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x18U)))))));
        bufp->chgBit(oldp+146,((((~ (IData)((0x3fffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [2U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+147,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+148,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+149,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+150,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+151,((((~ (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+152,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+153,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+154,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+155,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+156,((((~ (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+157,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+158,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+159,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+160,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+161,((((~ (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+162,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+163,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+164,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+165,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+166,((((~ (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+167,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+168,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+170,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+171,((((~ (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+172,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+173,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+174,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+175,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+176,((((~ (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+177,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+178,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+179,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+180,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+181,((((~ (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+182,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+183,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+184,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+185,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+186,((((~ (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+187,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+188,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+189,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+190,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+191,((((~ (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+192,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+193,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+194,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+195,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+196,((((~ (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+197,((1U & (IData)((0x1fffffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))));
        bufp->chgBit(oldp+198,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+199,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+200,((1U & (~ (IData)((0x1fffffffff800000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x17U)))))));
        bufp->chgBit(oldp+201,((((~ (IData)((0x1fffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [3U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+202,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+203,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+204,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+205,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+206,((((~ (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+207,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+208,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+209,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+210,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+211,((((~ (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+212,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+213,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+214,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+215,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+216,((((~ (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+217,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+218,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+219,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+220,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+221,((((~ (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+222,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+223,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+224,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+225,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+226,((((~ (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+227,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+228,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+229,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+230,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+231,((((~ (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+232,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+233,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+234,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+235,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+236,((((~ (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+237,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+238,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+239,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+240,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+241,((((~ (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+242,((1U & (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+243,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+244,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+245,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+246,((((~ (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+247,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+248,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+249,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+250,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+251,((((~ (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+252,((1U & (IData)((0xfffffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))));
        bufp->chgBit(oldp+253,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+254,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+255,((1U & (~ (IData)((0xfffffffffc00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))))));
        bufp->chgBit(oldp+256,((((~ (IData)((0xfffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [4U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+257,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+258,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+259,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+260,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+261,((((~ (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+262,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+263,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+264,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+265,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+266,((((~ (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+267,((1U & (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+268,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+269,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+270,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+271,((((~ (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+272,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+273,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+274,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+275,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+276,((((~ (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+277,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+278,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+279,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+280,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+281,((((~ (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+282,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+283,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+284,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+285,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+286,((((~ (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+287,((1U & (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+288,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+289,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+290,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+291,((((~ (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+292,((1U & (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+293,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+294,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+295,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+296,((((~ (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+297,((1U & (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+298,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+299,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+300,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+301,((((~ (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+302,((1U & (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+303,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+304,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+305,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+306,((((~ (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+307,((1U & (IData)((0x7ffffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+308,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+309,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+310,((1U & (~ (IData)((0x7ffffffffe00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+311,((((~ (IData)((0x7ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [5U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+312,((1U & (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+313,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+314,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+315,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+316,((((~ (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+317,((1U & (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+318,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+319,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+320,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+321,((((~ (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+322,((1U & (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+323,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+324,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+325,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+326,((((~ (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+327,((1U & (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+328,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+329,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+330,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+331,((((~ (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x25U) 
                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x))) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+332,((1U & (IData)((0x3fffffffff00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+333,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+334,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+335,((1U & (~ (IData)((0x3fffffffff00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+336,((((~ (IData)((0x3fffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [6U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+337,((1U & (IData)((0x1fffffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+338,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+339,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+340,((1U & (~ (IData)((0x1fffffffff80000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+341,((((~ (IData)((0x1fffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [7U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+342,((1U & (IData)((0xfffffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+343,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+344,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+345,((1U & (~ (IData)((0xfffffffffc0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+346,((((~ (IData)((0xfffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [8U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+347,((1U & (IData)((0x7ffffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+348,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+349,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+350,((1U & (~ (IData)((0x7ffffffffe0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+351,((((~ (IData)((0x7ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [9U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+352,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+353,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x1aU)))));
        bufp->chgCData(oldp+354,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                >> 0x1bU)))),3);
        bufp->chgQData(oldp+355,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                  << 0x1cU)),64);
        bufp->chgQData(oldp+357,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+359,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x) 
                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+363,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1cU)))));
        bufp->chgBit(oldp+364,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU))))));
        bufp->chgBit(oldp+365,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1cU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1cU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+366,((1U & (IData)((0x3ffffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+367,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+368,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+369,((1U & (~ (IData)((0x3ffffffffc0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+370,((((~ (IData)((0x3ffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+371,((1U & (IData)((0x1ffffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+372,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+373,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+374,((1U & (~ (IData)((0x1ffffffffe0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+375,((((~ (IData)((0x1ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+376,((1U & (IData)((0xfffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+377,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+378,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+379,((1U & (~ (IData)((0xfffffffff0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+380,((((~ (IData)((0xfffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+381,((1U & (IData)((0x7ffffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+382,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+383,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+384,((1U & (~ (IData)((0x7ffffffff8000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+385,((((~ (IData)((0x7ffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+386,((1U & (IData)((0x3ffffffffc000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+387,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+388,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+389,((1U & (~ (IData)((0x3ffffffffc000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+390,((((~ (IData)((0x3ffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+391,((1U & (IData)((0x1ffffffffe000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+392,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+393,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+394,((1U & (~ (IData)((0x1ffffffffe000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+395,((((~ (IData)((0x1ffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+396,((1U & (IData)((0xfffffffff000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+397,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+398,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+399,((1U & (~ (IData)((0xfffffffff000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+400,((((~ (IData)((0xfffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+401,((1U & (IData)((0x7ffffffff800ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+402,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+403,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+404,((1U & (~ (IData)((0x7ffffffff800ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+405,((((~ (IData)((0x7ffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+406,((1U & (IData)((0x3ffffffffc00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))));
        bufp->chgBit(oldp+407,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+408,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+409,((1U & (~ (IData)((0x3ffffffffc00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))))));
        bufp->chgBit(oldp+410,((((~ (IData)((0x3ffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+411,((1U & (IData)((0x1ffffffffe00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 9U))))));
        bufp->chgBit(oldp+412,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+413,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+414,((1U & (~ (IData)((0x1ffffffffe00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 9U)))))));
        bufp->chgBit(oldp+415,((((~ (IData)((0x1ffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+416,((1U & (IData)((0x7ffffffff8000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU))))));
        bufp->chgBit(oldp+417,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+418,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+419,((1U & (~ (IData)((0x7ffffffff8000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1bU)))))));
        bufp->chgBit(oldp+420,((((~ (IData)((0x7ffffffff8000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1bU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff8000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1bU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [1U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+421,((1U & (IData)((0xfffffffff00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+422,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+423,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+424,((1U & (~ (IData)((0xfffffffff00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 8U)))))));
        bufp->chgBit(oldp+425,((((~ (IData)((0xfffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+426,((1U & (IData)((0x7ffffffff80ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+427,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+428,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+429,((1U & (~ (IData)((0x7ffffffff80ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+430,((((~ (IData)((0x7ffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+431,((1U & (IData)((0x3ffffffffc0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+432,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+433,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+434,((1U & (~ (IData)((0x3ffffffffc0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+435,((((~ (IData)((0x3ffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+436,((1U & (IData)((0x1ffffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+437,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+438,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+439,((1U & (~ (IData)((0x1ffffffffe0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+440,((((~ (IData)((0x1ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+441,((1U & (IData)((0xfffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+442,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+443,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+444,((1U & (~ (IData)((0xfffffffff0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+445,((((~ (IData)((0xfffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+446,((1U & (IData)((0x7ffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+447,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+448,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+449,((1U & (~ (IData)((0x7ffffffff8ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+450,((((~ (IData)((0x7ffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+451,((1U & (IData)((0x3ffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+452,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+453,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+454,((1U & (~ (IData)((0x3ffffffffcULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+455,((((~ (IData)((0x3ffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+456,((1U & (IData)((0x1ffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+457,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+458,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+459,((1U & (~ (IData)((0x1ffffffffeULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+460,((((~ (IData)((0x1ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+461,((1U & (IData)((0xfffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+462,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+463,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+464,((1U & (~ (IData)((0xfffffffffULL 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+465,((((~ (IData)((0xfffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+466,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+467,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+468,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+469,((1U & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+470,((((~ (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+471,((1U & (IData)((0x3ffffffffc000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))))));
        bufp->chgBit(oldp+472,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+473,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+474,((1U & (~ (IData)((0x3ffffffffc000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1aU)))))));
        bufp->chgBit(oldp+475,((((~ (IData)((0x3ffffffffc000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [2U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+476,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+477,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+478,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+479,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+480,((((~ (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+481,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+482,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+483,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+484,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+485,((((~ (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+486,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+487,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+488,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+489,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+490,((((~ (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+491,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+492,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+493,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+494,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+495,((((~ (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+496,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+497,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+498,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+499,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+500,((((~ (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+501,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+502,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+503,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+504,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+505,((((~ (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+506,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+507,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+508,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+509,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+510,((((~ (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+511,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+512,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+513,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+514,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+515,((((~ (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+516,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+517,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+518,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+519,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+520,((((~ (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+521,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+522,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+523,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+524,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+525,((((~ (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+526,((1U & (IData)((0x1ffffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))))));
        bufp->chgBit(oldp+527,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+528,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+529,((1U & (~ (IData)((0x1ffffffffe000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x19U)))))));
        bufp->chgBit(oldp+530,((((~ (IData)((0x1ffffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [3U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+531,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+532,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+533,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+534,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+535,((((~ (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+536,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+537,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+538,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+539,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+540,((((~ (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+541,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+542,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+543,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+544,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+545,((((~ (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+546,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+547,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+548,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+549,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+550,((((~ (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+551,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+552,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+553,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+554,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+555,((((~ (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+556,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+557,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+558,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+559,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+560,((((~ (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+561,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+562,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+563,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+564,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+565,((((~ (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+566,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+567,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+568,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+569,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+570,((((~ (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+571,((1U & (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+572,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+573,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+574,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+575,((((~ (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+576,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+577,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+578,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+579,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+580,((((~ (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+581,((1U & (IData)((0xfffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))))));
        bufp->chgBit(oldp+582,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+583,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+584,((1U & (~ (IData)((0xfffffffff000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x18U)))))));
        bufp->chgBit(oldp+585,((((~ (IData)((0xfffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [4U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+586,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+587,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+588,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+589,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+590,((((~ (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+591,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+592,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+593,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+594,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+595,((((~ (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+596,((1U & (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+597,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+598,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+599,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+600,((((~ (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+601,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+602,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+603,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+604,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+605,((((~ (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+606,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+607,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+608,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+609,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+610,((((~ (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+611,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+612,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+613,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+614,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+615,((((~ (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+616,((1U & (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+617,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+618,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+619,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+620,((((~ (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+621,((1U & (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+622,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+623,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+624,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+625,((((~ (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+626,((1U & (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+627,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+628,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+629,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+630,((((~ (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+631,((1U & (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+632,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+633,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+634,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+635,((((~ (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+636,((1U & (IData)((0x7ffffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))));
        bufp->chgBit(oldp+637,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+638,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+639,((1U & (~ (IData)((0x7ffffffff800000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x17U)))))));
        bufp->chgBit(oldp+640,((((~ (IData)((0x7ffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [5U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+641,((1U & (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+642,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+643,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+644,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+645,((((~ (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+646,((1U & (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+647,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+648,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+649,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+650,((((~ (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+651,((1U & (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+652,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+653,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+654,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+655,((((~ (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+656,((1U & (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+657,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+658,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+659,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+660,((((~ (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x23U) 
                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x))) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+661,((1U & (IData)((0x3ffffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))));
        bufp->chgBit(oldp+662,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+663,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+664,((1U & (~ (IData)((0x3ffffffffc00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))))));
        bufp->chgBit(oldp+665,((((~ (IData)((0x3ffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [6U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+666,((1U & (IData)((0x1ffffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+667,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+668,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+669,((1U & (~ (IData)((0x1ffffffffe00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+670,((((~ (IData)((0x1ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [7U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+671,((1U & (IData)((0xfffffffff00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+672,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+673,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+674,((1U & (~ (IData)((0xfffffffff00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+675,((((~ (IData)((0xfffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [8U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+676,((1U & (IData)((0x7ffffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+677,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+678,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+679,((1U & (~ (IData)((0x7ffffffff80000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+680,((((~ (IData)((0x7ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [9U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+681,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+682,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x1cU)))));
        bufp->chgCData(oldp+683,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                >> 0x1dU)))),3);
        bufp->chgQData(oldp+684,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                  << 0x1eU)),64);
        bufp->chgQData(oldp+686,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+688,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x) 
                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+689,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+690,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+691,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+692,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1eU)))));
        bufp->chgBit(oldp+693,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1eU))))));
        bufp->chgBit(oldp+694,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1eU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1eU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+695,((1U & (IData)((0x3ffffffff00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+696,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+697,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+698,((1U & (~ (IData)((0x3ffffffff00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+699,((((~ (IData)((0x3ffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+700,((1U & (IData)((0x1ffffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+701,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+702,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+703,((1U & (~ (IData)((0x1ffffffff80000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+704,((((~ (IData)((0x1ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+705,((1U & (IData)((0xffffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+706,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+707,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+708,((1U & (~ (IData)((0xffffffffc0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+709,((((~ (IData)((0xffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+710,((1U & (IData)((0x7fffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+711,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+712,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+713,((1U & (~ (IData)((0x7fffffffe0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+714,((((~ (IData)((0x7fffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+715,((1U & (IData)((0x3ffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+716,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+717,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+718,((1U & (~ (IData)((0x3ffffffff0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+719,((((~ (IData)((0x3ffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+720,((1U & (IData)((0x1ffffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+721,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+722,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+723,((1U & (~ (IData)((0x1ffffffff8000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+724,((((~ (IData)((0x1ffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+725,((1U & (IData)((0xffffffffc000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+726,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+727,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+728,((1U & (~ (IData)((0xffffffffc000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+729,((((~ (IData)((0xffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+730,((1U & (IData)((0x7fffffffe000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+731,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+732,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+733,((1U & (~ (IData)((0x7fffffffe000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+734,((((~ (IData)((0x7fffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+735,((1U & (IData)((0x3ffffffff000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+736,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+737,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+738,((1U & (~ (IData)((0x3ffffffff000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+739,((((~ (IData)((0x3ffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+740,((1U & (IData)((0x1ffffffff800ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+741,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+742,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+743,((1U & (~ (IData)((0x1ffffffff800ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+744,((((~ (IData)((0x1ffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+745,((1U & (IData)((0x7fffffffe0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1dU))))));
        bufp->chgBit(oldp+746,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+747,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+748,((1U & (~ (IData)((0x7fffffffe0000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1dU)))))));
        bufp->chgBit(oldp+749,((((~ (IData)((0x7fffffffe0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1dU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffe0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1dU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [1U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+750,((1U & (IData)((0xffffffffc00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))));
        bufp->chgBit(oldp+751,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+752,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+753,((1U & (~ (IData)((0xffffffffc00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))))));
        bufp->chgBit(oldp+754,((((~ (IData)((0xffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+755,((1U & (IData)((0x7fffffffe00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 9U))))));
        bufp->chgBit(oldp+756,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+757,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+758,((1U & (~ (IData)((0x7fffffffe00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 9U)))))));
        bufp->chgBit(oldp+759,((((~ (IData)((0x7fffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+760,((1U & (IData)((0x3ffffffff00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+761,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+762,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+763,((1U & (~ (IData)((0x3ffffffff00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 8U)))))));
        bufp->chgBit(oldp+764,((((~ (IData)((0x3ffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+765,((1U & (IData)((0x1ffffffff80ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+766,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+767,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+768,((1U & (~ (IData)((0x1ffffffff80ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+769,((((~ (IData)((0x1ffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+770,((1U & (IData)((0xffffffffc0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+771,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+772,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+773,((1U & (~ (IData)((0xffffffffc0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+774,((((~ (IData)((0xffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+775,((1U & (IData)((0x7fffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+776,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+777,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+778,((1U & (~ (IData)((0x7fffffffe0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+779,((((~ (IData)((0x7fffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+780,((1U & (IData)((0x3ffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+781,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+782,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+783,((1U & (~ (IData)((0x3ffffffff0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+784,((((~ (IData)((0x3ffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+785,((1U & (IData)((0x1ffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+786,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+787,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+788,((1U & (~ (IData)((0x1ffffffff8ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+789,((((~ (IData)((0x1ffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+790,((1U & (IData)((0xffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+791,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+792,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+793,((1U & (~ (IData)((0xffffffffcULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+794,((((~ (IData)((0xffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+795,((1U & (IData)((0x7fffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+796,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+797,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+798,((1U & (~ (IData)((0x7fffffffeULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+799,((((~ (IData)((0x7fffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+800,((1U & (IData)((0x3ffffffff0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU))))));
        bufp->chgBit(oldp+801,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+802,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+803,((1U & (~ (IData)((0x3ffffffff0000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1cU)))))));
        bufp->chgBit(oldp+804,((((~ (IData)((0x3ffffffff0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1cU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffff0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1cU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [2U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+805,((1U & (IData)((0x3ffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+806,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+807,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+808,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+809,((((~ (IData)((0x3ffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+810,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+811,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+812,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+813,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+814,((((~ (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+815,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+816,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+817,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+818,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+819,((((~ (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+820,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+821,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+822,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+823,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+824,((((~ (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+825,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+826,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+827,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+828,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+829,((((~ (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+830,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+831,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+832,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+833,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+834,((((~ (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+835,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+836,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+837,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+838,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+839,((((~ (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+840,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+841,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+842,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+843,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+844,((((~ (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+845,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+846,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+847,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+848,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+849,((((~ (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+850,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+851,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+852,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+853,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+854,((((~ (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+855,((1U & (IData)((0x1ffffffff8000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU))))));
        bufp->chgBit(oldp+856,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+857,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+858,((1U & (~ (IData)((0x1ffffffff8000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1bU)))))));
        bufp->chgBit(oldp+859,((((~ (IData)((0x1ffffffff8000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1bU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffff8000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1bU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [3U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+860,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+861,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+862,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+863,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+864,((((~ (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+865,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+866,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+867,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+868,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+869,((((~ (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+870,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+871,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+872,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+873,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+874,((((~ (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+875,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+876,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+877,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+878,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+879,((((~ (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+880,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+881,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+882,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+883,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+884,((((~ (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+885,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+886,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+887,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+888,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+889,((((~ (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+890,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+891,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+892,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+893,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+894,((((~ (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+895,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+896,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+897,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+898,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+899,((((~ (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+900,((1U & (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+901,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+902,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+903,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+904,((((~ (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+905,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+906,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+907,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+908,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+909,((((~ (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+910,((1U & (IData)((0xffffffffc000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))))));
        bufp->chgBit(oldp+911,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+912,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+913,((1U & (~ (IData)((0xffffffffc000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1aU)))))));
        bufp->chgBit(oldp+914,((((~ (IData)((0xffffffffc000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffc000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [4U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+915,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+916,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+917,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+918,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+919,((((~ (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+920,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+921,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+922,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+923,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+924,((((~ (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+925,((1U & (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+926,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+927,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+928,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+929,((((~ (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+930,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+931,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+932,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+933,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+934,((((~ (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+935,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+936,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+937,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+938,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+939,((((~ (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+940,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+941,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+942,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+943,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+944,((((~ (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+945,((1U & (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+946,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+947,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+948,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+949,((((~ (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+950,((1U & (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+951,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+952,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+953,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+954,((((~ (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+955,((1U & (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+956,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+957,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+958,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+959,((((~ (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+960,((1U & (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+961,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+962,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+963,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+964,((((~ (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+965,((1U & (IData)((0x7fffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))))));
        bufp->chgBit(oldp+966,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+967,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+968,((1U & (~ (IData)((0x7fffffffe000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x19U)))))));
        bufp->chgBit(oldp+969,((((~ (IData)((0x7fffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [5U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+970,((1U & (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+971,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+972,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+973,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+974,((((~ (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+975,((1U & (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+976,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+977,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+978,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+979,((((~ (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+980,((1U & (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+981,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+982,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+983,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+984,((((~ (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x20U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x20U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+985,((1U & (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+986,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+987,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+988,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+989,((((~ (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x21U) 
                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x))) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0x3fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+990,((1U & (IData)((0x3ffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))))));
        bufp->chgBit(oldp+991,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+992,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+993,((1U & (~ (IData)((0x3ffffffff000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x18U)))))));
        bufp->chgBit(oldp+994,((((~ (IData)((0x3ffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [6U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+995,((1U & (IData)((0x1ffffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))));
        bufp->chgBit(oldp+996,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+997,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+998,((1U & (~ (IData)((0x1ffffffff800000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x17U)))))));
        bufp->chgBit(oldp+999,((((~ (IData)((0x1ffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [7U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1000,((1U & (IData)((0xffffffffc00000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x16U))))));
        bufp->chgBit(oldp+1001,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1002,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1003,((1U & (~ (IData)((0xffffffffc00000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x16U)))))));
        bufp->chgBit(oldp+1004,((((~ (IData)((0xffffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [8U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1005,((1U & (IData)((0x7fffffffe00000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x15U))))));
        bufp->chgBit(oldp+1006,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1007,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1008,((1U & (~ (IData)((0x7fffffffe00000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x15U)))))));
        bufp->chgBit(oldp+1009,((((~ (IData)((0x7fffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [9U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1010,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1011,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x1eU)))));
        bufp->chgIData(oldp+1012,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData),17);
        bufp->chgSData(oldp+1013,((0x3fffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)),14);
        bufp->chgSData(oldp+1014,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut),14);
        bufp->chgBit(oldp+1015,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1016,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1017,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1018,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1019,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1020,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig));
        bufp->chgBit(oldp+1022,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1024,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1025,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1026,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1027,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1028,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1029,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1030,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1031,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1032,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1033,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1034,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1035,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1036,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1037,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1038,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1039,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1041,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1042,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1043,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1044,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1045,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1046,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1047,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1048,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1049,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1050,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1051,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 9U))));
        bufp->chgBit(oldp+1052,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 8U))));
        bufp->chgBit(oldp+1053,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 7U))));
        bufp->chgBit(oldp+1054,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1055,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1056,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1057,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1058,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1059,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 2U))));
        bufp->chgBit(oldp+1060,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 1U))));
        bufp->chgBit(oldp+1061,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)));
        bufp->chgBit(oldp+1062,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                         >> 2U) & (
                                                   (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 1U) 
                                                   | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1064,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)));
        bufp->chgBit(oldp+1065,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 4U))));
        bufp->chgBit(oldp+1066,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 3U))));
        bufp->chgBit(oldp+1067,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1068,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1069,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1070,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1071,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1072,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1073,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1074,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1075,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1076,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 6U))));
        bufp->chgBit(oldp+1077,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 5U))));
        bufp->chgBit(oldp+1078,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1079,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1080,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1081,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1082,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1083,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1084,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1085,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1086,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1087,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1088,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1091,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1092,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1093,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1094,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1095,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1096,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1097,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1098,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1099,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1100,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1101,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1102,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1103,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1104,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1105,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1106,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1107,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1108,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1109,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1110,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1111,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1112,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1113,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1114,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1115,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1116,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1117,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1118,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1119,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1120,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1121,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1124,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1125,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1126,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1127,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1128,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))));
        bufp->chgBit(oldp+1129,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1131,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1132,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1133,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1134,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1136,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1137,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1138,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1139,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1141,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1142,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1143,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1144,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1145,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1146,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1147,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1148,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1149,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1150,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1151,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1152,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1153,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1154,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1158,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1159,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1160,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1161,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1162,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1163,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1165,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1166,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1167,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1168,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1169,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1170,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1171,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1172,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1173,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1174,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1175,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1176,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1177,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1178,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1180,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1181,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1182,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1183,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1184,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1185,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1186,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1187,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1188,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1189,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1190,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1191,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1192,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1193,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1194,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1195,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1196,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1197,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1198,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1199,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1200,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1201,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1202,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1203,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1204,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1205,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1206,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1207,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1208,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1209,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1210,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1211,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1212,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1213,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1214,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1215,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1216,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1217,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1218,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1219,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1220,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1221,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1222,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1223,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1224,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1225,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1226,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1227,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1228,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1229,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1230,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1231,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1232,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1233,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1234,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1235,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1236,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1237,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1238,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1239,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1240,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1241,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1242,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1243,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1244,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1245,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1246,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1247,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1248,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1249,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1250,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1251,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1252,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1253,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1254,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1255,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1257,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1258,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1259,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1260,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1261,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1262,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1263,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1265,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1266,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1267,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1268,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1269,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1270,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1271,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1272,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1273,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1274,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1275,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1276,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1277,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1278,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1279,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1280,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1281,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1282,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1283,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1284,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1285,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1286,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1287,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1288,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1292,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1293,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1294,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1295,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1296,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1297,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1299,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1300,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1301,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1302,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1303,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1304,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1305,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1306,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1307,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1308,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1309,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1310,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1311,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1312,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1313,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1314,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1315,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1316,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1317,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1318,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1319,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1320,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1321,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1322,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1325,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1326,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1327,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1328,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1329,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1330,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1332,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1333,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1334,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1335,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1336,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1337,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1338,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1340,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1341,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1342,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1343,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1344,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1345,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1346,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1347,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1348,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1349,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1350,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1351,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1352,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1353,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1354,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1355,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1357,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1358,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1359,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1360,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1361,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1362,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1363,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1364,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1365,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1366,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1367,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1368,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1369,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1371,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1372,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1373,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1374,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1376,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1377,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1378,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1379,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1380,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1381,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1382,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1383,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1384,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1385,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1386,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1387,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1388,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1389,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1390,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1391,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1392,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1393,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1394,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1395,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1396,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1397,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1398,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1399,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1400,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1401,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1402,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1403,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1404,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1405,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1406,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1407,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1408,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1409,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1410,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1411,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1412,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1413,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1414,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1415,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1416,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1417,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1418,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1419,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1420,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1421,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1422,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1423,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1424,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1425,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1426,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1427,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1428,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1429,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1430,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1431,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1432,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1433,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1434,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1435,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1436,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1437,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1438,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1439,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1440,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1441,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1442,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1443,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1444,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1445,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1446,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1447,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1448,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1449,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1450,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1451,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1452,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1453,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1454,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1455,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1456,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1457,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1458,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1459,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1460,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1461,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1462,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1463,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1464,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1465,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1466,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1467,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1468,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1469,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1470,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1471,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1472,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1473,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1474,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1475,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1476,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1477,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1478,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1479,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1480,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1481,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1482,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1483,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1484,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1485,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1486,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1487,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1488,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1489,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1490,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1492,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1493,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1494,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1495,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1496,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1497,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1498,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1499,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1500,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1501,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1502,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1503,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1504,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1505,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1506,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1507,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1508,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1509,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1510,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1511,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1512,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1513,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1515,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1516,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1517,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1518,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1519,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1520,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1521,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1522,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1523,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1524,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1526,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1527,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1528,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1529,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1530,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1531,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1532,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1533,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1534,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1535,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1536,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1537,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1538,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1539,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1540,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1541,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1542,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1543,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1544,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1545,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1546,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1547,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1548,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1549,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1550,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1551,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1552,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1553,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1554,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1555,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1556,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1557,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1558,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1559,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1560,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1561,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1562,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1563,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1564,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1565,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1566,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1567,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1568,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1569,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1570,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1571,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1572,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1573,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1574,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1575,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1576,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1577,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1578,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1579,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1580,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1581,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1582,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1583,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1584,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1585,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1586,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1587,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1588,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1589,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1590,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1591,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1592,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1593,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1594,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1595,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1596,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1597,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1598,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1599,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1600,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1601,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1602,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1603,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1604,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1605,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1606,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1607,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1608,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1609,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1610,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1611,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1612,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1613,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1614,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1615,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1616,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1617,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1618,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1619,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1620,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1621,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1622,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1623,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1624,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1625,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1626,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1627,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1628,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1629,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1630,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1631,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1632,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1633,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1634,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1635,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1636,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1637,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1638,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1639,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1640,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1641,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1642,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1644,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1645,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1646,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1647,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1648,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1649,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1650,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1651,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1652,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1653,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1654,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1655,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1656,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1657,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1658,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1659,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1660,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1661,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1662,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1663,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1664,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1665,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1666,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1667,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1668,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1669,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1670,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1671,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1672,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1673,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1674,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1675,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1676,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1677,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1678,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1679,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1680,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1681,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1682,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1683,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1684,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1685,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1686,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1687,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1688,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1689,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1690,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1691,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1692,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1693,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1694,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1695,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1696,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1697,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1698,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1699,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1700,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1701,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1702,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1703,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1704,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1705,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1706,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1707,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1708,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1709,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1710,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1711,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1712,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1713,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1714,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1715,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1716,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1717,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1718,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1719,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1720,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1721,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1722,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1723,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1724,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1725,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1726,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1727,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1728,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1729,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1730,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1731,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1732,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1733,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1734,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1735,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1736,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1737,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1738,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1739,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1740,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1741,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1742,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1743,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1744,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1745,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1746,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1747,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1748,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1749,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1750,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1751,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1752,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1753,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1754,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1755,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1756,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1757,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1758,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1759,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1760,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1761,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1762,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1763,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1764,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1765,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1766,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1767,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1768,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1769,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1770,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1771,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1772,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1773,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1774,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1775,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1776,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1777,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1778,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1779,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1780,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1781,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1782,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1783,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1784,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1785,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1786,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1787,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1788,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1789,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1790,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1791,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1793,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1794,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1795,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1796,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1797,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1798,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1799,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1800,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1801,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1802,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1803,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1804,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1805,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1806,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1807,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1809,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1810,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1811,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1812,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1813,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1814,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1815,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1816,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1817,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1818,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1819,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1820,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1821,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1822,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1823,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1824,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1825,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1826,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1827,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1828,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1829,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1830,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1831,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1832,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1833,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1834,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1835,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1836,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1837,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1838,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1839,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1840,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1841,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1842,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1843,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1844,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1845,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1846,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1847,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1848,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1849,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1850,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1851,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1852,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1853,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1854,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1855,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1856,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1857,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1858,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1859,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1860,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1861,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1862,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1863,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1864,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1865,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1866,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1867,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1868,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1869,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1870,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1871,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1872,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1873,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1874,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1875,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1876,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1877,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1878,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1879,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1880,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1881,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1882,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1883,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1884,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1885,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1886,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1887,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1888,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1889,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1890,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1891,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1892,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1893,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1894,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1895,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1896,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1897,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1898,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1899,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1900,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1901,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1902,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1903,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1904,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1905,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1906,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1907,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1908,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1909,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1910,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1911,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1912,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1913,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1914,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1915,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1916,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1917,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1918,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1919,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1920,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1921,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1922,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1923,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1924,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1925,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1926,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1927,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1928,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1929,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1930,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1931,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1932,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+1933,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1934,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+1935,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+1936,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+1937,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+1938,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1939,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+1940,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+1941,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1942,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__B));
        bufp->chgBit(oldp+1943,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1944,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__A));
        bufp->chgBit(oldp+1945,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1946,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1947,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 6U))));
        bufp->chgBit(oldp+1948,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 5U))));
        bufp->chgBit(oldp+1949,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third1__A) 
                                  & (IData)((0U != 
                                             (0x60U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1950,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__B) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__C))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgIData(oldp+1951,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData),17);
        bufp->chgSData(oldp+1952,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut),14);
        bufp->chgBit(oldp+1953,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig) 
                                  & (IData)((0U != 
                                             (0x3000U 
                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1954,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig)) 
                                        & (IData)((0x1000U 
                                                   == 
                                                   (0x3000U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                       | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig)) 
                                           & (IData)(
                                                     (0x2000U 
                                                      == 
                                                      (0x3000U 
                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                          | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig) 
                                             & ((IData)(
                                                        (0U 
                                                         == 
                                                         (0x3000U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
        bufp->chgCData(oldp+1955,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__A) 
                                    << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__B) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__C) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__A) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
        bufp->chgCData(oldp+1956,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__A) 
                                    << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__B) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__C) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third1__A))))),4);
        bufp->chgCData(oldp+1957,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
        bufp->chgCData(oldp+1958,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                    << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
        bufp->chgBit(oldp+1959,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig));
        bufp->chgBit(oldp+1960,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__A));
        bufp->chgBit(oldp+1961,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__B));
        bufp->chgBit(oldp+1962,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1963,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                        >> 0xbU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1964,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 4U))));
        bufp->chgBit(oldp+1965,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 3U))));
        bufp->chgBit(oldp+1966,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 2U))));
        bufp->chgBit(oldp+1967,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                         >> 4U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1968,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__B));
        bufp->chgBit(oldp+1969,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 7U))));
        bufp->chgBit(oldp+1970,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 6U))));
        bufp->chgBit(oldp+1971,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 5U))));
        bufp->chgBit(oldp+1972,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                         >> 7U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1973,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__A));
        bufp->chgBit(oldp+1974,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1975,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 9U))));
        bufp->chgBit(oldp+1976,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 8U))));
        bufp->chgBit(oldp+1977,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                         >> 0xaU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1978,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__C));
        bufp->chgBit(oldp+1979,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1980,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1981,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1982,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                         >> 0xdU) & (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1983,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__B));
        bufp->chgBit(oldp+1984,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1985,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1986,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1987,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                         >> 0x10U) 
                                        & (IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1988,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__A));
        bufp->chgBit(oldp+1989,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 9U))));
        bufp->chgBit(oldp+1990,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 8U))));
        bufp->chgBit(oldp+1991,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 7U))));
        bufp->chgBit(oldp+1992,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                         >> 9U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+1993,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__A));
        bufp->chgBit(oldp+1994,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__B));
        bufp->chgBit(oldp+1995,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1996,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                     | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                        >> 0xaU))) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
        bufp->chgBit(oldp+1997,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 2U))));
        bufp->chgBit(oldp+1998,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 1U))));
        bufp->chgBit(oldp+1999,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))));
        bufp->chgBit(oldp+2000,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                         >> 2U) & (
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+2001,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third1__A));
        bufp->chgBit(oldp+2002,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)));
        bufp->chgBit(oldp+2003,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 4U))));
        bufp->chgBit(oldp+2004,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 3U))));
        bufp->chgBit(oldp+2005,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                        & (IData)((0U 
                                                   != 
                                                   (0x18U 
                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
        bufp->chgBit(oldp+2006,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__C));
        bufp->chgBit(oldp+2007,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 1U))));
        bufp->chgBit(oldp+2008,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__A) 
                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__B) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                        >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    }
}
