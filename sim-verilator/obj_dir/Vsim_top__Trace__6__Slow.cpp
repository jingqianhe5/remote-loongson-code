// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


VL_ATTR_COLD void Vsim_top___024root__trace_full_sub_4(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_full_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+10935,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+10936,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x18U)))));
    bufp->fullCData(oldp+10937,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x19U)))),3);
    bufp->fullQData(oldp+10938,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                 << 0x1aU)),64);
    bufp->fullQData(oldp+10940,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+10942,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+10943,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+10944,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+10945,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+10946,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1aU)))));
    bufp->fullBit(oldp+10947,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU))))));
    bufp->fullBit(oldp+10948,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x1aU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x1aU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+10949,((1U & (IData)((0x3fffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))))));
    bufp->fullBit(oldp+10950,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xaU])));
    bufp->fullBit(oldp+10951,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xaU] >> 1U))));
    bufp->fullBit(oldp+10952,((1U & (~ (IData)((0x3fffffffff0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))))));
    bufp->fullBit(oldp+10953,((((~ (IData)((0x3fffffffff0000ULL 
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
    bufp->fullBit(oldp+10954,((1U & (IData)((0x1fffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))))));
    bufp->fullBit(oldp+10955,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xbU])));
    bufp->fullBit(oldp+10956,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xbU] >> 1U))));
    bufp->fullBit(oldp+10957,((1U & (~ (IData)((0x1fffffffff8000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xfU)))))));
    bufp->fullBit(oldp+10958,((((~ (IData)((0x1fffffffff8000ULL 
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
    bufp->fullBit(oldp+10959,((1U & (IData)((0xfffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))))));
    bufp->fullBit(oldp+10960,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xcU])));
    bufp->fullBit(oldp+10961,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xcU] >> 1U))));
    bufp->fullBit(oldp+10962,((1U & (~ (IData)((0xfffffffffc000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xeU)))))));
    bufp->fullBit(oldp+10963,((((~ (IData)((0xfffffffffc000ULL 
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
    bufp->fullBit(oldp+10964,((1U & (IData)((0x7ffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))))));
    bufp->fullBit(oldp+10965,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xdU])));
    bufp->fullBit(oldp+10966,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xdU] >> 1U))));
    bufp->fullBit(oldp+10967,((1U & (~ (IData)((0x7ffffffffe000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xdU)))))));
    bufp->fullBit(oldp+10968,((((~ (IData)((0x7ffffffffe000ULL 
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
    bufp->fullBit(oldp+10969,((1U & (IData)((0x3fffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))))));
    bufp->fullBit(oldp+10970,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xeU])));
    bufp->fullBit(oldp+10971,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xeU] >> 1U))));
    bufp->fullBit(oldp+10972,((1U & (~ (IData)((0x3fffffffff000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xcU)))))));
    bufp->fullBit(oldp+10973,((((~ (IData)((0x3fffffffff000ULL 
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
    bufp->fullBit(oldp+10974,((1U & (IData)((0x1fffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))))));
    bufp->fullBit(oldp+10975,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0xfU])));
    bufp->fullBit(oldp+10976,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0xfU] >> 1U))));
    bufp->fullBit(oldp+10977,((1U & (~ (IData)((0x1fffffffff800ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xbU)))))));
    bufp->fullBit(oldp+10978,((((~ (IData)((0x1fffffffff800ULL 
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
    bufp->fullBit(oldp+10979,((1U & (IData)((0xfffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))))));
    bufp->fullBit(oldp+10980,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x10U])));
    bufp->fullBit(oldp+10981,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x10U] >> 1U))));
    bufp->fullBit(oldp+10982,((1U & (~ (IData)((0xfffffffffc00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xaU)))))));
    bufp->fullBit(oldp+10983,((((~ (IData)((0xfffffffffc00ULL 
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
    bufp->fullBit(oldp+10984,((1U & (IData)((0x7ffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))))));
    bufp->fullBit(oldp+10985,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x11U])));
    bufp->fullBit(oldp+10986,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x11U] >> 1U))));
    bufp->fullBit(oldp+10987,((1U & (~ (IData)((0x7ffffffffe00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 9U)))))));
    bufp->fullBit(oldp+10988,((((~ (IData)((0x7ffffffffe00ULL 
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
    bufp->fullBit(oldp+10989,((1U & (IData)((0x3fffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))))));
    bufp->fullBit(oldp+10990,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+10991,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+10992,((1U & (~ (IData)((0x3fffffffff00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 8U)))))));
    bufp->fullBit(oldp+10993,((((~ (IData)((0x3fffffffff00ULL 
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
    bufp->fullBit(oldp+10994,((1U & (IData)((0x1fffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))))));
    bufp->fullBit(oldp+10995,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+10996,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+10997,((1U & (~ (IData)((0x1fffffffff80ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 7U)))))));
    bufp->fullBit(oldp+10998,((((~ (IData)((0x1fffffffff80ULL 
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
    bufp->fullBit(oldp+10999,((1U & (IData)((0x7ffffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U))))));
    bufp->fullBit(oldp+11000,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+11001,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+11002,((1U & (~ (IData)((0x7ffffffffe000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x19U)))))));
    bufp->fullBit(oldp+11003,((((~ (IData)((0x7ffffffffe000000ULL 
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
    bufp->fullBit(oldp+11004,((1U & (IData)((0xfffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))))));
    bufp->fullBit(oldp+11005,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+11006,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+11007,((1U & (~ (IData)((0xfffffffffc0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 6U)))))));
    bufp->fullBit(oldp+11008,((((~ (IData)((0xfffffffffc0ULL 
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
    bufp->fullBit(oldp+11009,((1U & (IData)((0x7ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))))));
    bufp->fullBit(oldp+11010,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+11011,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+11012,((1U & (~ (IData)((0x7ffffffffe0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 5U)))))));
    bufp->fullBit(oldp+11013,((((~ (IData)((0x7ffffffffe0ULL 
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
    bufp->fullBit(oldp+11014,((1U & (IData)((0x3fffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))))));
    bufp->fullBit(oldp+11015,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+11016,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+11017,((1U & (~ (IData)((0x3fffffffff0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 4U)))))));
    bufp->fullBit(oldp+11018,((((~ (IData)((0x3fffffffff0ULL 
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
    bufp->fullBit(oldp+11019,((1U & (IData)((0x1fffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))))));
    bufp->fullBit(oldp+11020,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+11021,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+11022,((1U & (~ (IData)((0x1fffffffff8ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 3U)))))));
    bufp->fullBit(oldp+11023,((((~ (IData)((0x1fffffffff8ULL 
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
    bufp->fullBit(oldp+11024,((1U & (IData)((0xfffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
    bufp->fullBit(oldp+11025,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+11026,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+11027,((1U & (~ (IData)((0xfffffffffcULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 2U)))))));
    bufp->fullBit(oldp+11028,((((~ (IData)((0xfffffffffcULL 
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
    bufp->fullBit(oldp+11029,((1U & (IData)((0x7ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
    bufp->fullBit(oldp+11030,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+11031,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+11032,((1U & (~ (IData)((0x7ffffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
    bufp->fullBit(oldp+11033,((((~ (IData)((0x7ffffffffeULL 
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
    bufp->fullBit(oldp+11034,((1U & (IData)((0x3fffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+11035,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+11036,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+11037,((1U & (~ (IData)((0x3fffffffffULL 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+11038,((((~ (IData)((0x3fffffffffULL 
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
    bufp->fullBit(oldp+11039,((1U & (IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
    bufp->fullBit(oldp+11040,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+11041,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+11042,((1U & (~ (IData)((0x1fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+11043,((((~ (IData)((0x1fffffffffULL 
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
    bufp->fullBit(oldp+11044,((1U & (IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
    bufp->fullBit(oldp+11045,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+11046,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+11047,((1U & (~ (IData)((0xfffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+11048,((((~ (IData)((0xfffffffffULL 
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
    bufp->fullBit(oldp+11049,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
    bufp->fullBit(oldp+11050,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+11051,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+11052,((1U & (~ (IData)((0x7ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+11053,((((~ (IData)((0x7ffffffffULL 
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
    bufp->fullBit(oldp+11054,((1U & (IData)((0x3fffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))))));
    bufp->fullBit(oldp+11055,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+11056,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+11057,((1U & (~ (IData)((0x3fffffffff000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x18U)))))));
    bufp->fullBit(oldp+11058,((((~ (IData)((0x3fffffffff000000ULL 
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
    bufp->fullBit(oldp+11059,((1U & (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
    bufp->fullBit(oldp+11060,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+11061,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+11062,((1U & (~ (IData)((0x3ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+11063,((((~ (IData)((0x3ffffffffULL 
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
    bufp->fullBit(oldp+11064,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
    bufp->fullBit(oldp+11065,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+11066,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+11067,((1U & (~ (IData)((0x1ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+11068,((((~ (IData)((0x1ffffffffULL 
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
    bufp->fullBit(oldp+11069,((1U & (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+11070,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+11071,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+11072,((1U & (~ (IData)((0xffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+11073,((((~ (IData)((0xffffffffULL 
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
    bufp->fullBit(oldp+11074,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+11075,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+11076,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+11077,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+11078,((((~ (IData)((0x7fffffffULL 
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
    bufp->fullBit(oldp+11079,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+11080,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+11081,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+11082,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+11083,((((~ (IData)((0x3fffffffULL 
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
    bufp->fullBit(oldp+11084,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+11085,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+11086,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+11087,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+11088,((((~ (IData)((0x1fffffffULL 
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
    bufp->fullBit(oldp+11089,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+11090,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+11091,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+11092,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+11093,((((~ (IData)((0xfffffffULL 
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
    bufp->fullBit(oldp+11094,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+11095,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+11096,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+11097,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+11098,((((~ (IData)((0x7ffffffULL 
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
    bufp->fullBit(oldp+11099,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+11100,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+11101,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+11102,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+11103,((((~ (IData)((0x3ffffffULL 
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
    bufp->fullBit(oldp+11104,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+11105,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+11106,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+11107,((1U & (~ (IData)((0x1ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+11108,((((~ (IData)((0x1ffffffULL 
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
    bufp->fullBit(oldp+11109,((1U & (IData)((0x1fffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))))));
    bufp->fullBit(oldp+11110,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+11111,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+11112,((1U & (~ (IData)((0x1fffffffff800000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x17U)))))));
    bufp->fullBit(oldp+11113,((((~ (IData)((0x1fffffffff800000ULL 
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
    bufp->fullBit(oldp+11114,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+11115,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+11116,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+11117,((1U & (~ (IData)((0xffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+11118,((((~ (IData)((0xffffffULL 
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
    bufp->fullBit(oldp+11119,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+11120,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+11121,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+11122,((1U & (~ (IData)((0x7fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+11123,((((~ (IData)((0x7fffffULL 
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
    bufp->fullBit(oldp+11124,((1U & (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+11125,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+11126,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+11127,((1U & (~ (IData)((0x3fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+11128,((((~ (IData)((0x3fffffULL 
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
    bufp->fullBit(oldp+11129,((1U & (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+11130,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+11131,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+11132,((1U & (~ (IData)((0x1fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+11133,((((~ (IData)((0x1fffffULL 
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
    bufp->fullBit(oldp+11134,((1U & (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+11135,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+11136,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+11137,((1U & (~ (IData)((0xfffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+11138,((((~ (IData)((0xfffffULL 
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
    bufp->fullBit(oldp+11139,((1U & (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+11140,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+11141,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+11142,((1U & (~ (IData)((0x7ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+11143,((((~ (IData)((0x7ffffULL 
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
    bufp->fullBit(oldp+11144,((1U & (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+11145,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+11146,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+11147,((1U & (~ (IData)((0x3ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+11148,((((~ (IData)((0x3ffffULL 
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
    bufp->fullBit(oldp+11149,((1U & (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+11150,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+11151,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+11152,((1U & (~ (IData)((0x1ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+11153,((((~ (IData)((0x1ffffULL 
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
    bufp->fullBit(oldp+11154,((1U & (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+11155,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+11156,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+11157,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+11158,((((~ (IData)((0xffffULL 
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
    bufp->fullBit(oldp+11159,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+11160,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+11161,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x31U] >> 1U))));
    bufp->fullBit(oldp+11162,((1U & (~ (IData)((0x7fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+11163,((((~ (IData)((0x7fffULL 
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
    bufp->fullBit(oldp+11164,((1U & (IData)((0xfffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))))));
    bufp->fullBit(oldp+11165,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [4U])));
    bufp->fullBit(oldp+11166,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [4U] >> 1U))));
    bufp->fullBit(oldp+11167,((1U & (~ (IData)((0xfffffffffc00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x16U)))))));
    bufp->fullBit(oldp+11168,((((~ (IData)((0xfffffffffc00000ULL 
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
    bufp->fullBit(oldp+11169,((1U & (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+11170,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x32U])));
    bufp->fullBit(oldp+11171,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x32U] >> 1U))));
    bufp->fullBit(oldp+11172,((1U & (~ (IData)((0x3fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+11173,((((~ (IData)((0x3fffULL 
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
    bufp->fullBit(oldp+11174,((1U & (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+11175,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x33U])));
    bufp->fullBit(oldp+11176,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x33U] >> 1U))));
    bufp->fullBit(oldp+11177,((1U & (~ (IData)((0x1fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+11178,((((~ (IData)((0x1fffULL 
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
    bufp->fullBit(oldp+11179,((1U & (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+11180,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x34U])));
    bufp->fullBit(oldp+11181,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x34U] >> 1U))));
    bufp->fullBit(oldp+11182,((1U & (~ (IData)((0xfffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+11183,((((~ (IData)((0xfffULL 
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
    bufp->fullBit(oldp+11184,((1U & (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+11185,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x35U])));
    bufp->fullBit(oldp+11186,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x35U] >> 1U))));
    bufp->fullBit(oldp+11187,((1U & (~ (IData)((0x7ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+11188,((((~ (IData)((0x7ffULL 
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
    bufp->fullBit(oldp+11189,((1U & (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+11190,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x36U])));
    bufp->fullBit(oldp+11191,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x36U] >> 1U))));
    bufp->fullBit(oldp+11192,((1U & (~ (IData)((0x3ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+11193,((((~ (IData)((0x3ffULL 
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
    bufp->fullBit(oldp+11194,((1U & (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
    bufp->fullBit(oldp+11195,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x37U])));
    bufp->fullBit(oldp+11196,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x37U] >> 1U))));
    bufp->fullBit(oldp+11197,((1U & (~ (IData)((0x1ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+11198,((((~ (IData)((0x1ffULL 
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
    bufp->fullBit(oldp+11199,((1U & (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
    bufp->fullBit(oldp+11200,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x38U])));
    bufp->fullBit(oldp+11201,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x38U] >> 1U))));
    bufp->fullBit(oldp+11202,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+11203,((((~ (IData)((0xffULL 
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
    bufp->fullBit(oldp+11204,((1U & (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))))));
    bufp->fullBit(oldp+11205,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x39U])));
    bufp->fullBit(oldp+11206,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x39U] >> 1U))));
    bufp->fullBit(oldp+11207,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+11208,((((~ (IData)((0x7fULL 
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
    bufp->fullBit(oldp+11209,((1U & (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))))));
    bufp->fullBit(oldp+11210,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x3aU])));
    bufp->fullBit(oldp+11211,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x3aU] >> 1U))));
    bufp->fullBit(oldp+11212,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+11213,((((~ (IData)((0x3fULL 
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
    bufp->fullBit(oldp+11214,((1U & (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))))));
    bufp->fullBit(oldp+11215,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x3bU])));
    bufp->fullBit(oldp+11216,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x3bU] >> 1U))));
    bufp->fullBit(oldp+11217,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+11218,((((~ (IData)((0x1fULL 
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
    bufp->fullBit(oldp+11219,((1U & (IData)((0x7ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))))));
    bufp->fullBit(oldp+11220,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [5U])));
    bufp->fullBit(oldp+11221,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [5U] >> 1U))));
    bufp->fullBit(oldp+11222,((1U & (~ (IData)((0x7ffffffffe00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x15U)))))));
    bufp->fullBit(oldp+11223,((((~ (IData)((0x7ffffffffe00000ULL 
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
    bufp->fullBit(oldp+11224,((1U & (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))))));
    bufp->fullBit(oldp+11225,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x3cU])));
    bufp->fullBit(oldp+11226,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x3cU] >> 1U))));
    bufp->fullBit(oldp+11227,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+11228,((((~ (IData)((0xfULL 
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
    bufp->fullBit(oldp+11229,((1U & (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U))))));
    bufp->fullBit(oldp+11230,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x3dU])));
    bufp->fullBit(oldp+11231,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x3dU] >> 1U))));
    bufp->fullBit(oldp+11232,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+11233,((((~ (IData)((7ULL & 
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
    bufp->fullBit(oldp+11234,((1U & (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U))))));
    bufp->fullBit(oldp+11235,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x3eU])));
    bufp->fullBit(oldp+11236,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x3eU] >> 1U))));
    bufp->fullBit(oldp+11237,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+11238,((((~ (IData)((3ULL & 
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
    bufp->fullBit(oldp+11239,((1U & (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U))))));
    bufp->fullBit(oldp+11240,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [0x3fU])));
    bufp->fullBit(oldp+11241,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [0x3fU] >> 1U))));
    bufp->fullBit(oldp+11242,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+11243,((((~ (IData)((1ULL & 
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
    bufp->fullBit(oldp+11244,((1U & (IData)((0x3fffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))))));
    bufp->fullBit(oldp+11245,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [6U])));
    bufp->fullBit(oldp+11246,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [6U] >> 1U))));
    bufp->fullBit(oldp+11247,((1U & (~ (IData)((0x3fffffffff00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x14U)))))));
    bufp->fullBit(oldp+11248,((((~ (IData)((0x3fffffffff00000ULL 
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
    bufp->fullBit(oldp+11249,((1U & (IData)((0x1fffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))))));
    bufp->fullBit(oldp+11250,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [7U])));
    bufp->fullBit(oldp+11251,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [7U] >> 1U))));
    bufp->fullBit(oldp+11252,((1U & (~ (IData)((0x1fffffffff80000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x13U)))))));
    bufp->fullBit(oldp+11253,((((~ (IData)((0x1fffffffff80000ULL 
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
    bufp->fullBit(oldp+11254,((1U & (IData)((0xfffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))))));
    bufp->fullBit(oldp+11255,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [8U])));
    bufp->fullBit(oldp+11256,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [8U] >> 1U))));
    bufp->fullBit(oldp+11257,((1U & (~ (IData)((0xfffffffffc0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))))));
    bufp->fullBit(oldp+11258,((((~ (IData)((0xfffffffffc0000ULL 
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
    bufp->fullBit(oldp+11259,((1U & (IData)((0x7ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))))));
    bufp->fullBit(oldp+11260,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                               [9U])));
    bufp->fullBit(oldp+11261,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                     [9U] >> 1U))));
    bufp->fullBit(oldp+11262,((1U & (~ (IData)((0x7ffffffffe0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x11U)))))));
    bufp->fullBit(oldp+11263,((((~ (IData)((0x7ffffffffe0000ULL 
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
    bufp->fullBit(oldp+11264,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+11265,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x1aU)))));
    bufp->fullCData(oldp+11266,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x1bU)))),3);
    bufp->fullQData(oldp+11267,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                 << 0x1cU)),64);
    bufp->fullQData(oldp+11269,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+11271,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+11272,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+11273,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+11274,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+11275,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1cU)))));
    bufp->fullBit(oldp+11276,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1cU))))));
    bufp->fullBit(oldp+11277,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x1cU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x1cU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+11278,((1U & (IData)((0x3ffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))))));
    bufp->fullBit(oldp+11279,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0xaU])));
    bufp->fullBit(oldp+11280,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0xaU] >> 1U))));
    bufp->fullBit(oldp+11281,((1U & (~ (IData)((0x3ffffffffc0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))))));
    bufp->fullBit(oldp+11282,((((~ (IData)((0x3ffffffffc0000ULL 
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
    bufp->fullBit(oldp+11283,((1U & (IData)((0x1ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))))));
    bufp->fullBit(oldp+11284,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0xbU])));
    bufp->fullBit(oldp+11285,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0xbU] >> 1U))));
    bufp->fullBit(oldp+11286,((1U & (~ (IData)((0x1ffffffffe0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x11U)))))));
    bufp->fullBit(oldp+11287,((((~ (IData)((0x1ffffffffe0000ULL 
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
    bufp->fullBit(oldp+11288,((1U & (IData)((0xfffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))))));
    bufp->fullBit(oldp+11289,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0xcU])));
    bufp->fullBit(oldp+11290,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0xcU] >> 1U))));
    bufp->fullBit(oldp+11291,((1U & (~ (IData)((0xfffffffff0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))))));
    bufp->fullBit(oldp+11292,((((~ (IData)((0xfffffffff0000ULL 
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
    bufp->fullBit(oldp+11293,((1U & (IData)((0x7ffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))))));
    bufp->fullBit(oldp+11294,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0xdU])));
    bufp->fullBit(oldp+11295,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0xdU] >> 1U))));
    bufp->fullBit(oldp+11296,((1U & (~ (IData)((0x7ffffffff8000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xfU)))))));
    bufp->fullBit(oldp+11297,((((~ (IData)((0x7ffffffff8000ULL 
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
    bufp->fullBit(oldp+11298,((1U & (IData)((0x3ffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))))));
    bufp->fullBit(oldp+11299,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0xeU])));
    bufp->fullBit(oldp+11300,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0xeU] >> 1U))));
    bufp->fullBit(oldp+11301,((1U & (~ (IData)((0x3ffffffffc000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xeU)))))));
    bufp->fullBit(oldp+11302,((((~ (IData)((0x3ffffffffc000ULL 
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
    bufp->fullBit(oldp+11303,((1U & (IData)((0x1ffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))))));
    bufp->fullBit(oldp+11304,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0xfU])));
    bufp->fullBit(oldp+11305,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0xfU] >> 1U))));
    bufp->fullBit(oldp+11306,((1U & (~ (IData)((0x1ffffffffe000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xdU)))))));
    bufp->fullBit(oldp+11307,((((~ (IData)((0x1ffffffffe000ULL 
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
    bufp->fullBit(oldp+11308,((1U & (IData)((0xfffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))))));
    bufp->fullBit(oldp+11309,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x10U])));
    bufp->fullBit(oldp+11310,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x10U] >> 1U))));
    bufp->fullBit(oldp+11311,((1U & (~ (IData)((0xfffffffff000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xcU)))))));
    bufp->fullBit(oldp+11312,((((~ (IData)((0xfffffffff000ULL 
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
    bufp->fullBit(oldp+11313,((1U & (IData)((0x7ffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))))));
    bufp->fullBit(oldp+11314,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x11U])));
    bufp->fullBit(oldp+11315,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x11U] >> 1U))));
    bufp->fullBit(oldp+11316,((1U & (~ (IData)((0x7ffffffff800ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xbU)))))));
    bufp->fullBit(oldp+11317,((((~ (IData)((0x7ffffffff800ULL 
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
    bufp->fullBit(oldp+11318,((1U & (IData)((0x3ffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))))));
    bufp->fullBit(oldp+11319,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+11320,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+11321,((1U & (~ (IData)((0x3ffffffffc00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xaU)))))));
    bufp->fullBit(oldp+11322,((((~ (IData)((0x3ffffffffc00ULL 
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
    bufp->fullBit(oldp+11323,((1U & (IData)((0x1ffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))))));
    bufp->fullBit(oldp+11324,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+11325,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+11326,((1U & (~ (IData)((0x1ffffffffe00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 9U)))))));
    bufp->fullBit(oldp+11327,((((~ (IData)((0x1ffffffffe00ULL 
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
    bufp->fullBit(oldp+11328,((1U & (IData)((0x7ffffffff8000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1bU))))));
    bufp->fullBit(oldp+11329,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+11330,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+11331,((1U & (~ (IData)((0x7ffffffff8000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1bU)))))));
    bufp->fullBit(oldp+11332,((((~ (IData)((0x7ffffffff8000000ULL 
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
    bufp->fullBit(oldp+11333,((1U & (IData)((0xfffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))))));
    bufp->fullBit(oldp+11334,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+11335,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+11336,((1U & (~ (IData)((0xfffffffff00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 8U)))))));
    bufp->fullBit(oldp+11337,((((~ (IData)((0xfffffffff00ULL 
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
    bufp->fullBit(oldp+11338,((1U & (IData)((0x7ffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))))));
    bufp->fullBit(oldp+11339,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+11340,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+11341,((1U & (~ (IData)((0x7ffffffff80ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 7U)))))));
    bufp->fullBit(oldp+11342,((((~ (IData)((0x7ffffffff80ULL 
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
    bufp->fullBit(oldp+11343,((1U & (IData)((0x3ffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))))));
    bufp->fullBit(oldp+11344,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+11345,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+11346,((1U & (~ (IData)((0x3ffffffffc0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 6U)))))));
    bufp->fullBit(oldp+11347,((((~ (IData)((0x3ffffffffc0ULL 
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
    bufp->fullBit(oldp+11348,((1U & (IData)((0x1ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))))));
    bufp->fullBit(oldp+11349,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+11350,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+11351,((1U & (~ (IData)((0x1ffffffffe0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 5U)))))));
    bufp->fullBit(oldp+11352,((((~ (IData)((0x1ffffffffe0ULL 
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
    bufp->fullBit(oldp+11353,((1U & (IData)((0xfffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))))));
    bufp->fullBit(oldp+11354,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+11355,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+11356,((1U & (~ (IData)((0xfffffffff0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 4U)))))));
    bufp->fullBit(oldp+11357,((((~ (IData)((0xfffffffff0ULL 
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
    bufp->fullBit(oldp+11358,((1U & (IData)((0x7ffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))))));
    bufp->fullBit(oldp+11359,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+11360,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+11361,((1U & (~ (IData)((0x7ffffffff8ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 3U)))))));
    bufp->fullBit(oldp+11362,((((~ (IData)((0x7ffffffff8ULL 
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
    bufp->fullBit(oldp+11363,((1U & (IData)((0x3ffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
    bufp->fullBit(oldp+11364,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+11365,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+11366,((1U & (~ (IData)((0x3ffffffffcULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 2U)))))));
    bufp->fullBit(oldp+11367,((((~ (IData)((0x3ffffffffcULL 
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
    bufp->fullBit(oldp+11368,((1U & (IData)((0x1ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
    bufp->fullBit(oldp+11369,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+11370,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+11371,((1U & (~ (IData)((0x1ffffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
    bufp->fullBit(oldp+11372,((((~ (IData)((0x1ffffffffeULL 
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
    bufp->fullBit(oldp+11373,((1U & (IData)((0xfffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+11374,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+11375,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+11376,((1U & (~ (IData)((0xfffffffffULL 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+11377,((((~ (IData)((0xfffffffffULL 
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
    bufp->fullBit(oldp+11378,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
    bufp->fullBit(oldp+11379,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+11380,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+11381,((1U & (~ (IData)((0x7ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+11382,((((~ (IData)((0x7ffffffffULL 
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
    bufp->fullBit(oldp+11383,((1U & (IData)((0x3ffffffffc000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU))))));
    bufp->fullBit(oldp+11384,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+11385,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+11386,((1U & (~ (IData)((0x3ffffffffc000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1aU)))))));
    bufp->fullBit(oldp+11387,((((~ (IData)((0x3ffffffffc000000ULL 
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
    bufp->fullBit(oldp+11388,((1U & (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
    bufp->fullBit(oldp+11389,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+11390,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+11391,((1U & (~ (IData)((0x3ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+11392,((((~ (IData)((0x3ffffffffULL 
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
    bufp->fullBit(oldp+11393,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
    bufp->fullBit(oldp+11394,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+11395,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+11396,((1U & (~ (IData)((0x1ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+11397,((((~ (IData)((0x1ffffffffULL 
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
    bufp->fullBit(oldp+11398,((1U & (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
    bufp->fullBit(oldp+11399,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+11400,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+11401,((1U & (~ (IData)((0xffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+11402,((((~ (IData)((0xffffffffULL 
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
    bufp->fullBit(oldp+11403,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
    bufp->fullBit(oldp+11404,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+11405,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+11406,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+11407,((((~ (IData)((0x7fffffffULL 
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
    bufp->fullBit(oldp+11408,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+11409,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+11410,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+11411,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+11412,((((~ (IData)((0x3fffffffULL 
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
    bufp->fullBit(oldp+11413,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+11414,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+11415,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+11416,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+11417,((((~ (IData)((0x1fffffffULL 
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
    bufp->fullBit(oldp+11418,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+11419,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+11420,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+11421,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+11422,((((~ (IData)((0xfffffffULL 
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
    bufp->fullBit(oldp+11423,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+11424,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+11425,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+11426,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+11427,((((~ (IData)((0x7ffffffULL 
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
    bufp->fullBit(oldp+11428,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+11429,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+11430,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+11431,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+11432,((((~ (IData)((0x3ffffffULL 
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
    bufp->fullBit(oldp+11433,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+11434,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+11435,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+11436,((1U & (~ (IData)((0x1ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+11437,((((~ (IData)((0x1ffffffULL 
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
    bufp->fullBit(oldp+11438,((1U & (IData)((0x1ffffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U))))));
    bufp->fullBit(oldp+11439,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+11440,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+11441,((1U & (~ (IData)((0x1ffffffffe000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x19U)))))));
    bufp->fullBit(oldp+11442,((((~ (IData)((0x1ffffffffe000000ULL 
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
    bufp->fullBit(oldp+11443,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+11444,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+11445,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+11446,((1U & (~ (IData)((0xffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+11447,((((~ (IData)((0xffffffULL 
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
    bufp->fullBit(oldp+11448,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+11449,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+11450,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+11451,((1U & (~ (IData)((0x7fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+11452,((((~ (IData)((0x7fffffULL 
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
    bufp->fullBit(oldp+11453,((1U & (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+11454,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+11455,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+11456,((1U & (~ (IData)((0x3fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+11457,((((~ (IData)((0x3fffffULL 
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
    bufp->fullBit(oldp+11458,((1U & (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+11459,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+11460,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+11461,((1U & (~ (IData)((0x1fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+11462,((((~ (IData)((0x1fffffULL 
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
    bufp->fullBit(oldp+11463,((1U & (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+11464,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+11465,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+11466,((1U & (~ (IData)((0xfffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+11467,((((~ (IData)((0xfffffULL 
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
    bufp->fullBit(oldp+11468,((1U & (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+11469,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+11470,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+11471,((1U & (~ (IData)((0x7ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+11472,((((~ (IData)((0x7ffffULL 
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
    bufp->fullBit(oldp+11473,((1U & (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+11474,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+11475,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+11476,((1U & (~ (IData)((0x3ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+11477,((((~ (IData)((0x3ffffULL 
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
    bufp->fullBit(oldp+11478,((1U & (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+11479,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+11480,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+11481,((1U & (~ (IData)((0x1ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+11482,((((~ (IData)((0x1ffffULL 
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
    bufp->fullBit(oldp+11483,((1U & (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+11484,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+11485,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+11486,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+11487,((((~ (IData)((0xffffULL 
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
    bufp->fullBit(oldp+11488,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+11489,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+11490,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x31U] >> 1U))));
    bufp->fullBit(oldp+11491,((1U & (~ (IData)((0x7fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+11492,((((~ (IData)((0x7fffULL 
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
    bufp->fullBit(oldp+11493,((1U & (IData)((0xfffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))))));
    bufp->fullBit(oldp+11494,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [4U])));
    bufp->fullBit(oldp+11495,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [4U] >> 1U))));
    bufp->fullBit(oldp+11496,((1U & (~ (IData)((0xfffffffff000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x18U)))))));
    bufp->fullBit(oldp+11497,((((~ (IData)((0xfffffffff000000ULL 
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
    bufp->fullBit(oldp+11498,((1U & (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+11499,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x32U])));
    bufp->fullBit(oldp+11500,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x32U] >> 1U))));
    bufp->fullBit(oldp+11501,((1U & (~ (IData)((0x3fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+11502,((((~ (IData)((0x3fffULL 
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
    bufp->fullBit(oldp+11503,((1U & (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+11504,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x33U])));
    bufp->fullBit(oldp+11505,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x33U] >> 1U))));
    bufp->fullBit(oldp+11506,((1U & (~ (IData)((0x1fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+11507,((((~ (IData)((0x1fffULL 
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
    bufp->fullBit(oldp+11508,((1U & (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+11509,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x34U])));
    bufp->fullBit(oldp+11510,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x34U] >> 1U))));
    bufp->fullBit(oldp+11511,((1U & (~ (IData)((0xfffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+11512,((((~ (IData)((0xfffULL 
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
    bufp->fullBit(oldp+11513,((1U & (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+11514,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x35U])));
    bufp->fullBit(oldp+11515,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x35U] >> 1U))));
    bufp->fullBit(oldp+11516,((1U & (~ (IData)((0x7ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+11517,((((~ (IData)((0x7ffULL 
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
    bufp->fullBit(oldp+11518,((1U & (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+11519,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x36U])));
    bufp->fullBit(oldp+11520,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x36U] >> 1U))));
    bufp->fullBit(oldp+11521,((1U & (~ (IData)((0x3ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+11522,((((~ (IData)((0x3ffULL 
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
    bufp->fullBit(oldp+11523,((1U & (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+11524,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x37U])));
    bufp->fullBit(oldp+11525,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x37U] >> 1U))));
    bufp->fullBit(oldp+11526,((1U & (~ (IData)((0x1ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+11527,((((~ (IData)((0x1ffULL 
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
    bufp->fullBit(oldp+11528,((1U & (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+11529,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x38U])));
    bufp->fullBit(oldp+11530,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x38U] >> 1U))));
    bufp->fullBit(oldp+11531,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+11532,((((~ (IData)((0xffULL 
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
    bufp->fullBit(oldp+11533,((1U & (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
    bufp->fullBit(oldp+11534,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x39U])));
    bufp->fullBit(oldp+11535,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x39U] >> 1U))));
    bufp->fullBit(oldp+11536,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+11537,((((~ (IData)((0x7fULL 
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
    bufp->fullBit(oldp+11538,((1U & (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
    bufp->fullBit(oldp+11539,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x3aU])));
    bufp->fullBit(oldp+11540,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x3aU] >> 1U))));
    bufp->fullBit(oldp+11541,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+11542,((((~ (IData)((0x3fULL 
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
    bufp->fullBit(oldp+11543,((1U & (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))))));
    bufp->fullBit(oldp+11544,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x3bU])));
    bufp->fullBit(oldp+11545,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x3bU] >> 1U))));
    bufp->fullBit(oldp+11546,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+11547,((((~ (IData)((0x1fULL 
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
    bufp->fullBit(oldp+11548,((1U & (IData)((0x7ffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))))));
    bufp->fullBit(oldp+11549,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [5U])));
    bufp->fullBit(oldp+11550,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [5U] >> 1U))));
    bufp->fullBit(oldp+11551,((1U & (~ (IData)((0x7ffffffff800000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x17U)))))));
    bufp->fullBit(oldp+11552,((((~ (IData)((0x7ffffffff800000ULL 
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
    bufp->fullBit(oldp+11553,((1U & (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))))));
    bufp->fullBit(oldp+11554,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x3cU])));
    bufp->fullBit(oldp+11555,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x3cU] >> 1U))));
    bufp->fullBit(oldp+11556,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+11557,((((~ (IData)((0xfULL 
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
    bufp->fullBit(oldp+11558,((1U & (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U))))));
    bufp->fullBit(oldp+11559,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x3dU])));
    bufp->fullBit(oldp+11560,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x3dU] >> 1U))));
    bufp->fullBit(oldp+11561,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+11562,((((~ (IData)((7ULL & 
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
    bufp->fullBit(oldp+11563,((1U & (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U))))));
    bufp->fullBit(oldp+11564,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x3eU])));
    bufp->fullBit(oldp+11565,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x3eU] >> 1U))));
    bufp->fullBit(oldp+11566,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+11567,((((~ (IData)((3ULL & 
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
    bufp->fullBit(oldp+11568,((1U & (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U))))));
    bufp->fullBit(oldp+11569,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [0x3fU])));
    bufp->fullBit(oldp+11570,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [0x3fU] >> 1U))));
    bufp->fullBit(oldp+11571,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+11572,((((~ (IData)((1ULL & 
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
    bufp->fullBit(oldp+11573,((1U & (IData)((0x3ffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))))));
    bufp->fullBit(oldp+11574,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [6U])));
    bufp->fullBit(oldp+11575,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [6U] >> 1U))));
    bufp->fullBit(oldp+11576,((1U & (~ (IData)((0x3ffffffffc00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x16U)))))));
    bufp->fullBit(oldp+11577,((((~ (IData)((0x3ffffffffc00000ULL 
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
    bufp->fullBit(oldp+11578,((1U & (IData)((0x1ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))))));
    bufp->fullBit(oldp+11579,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [7U])));
    bufp->fullBit(oldp+11580,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [7U] >> 1U))));
    bufp->fullBit(oldp+11581,((1U & (~ (IData)((0x1ffffffffe00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x15U)))))));
    bufp->fullBit(oldp+11582,((((~ (IData)((0x1ffffffffe00000ULL 
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
    bufp->fullBit(oldp+11583,((1U & (IData)((0xfffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))))));
    bufp->fullBit(oldp+11584,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [8U])));
    bufp->fullBit(oldp+11585,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [8U] >> 1U))));
    bufp->fullBit(oldp+11586,((1U & (~ (IData)((0xfffffffff00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x14U)))))));
    bufp->fullBit(oldp+11587,((((~ (IData)((0xfffffffff00000ULL 
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
    bufp->fullBit(oldp+11588,((1U & (IData)((0x7ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))))));
    bufp->fullBit(oldp+11589,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                               [9U])));
    bufp->fullBit(oldp+11590,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                     [9U] >> 1U))));
    bufp->fullBit(oldp+11591,((1U & (~ (IData)((0x7ffffffff80000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x13U)))))));
    bufp->fullBit(oldp+11592,((((~ (IData)((0x7ffffffff80000ULL 
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
    bufp->fullBit(oldp+11593,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+11594,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x1cU)))));
    bufp->fullCData(oldp+11595,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x1dU)))),3);
    bufp->fullQData(oldp+11596,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                 << 0x1eU)),64);
    bufp->fullQData(oldp+11598,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+11600,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+11601,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+11602,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+11603,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+11604,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1eU)))));
    bufp->fullBit(oldp+11605,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1eU))))));
    bufp->fullBit(oldp+11606,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x1eU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x1eU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+11607,((1U & (IData)((0x3ffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))))));
    bufp->fullBit(oldp+11608,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0xaU])));
    bufp->fullBit(oldp+11609,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0xaU] >> 1U))));
    bufp->fullBit(oldp+11610,((1U & (~ (IData)((0x3ffffffff00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x14U)))))));
    bufp->fullBit(oldp+11611,((((~ (IData)((0x3ffffffff00000ULL 
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
    bufp->fullBit(oldp+11612,((1U & (IData)((0x1ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))))));
    bufp->fullBit(oldp+11613,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0xbU])));
    bufp->fullBit(oldp+11614,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0xbU] >> 1U))));
    bufp->fullBit(oldp+11615,((1U & (~ (IData)((0x1ffffffff80000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x13U)))))));
    bufp->fullBit(oldp+11616,((((~ (IData)((0x1ffffffff80000ULL 
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
    bufp->fullBit(oldp+11617,((1U & (IData)((0xffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))))));
    bufp->fullBit(oldp+11618,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0xcU])));
    bufp->fullBit(oldp+11619,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0xcU] >> 1U))));
    bufp->fullBit(oldp+11620,((1U & (~ (IData)((0xffffffffc0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))))));
    bufp->fullBit(oldp+11621,((((~ (IData)((0xffffffffc0000ULL 
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
    bufp->fullBit(oldp+11622,((1U & (IData)((0x7fffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))))));
    bufp->fullBit(oldp+11623,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0xdU])));
    bufp->fullBit(oldp+11624,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0xdU] >> 1U))));
    bufp->fullBit(oldp+11625,((1U & (~ (IData)((0x7fffffffe0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x11U)))))));
    bufp->fullBit(oldp+11626,((((~ (IData)((0x7fffffffe0000ULL 
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
    bufp->fullBit(oldp+11627,((1U & (IData)((0x3ffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))))));
    bufp->fullBit(oldp+11628,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0xeU])));
    bufp->fullBit(oldp+11629,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0xeU] >> 1U))));
    bufp->fullBit(oldp+11630,((1U & (~ (IData)((0x3ffffffff0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))))));
    bufp->fullBit(oldp+11631,((((~ (IData)((0x3ffffffff0000ULL 
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
    bufp->fullBit(oldp+11632,((1U & (IData)((0x1ffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))))));
    bufp->fullBit(oldp+11633,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0xfU])));
    bufp->fullBit(oldp+11634,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0xfU] >> 1U))));
    bufp->fullBit(oldp+11635,((1U & (~ (IData)((0x1ffffffff8000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xfU)))))));
    bufp->fullBit(oldp+11636,((((~ (IData)((0x1ffffffff8000ULL 
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
    bufp->fullBit(oldp+11637,((1U & (IData)((0xffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))))));
    bufp->fullBit(oldp+11638,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x10U])));
    bufp->fullBit(oldp+11639,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x10U] >> 1U))));
    bufp->fullBit(oldp+11640,((1U & (~ (IData)((0xffffffffc000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xeU)))))));
    bufp->fullBit(oldp+11641,((((~ (IData)((0xffffffffc000ULL 
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
    bufp->fullBit(oldp+11642,((1U & (IData)((0x7fffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))))));
    bufp->fullBit(oldp+11643,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x11U])));
    bufp->fullBit(oldp+11644,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x11U] >> 1U))));
    bufp->fullBit(oldp+11645,((1U & (~ (IData)((0x7fffffffe000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xdU)))))));
    bufp->fullBit(oldp+11646,((((~ (IData)((0x7fffffffe000ULL 
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
    bufp->fullBit(oldp+11647,((1U & (IData)((0x3ffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))))));
    bufp->fullBit(oldp+11648,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+11649,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+11650,((1U & (~ (IData)((0x3ffffffff000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xcU)))))));
    bufp->fullBit(oldp+11651,((((~ (IData)((0x3ffffffff000ULL 
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
    bufp->fullBit(oldp+11652,((1U & (IData)((0x1ffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))))));
    bufp->fullBit(oldp+11653,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+11654,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+11655,((1U & (~ (IData)((0x1ffffffff800ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xbU)))))));
    bufp->fullBit(oldp+11656,((((~ (IData)((0x1ffffffff800ULL 
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
    bufp->fullBit(oldp+11657,((1U & (IData)((0x7fffffffe0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1dU))))));
    bufp->fullBit(oldp+11658,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+11659,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+11660,((1U & (~ (IData)((0x7fffffffe0000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1dU)))))));
    bufp->fullBit(oldp+11661,((((~ (IData)((0x7fffffffe0000000ULL 
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
    bufp->fullBit(oldp+11662,((1U & (IData)((0xffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))))));
    bufp->fullBit(oldp+11663,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+11664,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+11665,((1U & (~ (IData)((0xffffffffc00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xaU)))))));
    bufp->fullBit(oldp+11666,((((~ (IData)((0xffffffffc00ULL 
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
    bufp->fullBit(oldp+11667,((1U & (IData)((0x7fffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))))));
    bufp->fullBit(oldp+11668,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+11669,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+11670,((1U & (~ (IData)((0x7fffffffe00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 9U)))))));
    bufp->fullBit(oldp+11671,((((~ (IData)((0x7fffffffe00ULL 
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
    bufp->fullBit(oldp+11672,((1U & (IData)((0x3ffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))))));
    bufp->fullBit(oldp+11673,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+11674,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+11675,((1U & (~ (IData)((0x3ffffffff00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 8U)))))));
    bufp->fullBit(oldp+11676,((((~ (IData)((0x3ffffffff00ULL 
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
    bufp->fullBit(oldp+11677,((1U & (IData)((0x1ffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))))));
    bufp->fullBit(oldp+11678,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+11679,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+11680,((1U & (~ (IData)((0x1ffffffff80ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 7U)))))));
    bufp->fullBit(oldp+11681,((((~ (IData)((0x1ffffffff80ULL 
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
    bufp->fullBit(oldp+11682,((1U & (IData)((0xffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))))));
    bufp->fullBit(oldp+11683,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+11684,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+11685,((1U & (~ (IData)((0xffffffffc0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 6U)))))));
    bufp->fullBit(oldp+11686,((((~ (IData)((0xffffffffc0ULL 
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
    bufp->fullBit(oldp+11687,((1U & (IData)((0x7fffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))))));
    bufp->fullBit(oldp+11688,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+11689,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+11690,((1U & (~ (IData)((0x7fffffffe0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 5U)))))));
    bufp->fullBit(oldp+11691,((((~ (IData)((0x7fffffffe0ULL 
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
    bufp->fullBit(oldp+11692,((1U & (IData)((0x3ffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))))));
    bufp->fullBit(oldp+11693,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+11694,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+11695,((1U & (~ (IData)((0x3ffffffff0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 4U)))))));
    bufp->fullBit(oldp+11696,((((~ (IData)((0x3ffffffff0ULL 
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
    bufp->fullBit(oldp+11697,((1U & (IData)((0x1ffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))))));
    bufp->fullBit(oldp+11698,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+11699,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+11700,((1U & (~ (IData)((0x1ffffffff8ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 3U)))))));
    bufp->fullBit(oldp+11701,((((~ (IData)((0x1ffffffff8ULL 
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
    bufp->fullBit(oldp+11702,((1U & (IData)((0xffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
    bufp->fullBit(oldp+11703,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+11704,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+11705,((1U & (~ (IData)((0xffffffffcULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 2U)))))));
    bufp->fullBit(oldp+11706,((((~ (IData)((0xffffffffcULL 
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
    bufp->fullBit(oldp+11707,((1U & (IData)((0x7fffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
    bufp->fullBit(oldp+11708,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+11709,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+11710,((1U & (~ (IData)((0x7fffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
    bufp->fullBit(oldp+11711,((((~ (IData)((0x7fffffffeULL 
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
    bufp->fullBit(oldp+11712,((1U & (IData)((0x3ffffffff0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1cU))))));
    bufp->fullBit(oldp+11713,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+11714,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+11715,((1U & (~ (IData)((0x3ffffffff0000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1cU)))))));
    bufp->fullBit(oldp+11716,((((~ (IData)((0x3ffffffff0000000ULL 
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
    bufp->fullBit(oldp+11717,((1U & (IData)((0x3ffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+11718,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+11719,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+11720,((1U & (~ (IData)((0x3ffffffffULL 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+11721,((((~ (IData)((0x3ffffffffULL 
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
    bufp->fullBit(oldp+11722,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
    bufp->fullBit(oldp+11723,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+11724,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+11725,((1U & (~ (IData)((0x1ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+11726,((((~ (IData)((0x1ffffffffULL 
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
    bufp->fullBit(oldp+11727,((1U & (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
    bufp->fullBit(oldp+11728,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+11729,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+11730,((1U & (~ (IData)((0xffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+11731,((((~ (IData)((0xffffffffULL 
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
    bufp->fullBit(oldp+11732,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
    bufp->fullBit(oldp+11733,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+11734,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+11735,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+11736,((((~ (IData)((0x7fffffffULL 
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
    bufp->fullBit(oldp+11737,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
    bufp->fullBit(oldp+11738,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+11739,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+11740,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+11741,((((~ (IData)((0x3fffffffULL 
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
    bufp->fullBit(oldp+11742,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
    bufp->fullBit(oldp+11743,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+11744,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+11745,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+11746,((((~ (IData)((0x1fffffffULL 
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
    bufp->fullBit(oldp+11747,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+11748,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+11749,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+11750,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+11751,((((~ (IData)((0xfffffffULL 
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
    bufp->fullBit(oldp+11752,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+11753,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+11754,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+11755,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+11756,((((~ (IData)((0x7ffffffULL 
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
    bufp->fullBit(oldp+11757,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+11758,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+11759,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+11760,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+11761,((((~ (IData)((0x3ffffffULL 
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
    bufp->fullBit(oldp+11762,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+11763,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+11764,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+11765,((1U & (~ (IData)((0x1ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+11766,((((~ (IData)((0x1ffffffULL 
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
    bufp->fullBit(oldp+11767,((1U & (IData)((0x1ffffffff8000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1bU))))));
    bufp->fullBit(oldp+11768,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+11769,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+11770,((1U & (~ (IData)((0x1ffffffff8000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1bU)))))));
    bufp->fullBit(oldp+11771,((((~ (IData)((0x1ffffffff8000000ULL 
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
    bufp->fullBit(oldp+11772,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+11773,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+11774,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+11775,((1U & (~ (IData)((0xffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+11776,((((~ (IData)((0xffffffULL 
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
    bufp->fullBit(oldp+11777,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+11778,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+11779,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+11780,((1U & (~ (IData)((0x7fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+11781,((((~ (IData)((0x7fffffULL 
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
    bufp->fullBit(oldp+11782,((1U & (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+11783,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+11784,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+11785,((1U & (~ (IData)((0x3fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+11786,((((~ (IData)((0x3fffffULL 
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
    bufp->fullBit(oldp+11787,((1U & (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+11788,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+11789,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+11790,((1U & (~ (IData)((0x1fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+11791,((((~ (IData)((0x1fffffULL 
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
    bufp->fullBit(oldp+11792,((1U & (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+11793,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+11794,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+11795,((1U & (~ (IData)((0xfffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+11796,((((~ (IData)((0xfffffULL 
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
    bufp->fullBit(oldp+11797,((1U & (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+11798,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+11799,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+11800,((1U & (~ (IData)((0x7ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+11801,((((~ (IData)((0x7ffffULL 
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
    bufp->fullBit(oldp+11802,((1U & (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+11803,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+11804,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+11805,((1U & (~ (IData)((0x3ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+11806,((((~ (IData)((0x3ffffULL 
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
    bufp->fullBit(oldp+11807,((1U & (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+11808,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+11809,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+11810,((1U & (~ (IData)((0x1ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+11811,((((~ (IData)((0x1ffffULL 
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
    bufp->fullBit(oldp+11812,((1U & (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+11813,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+11814,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+11815,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+11816,((((~ (IData)((0xffffULL 
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
    bufp->fullBit(oldp+11817,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+11818,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+11819,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x31U] >> 1U))));
    bufp->fullBit(oldp+11820,((1U & (~ (IData)((0x7fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+11821,((((~ (IData)((0x7fffULL 
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
    bufp->fullBit(oldp+11822,((1U & (IData)((0xffffffffc000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU))))));
    bufp->fullBit(oldp+11823,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [4U])));
    bufp->fullBit(oldp+11824,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [4U] >> 1U))));
    bufp->fullBit(oldp+11825,((1U & (~ (IData)((0xffffffffc000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1aU)))))));
    bufp->fullBit(oldp+11826,((((~ (IData)((0xffffffffc000000ULL 
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
    bufp->fullBit(oldp+11827,((1U & (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+11828,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x32U])));
    bufp->fullBit(oldp+11829,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x32U] >> 1U))));
    bufp->fullBit(oldp+11830,((1U & (~ (IData)((0x3fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+11831,((((~ (IData)((0x3fffULL 
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
    bufp->fullBit(oldp+11832,((1U & (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+11833,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x33U])));
    bufp->fullBit(oldp+11834,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x33U] >> 1U))));
    bufp->fullBit(oldp+11835,((1U & (~ (IData)((0x1fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+11836,((((~ (IData)((0x1fffULL 
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
    bufp->fullBit(oldp+11837,((1U & (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+11838,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x34U])));
    bufp->fullBit(oldp+11839,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x34U] >> 1U))));
    bufp->fullBit(oldp+11840,((1U & (~ (IData)((0xfffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+11841,((((~ (IData)((0xfffULL 
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
    bufp->fullBit(oldp+11842,((1U & (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+11843,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x35U])));
    bufp->fullBit(oldp+11844,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x35U] >> 1U))));
    bufp->fullBit(oldp+11845,((1U & (~ (IData)((0x7ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+11846,((((~ (IData)((0x7ffULL 
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
    bufp->fullBit(oldp+11847,((1U & (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+11848,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x36U])));
    bufp->fullBit(oldp+11849,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x36U] >> 1U))));
    bufp->fullBit(oldp+11850,((1U & (~ (IData)((0x3ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+11851,((((~ (IData)((0x3ffULL 
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
    bufp->fullBit(oldp+11852,((1U & (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+11853,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x37U])));
    bufp->fullBit(oldp+11854,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x37U] >> 1U))));
    bufp->fullBit(oldp+11855,((1U & (~ (IData)((0x1ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+11856,((((~ (IData)((0x1ffULL 
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
    bufp->fullBit(oldp+11857,((1U & (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+11858,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x38U])));
    bufp->fullBit(oldp+11859,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x38U] >> 1U))));
    bufp->fullBit(oldp+11860,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+11861,((((~ (IData)((0xffULL 
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
    bufp->fullBit(oldp+11862,((1U & (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+11863,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x39U])));
    bufp->fullBit(oldp+11864,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x39U] >> 1U))));
    bufp->fullBit(oldp+11865,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+11866,((((~ (IData)((0x7fULL 
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
    bufp->fullBit(oldp+11867,((1U & (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+11868,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x3aU])));
    bufp->fullBit(oldp+11869,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x3aU] >> 1U))));
    bufp->fullBit(oldp+11870,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+11871,((((~ (IData)((0x3fULL 
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
    bufp->fullBit(oldp+11872,((1U & (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
    bufp->fullBit(oldp+11873,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x3bU])));
    bufp->fullBit(oldp+11874,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x3bU] >> 1U))));
    bufp->fullBit(oldp+11875,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+11876,((((~ (IData)((0x1fULL 
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
    bufp->fullBit(oldp+11877,((1U & (IData)((0x7fffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U))))));
    bufp->fullBit(oldp+11878,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [5U])));
    bufp->fullBit(oldp+11879,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [5U] >> 1U))));
    bufp->fullBit(oldp+11880,((1U & (~ (IData)((0x7fffffffe000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x19U)))))));
    bufp->fullBit(oldp+11881,((((~ (IData)((0x7fffffffe000000ULL 
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
    bufp->fullBit(oldp+11882,((1U & (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
    bufp->fullBit(oldp+11883,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x3cU])));
    bufp->fullBit(oldp+11884,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x3cU] >> 1U))));
    bufp->fullBit(oldp+11885,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+11886,((((~ (IData)((0xfULL 
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
    bufp->fullBit(oldp+11887,((1U & (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU))))));
    bufp->fullBit(oldp+11888,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x3dU])));
    bufp->fullBit(oldp+11889,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x3dU] >> 1U))));
    bufp->fullBit(oldp+11890,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+11891,((((~ (IData)((7ULL & 
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
    bufp->fullBit(oldp+11892,((1U & (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+11893,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x3eU])));
    bufp->fullBit(oldp+11894,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x3eU] >> 1U))));
    bufp->fullBit(oldp+11895,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+11896,((((~ (IData)((3ULL & 
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
    bufp->fullBit(oldp+11897,((1U & (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U))))));
    bufp->fullBit(oldp+11898,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [0x3fU])));
    bufp->fullBit(oldp+11899,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [0x3fU] >> 1U))));
    bufp->fullBit(oldp+11900,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+11901,((((~ (IData)((1ULL & 
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
    bufp->fullBit(oldp+11902,((1U & (IData)((0x3ffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))))));
    bufp->fullBit(oldp+11903,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [6U])));
    bufp->fullBit(oldp+11904,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [6U] >> 1U))));
    bufp->fullBit(oldp+11905,((1U & (~ (IData)((0x3ffffffff000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x18U)))))));
    bufp->fullBit(oldp+11906,((((~ (IData)((0x3ffffffff000000ULL 
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
    bufp->fullBit(oldp+11907,((1U & (IData)((0x1ffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))))));
    bufp->fullBit(oldp+11908,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [7U])));
    bufp->fullBit(oldp+11909,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [7U] >> 1U))));
    bufp->fullBit(oldp+11910,((1U & (~ (IData)((0x1ffffffff800000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x17U)))))));
    bufp->fullBit(oldp+11911,((((~ (IData)((0x1ffffffff800000ULL 
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
    bufp->fullBit(oldp+11912,((1U & (IData)((0xffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))))));
    bufp->fullBit(oldp+11913,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [8U])));
    bufp->fullBit(oldp+11914,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [8U] >> 1U))));
    bufp->fullBit(oldp+11915,((1U & (~ (IData)((0xffffffffc00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x16U)))))));
    bufp->fullBit(oldp+11916,((((~ (IData)((0xffffffffc00000ULL 
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
    bufp->fullBit(oldp+11917,((1U & (IData)((0x7fffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))))));
    bufp->fullBit(oldp+11918,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                               [9U])));
    bufp->fullBit(oldp+11919,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                     [9U] >> 1U))));
    bufp->fullBit(oldp+11920,((1U & (~ (IData)((0x7fffffffe00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x15U)))))));
    bufp->fullBit(oldp+11921,((((~ (IData)((0x7fffffffe00000ULL 
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
    bufp->fullBit(oldp+11922,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+11923,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x1eU)))));
    bufp->fullIData(oldp+11924,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData),17);
    bufp->fullSData(oldp+11925,((0x3fffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)),14);
    bufp->fullSData(oldp+11926,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut),14);
    bufp->fullBit(oldp+11927,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11928,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+11929,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+11930,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+11931,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+11932,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+11933,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig));
    bufp->fullBit(oldp+11934,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+11935,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+11936,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 0xbU))));
    bufp->fullBit(oldp+11937,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fifth1__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11938,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+11939,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+11940,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+11941,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+11942,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__B));
    bufp->fullBit(oldp+11943,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+11944,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+11945,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+11946,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+11947,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__A));
    bufp->fullBit(oldp+11948,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+11949,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+11950,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+11951,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+11952,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__C));
    bufp->fullBit(oldp+11953,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+11954,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+11955,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+11956,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+11957,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__B));
    bufp->fullBit(oldp+11958,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+11959,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+11960,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+11961,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+11962,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__A));
    bufp->fullBit(oldp+11963,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 9U))));
    bufp->fullBit(oldp+11964,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 8U))));
    bufp->fullBit(oldp+11965,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 7U))));
    bufp->fullBit(oldp+11966,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+11967,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+11968,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+11969,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 0xaU))));
    bufp->fullBit(oldp+11970,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__fourth2__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11971,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 2U))));
    bufp->fullBit(oldp+11972,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 1U))));
    bufp->fullBit(oldp+11973,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)));
    bufp->fullBit(oldp+11974,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 2U) & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 1U) 
                                                 | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+11975,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third1__A));
    bufp->fullBit(oldp+11976,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)));
    bufp->fullBit(oldp+11977,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 4U))));
    bufp->fullBit(oldp+11978,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 3U))));
    bufp->fullBit(oldp+11979,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+11980,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__C));
    bufp->fullBit(oldp+11981,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+11982,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11983,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__B));
    bufp->fullBit(oldp+11984,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11985,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__A));
    bufp->fullBit(oldp+11986,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 0xdU))));
    bufp->fullBit(oldp+11987,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 0xcU))));
    bufp->fullBit(oldp+11988,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 6U))));
    bufp->fullBit(oldp+11989,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                     >> 5U))));
    bufp->fullBit(oldp+11990,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11991,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+11992,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+11993,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+11994,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+11995,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+11996,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+11997,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+11998,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+11999,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12000,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12001,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12002,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12003,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12004,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12005,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12006,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12007,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12008,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12009,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12010,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12011,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12012,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12013,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12014,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12015,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12016,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12017,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12018,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12019,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12020,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12021,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12022,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12023,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12024,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12025,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12026,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12027,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12028,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12029,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12030,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12031,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12032,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12033,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12034,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12035,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12036,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12037,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12038,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12039,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12040,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))));
    bufp->fullBit(oldp+12041,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12042,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12043,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12044,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12045,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12046,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12047,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12048,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12049,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12050,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12051,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12052,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12053,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12054,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12055,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12056,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12057,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12058,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12059,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12060,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12061,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12062,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12063,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12064,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12065,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12066,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12067,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12068,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12069,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12070,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12071,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12072,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12073,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12074,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12075,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12076,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12077,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12078,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12079,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12080,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12081,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12082,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12083,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12084,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12085,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12086,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12087,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12088,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12089,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12090,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12091,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12092,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12093,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12094,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12095,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12096,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12097,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12098,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12099,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12100,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12101,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12102,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12103,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12104,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12105,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12106,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12107,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12108,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12109,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12110,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12111,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12112,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12113,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12114,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12115,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12116,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12117,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12118,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12119,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12120,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12121,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12122,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12123,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12124,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12125,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12126,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12127,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12128,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12129,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12130,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12131,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12132,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12133,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12134,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12135,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12136,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12137,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12138,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12139,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12140,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12141,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12142,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12143,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12144,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12145,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12146,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12147,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12148,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12149,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12150,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12151,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12152,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12153,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12154,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12155,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12156,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12157,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12158,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12159,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12160,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12161,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12162,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12163,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12164,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12165,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12166,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12167,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12168,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12169,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12170,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12171,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12172,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12173,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12174,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12175,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12176,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12177,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12178,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12179,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12180,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12181,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12182,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12183,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12184,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12185,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12186,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12187,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12188,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12189,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12190,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12191,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12192,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12193,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12194,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12195,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12196,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12197,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12198,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12199,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12200,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12201,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12202,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12203,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12204,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12205,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12206,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12207,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12208,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12209,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12210,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12211,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12212,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12213,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12214,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12215,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12216,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12217,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12218,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12219,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12220,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12221,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12222,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12223,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12224,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12225,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12226,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12227,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12228,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12229,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12230,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12231,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12232,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12233,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12234,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12235,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12236,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12237,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12238,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12239,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12240,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12241,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12242,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12243,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12244,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12245,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12246,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12247,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12248,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12249,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12250,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12251,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12252,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12253,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12254,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12255,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12256,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12257,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12258,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12259,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12260,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12261,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12262,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12263,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12264,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12265,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12266,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12267,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12268,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12269,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12270,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12271,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12272,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12273,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12274,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12275,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12276,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12277,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12278,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12279,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12280,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12281,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12282,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12283,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12284,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12285,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12286,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12287,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12288,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12289,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12290,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12291,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12292,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12293,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12294,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12295,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12296,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12297,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12298,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12299,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12300,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12301,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12302,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12303,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12304,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12305,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12306,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12307,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12308,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12309,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12310,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12311,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12312,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12313,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12314,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12315,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12316,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12317,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12318,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12319,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12320,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12321,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12322,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12323,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12324,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12325,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12326,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12327,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12328,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12329,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12330,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12331,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12332,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12333,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12334,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12335,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12336,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12337,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12338,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12339,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12340,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12341,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12342,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12343,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12344,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12345,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12346,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12347,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12348,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12349,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12350,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12351,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12352,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12353,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12354,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12355,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12356,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12357,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12358,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12359,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12360,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12361,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12362,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12363,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12364,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12365,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12366,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12367,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12368,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12369,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12370,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12371,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12372,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12373,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12374,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12375,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12376,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12377,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12378,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12379,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12380,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12381,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12382,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12383,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12384,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12385,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12386,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12387,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12388,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12389,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12390,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12391,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12392,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12393,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12394,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12395,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12396,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12397,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12398,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12399,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12400,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12401,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12402,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12403,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12404,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12405,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12406,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12407,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12408,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12409,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12410,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12411,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12412,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12413,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12414,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12415,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12416,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12417,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12418,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12419,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12420,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12421,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12422,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12423,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12424,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12425,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12426,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12427,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12428,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12429,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12430,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12431,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12432,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12433,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12434,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12435,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12436,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12437,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12438,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12439,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12440,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12441,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12442,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12443,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12444,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12445,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12446,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12447,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12448,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12449,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12450,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12451,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12452,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12453,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12454,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12455,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12456,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12457,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12458,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12459,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12460,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12461,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12462,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12463,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12464,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12465,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12466,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12467,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12468,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12469,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12470,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12471,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12472,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12473,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12474,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12475,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12476,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12477,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12478,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12479,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12480,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12481,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12482,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12483,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12484,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12485,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12486,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12487,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12488,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12489,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12490,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12491,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12492,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12493,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12494,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12495,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12496,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12497,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12498,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12499,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12500,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12501,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12502,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12503,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12504,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12505,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12506,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12507,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12508,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12509,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12510,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12511,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12512,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12513,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12514,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12515,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12516,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12517,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12518,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12519,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12520,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12521,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12522,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12523,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12524,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12525,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12526,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12527,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12528,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12529,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12530,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12531,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12532,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12533,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12534,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12535,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12536,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12537,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12538,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12539,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12540,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12541,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12542,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12543,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12544,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12545,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12546,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12547,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12548,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12549,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12550,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12551,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12552,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12553,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12554,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12555,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12556,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12557,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12558,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12559,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12560,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12561,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12562,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12563,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12564,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12565,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12566,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12567,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12568,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12569,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12570,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12571,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12572,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12573,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12574,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12575,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12576,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12577,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12578,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12579,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12580,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12581,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12582,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12583,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12584,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12585,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12586,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12587,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12588,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12589,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12590,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12591,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12592,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12593,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12594,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12595,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12596,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12597,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12598,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12599,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12600,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12601,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12602,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12603,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12604,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12605,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12606,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12607,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12608,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12609,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12610,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12611,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12612,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12613,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12614,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12615,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12616,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12617,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12618,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12619,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12620,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12621,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12622,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12623,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12624,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12625,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12626,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12627,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12628,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12629,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12630,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12631,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12632,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12633,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12634,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12635,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12636,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12637,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12638,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12639,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12640,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12641,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12642,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12643,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12644,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12645,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12646,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12647,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12648,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12649,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12650,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12651,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12652,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12653,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12654,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12655,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12656,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12657,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12658,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12659,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12660,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12661,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12662,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12663,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12664,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12665,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12666,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12667,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12668,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12669,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12670,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12671,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12672,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12673,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12674,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12675,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12676,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12677,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12678,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12679,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12680,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12681,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12682,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12683,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12684,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12685,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12686,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12687,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12688,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12689,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12690,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12691,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12692,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12693,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12694,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12695,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12696,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12697,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12698,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12699,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12700,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12701,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12702,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12703,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12704,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12705,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12706,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12707,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12708,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12709,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12710,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12711,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12712,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12713,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12714,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12715,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12716,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12717,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12718,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12719,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12720,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12721,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12722,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12723,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12724,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12725,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12726,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12727,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12728,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12729,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12730,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12731,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12732,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12733,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12734,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12735,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12736,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12737,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12738,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12739,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12740,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12741,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12742,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12743,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12744,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12745,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12746,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12747,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12748,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12749,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12750,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12751,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12752,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12753,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12754,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12755,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12756,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12757,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12758,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12759,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12760,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12761,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12762,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12763,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12764,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12765,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12766,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12767,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12768,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12769,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12770,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12771,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12772,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12773,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12774,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12775,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12776,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12777,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12778,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12779,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12780,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12781,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12782,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12783,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12784,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12785,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12786,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12787,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12788,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12789,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12790,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12791,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12792,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12793,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12794,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12795,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12796,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12797,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12798,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12799,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12800,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12801,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12802,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12803,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12804,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12805,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12806,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12807,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12808,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12809,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12810,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12811,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12812,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12813,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12814,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12815,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12816,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12817,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12818,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12819,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12820,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12821,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12822,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12823,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12824,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12825,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12826,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12827,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12828,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12829,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12830,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12831,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12832,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12833,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12834,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12835,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12836,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12837,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12838,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12839,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12840,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12841,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12842,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12843,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12844,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12845,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12846,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12847,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12848,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12849,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12850,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12851,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12852,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12853,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12854,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12855,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12856,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12857,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12858,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12859,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12860,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12861,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12862,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12863,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12864,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12865,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12866,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig)) 
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
    bufp->fullCData(oldp+12867,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12868,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12869,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12870,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12871,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12872,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12873,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12874,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12875,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12876,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12877,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12878,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12879,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12880,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12881,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12882,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12883,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12884,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12885,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12886,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12887,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12888,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12889,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12890,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12891,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12892,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12893,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12894,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12895,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12896,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12897,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12898,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 0xeU))));
    bufp->fullBit(oldp+12899,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0x10U) & (IData)(
                                                           (0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.first5__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12900,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__A));
    bufp->fullBit(oldp+12901,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 9U))));
    bufp->fullBit(oldp+12902,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 8U))));
    bufp->fullBit(oldp+12903,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 7U))));
    bufp->fullBit(oldp+12904,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 9U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x180U 
                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.fourth1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12905,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__A));
    bufp->fullBit(oldp+12906,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__B));
    bufp->fullBit(oldp+12907,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12908,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__fourth2__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                      >> 0xaU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.fourth2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12909,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 2U))));
    bufp->fullBit(oldp+12910,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 1U))));
    bufp->fullBit(oldp+12911,((1U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))));
    bufp->fullBit(oldp+12912,((1U & ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                       >> 2U) & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.second1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12913,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third1__A));
    bufp->fullBit(oldp+12914,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)));
    bufp->fullBit(oldp+12915,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 4U))));
    bufp->fullBit(oldp+12916,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 3U))));
    bufp->fullBit(oldp+12917,((1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                      & (IData)((0U 
                                                 != 
                                                 (0x18U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.second2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12918,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__C));
    bufp->fullBit(oldp+12919,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 1U))));
    bufp->fullBit(oldp+12920,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second3__B) 
                                   | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                      >> 1U))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.second3__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12921,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__B));
    bufp->fullBit(oldp+12922,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__second4__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.second4__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12923,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__A));
    bufp->fullBit(oldp+12924,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12925,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12926,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 6U))));
    bufp->fullBit(oldp+12927,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                     >> 5U))));
    bufp->fullBit(oldp+12928,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third1__A) 
                                & (IData)((0U != (0x60U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.third1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12929,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__B) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__Vcellinp__third2__C))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.third2__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullIData(oldp+12930,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData),17);
    bufp->fullSData(oldp+12931,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut),14);
    bufp->fullBit(oldp+12932,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__PVT__FifSig) 
                                & (IData)((0U != (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12933,((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__PVT__FifSig)) 
                                      & (IData)((0x1000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                                     | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__PVT__FifSig)) 
                                         & (IData)(
                                                   (0x2000U 
                                                    == 
                                                    (0x3000U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                                        | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__PVT__FifSig) 
                                           & ((IData)(
                                                      (0U 
                                                       == 
                                                       (0x3000U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))));
    bufp->fullCData(oldp+12934,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__second4__A) 
                                  << 4U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__second4__B) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__second4__C) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__second3__A) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__second3__B)))))),5);
    bufp->fullCData(oldp+12935,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__third2__A) 
                                  << 3U) | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__third2__B) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__third2__C) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__third1__A))))),4);
    bufp->fullCData(oldp+12936,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__fourth2__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__fourth2__B))),2);
    bufp->fullCData(oldp+12937,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__fifth1__B))),2);
    bufp->fullBit(oldp+12938,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__PVT__FifSig));
    bufp->fullBit(oldp+12939,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__fifth1__A));
    bufp->fullBit(oldp+12940,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__fifth1__B));
    bufp->fullBit(oldp+12941,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12942,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__fifth1__A) 
                                & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__fifth1__B) 
                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                      >> 0xbU))) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.fifth1__DOT____VdfgTmp_h99ddda1a__0))));
    bufp->fullBit(oldp+12943,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 4U))));
    bufp->fullBit(oldp+12944,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 3U))));
    bufp->fullBit(oldp+12945,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 2U))));
    bufp->fullBit(oldp+12946,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 4U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0xcU 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.first1__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12947,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__second3__B));
    bufp->fullBit(oldp+12948,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 7U))));
    bufp->fullBit(oldp+12949,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 6U))));
    bufp->fullBit(oldp+12950,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 5U))));
    bufp->fullBit(oldp+12951,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 7U) & (IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.first2__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12952,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__second3__A));
    bufp->fullBit(oldp+12953,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 0xaU))));
    bufp->fullBit(oldp+12954,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 9U))));
    bufp->fullBit(oldp+12955,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 8U))));
    bufp->fullBit(oldp+12956,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 0xaU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.first3__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12957,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__second4__C));
    bufp->fullBit(oldp+12958,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 0xdU))));
    bufp->fullBit(oldp+12959,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 0xcU))));
    bufp->fullBit(oldp+12960,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 0xbU))));
    bufp->fullBit(oldp+12961,((1U & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 0xdU) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1800U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)))) 
                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.first4__DOT____VdfgTmp_h99ddda1a__0)))));
    bufp->fullBit(oldp+12962,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__Vcellinp__second4__B));
    bufp->fullBit(oldp+12963,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 0x10U))));
    bufp->fullBit(oldp+12964,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 0xfU))));
    bufp->fullBit(oldp+12965,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 0xeU))));
}
