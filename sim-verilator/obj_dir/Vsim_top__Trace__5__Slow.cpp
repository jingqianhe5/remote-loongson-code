// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


VL_ATTR_COLD void Vsim_top___024root__trace_full_sub_3(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+9384,((1U & (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+9385,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+9386,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+9387,((1U & (~ (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+9388,((((~ (IData)((0x7fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 9U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 9U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x19U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9389,((1U & (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+9390,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+9391,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+9392,((1U & (~ (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+9393,((((~ (IData)((0x3fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xaU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xaU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x1aU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9394,((1U & (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+9395,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+9396,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+9397,((1U & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+9398,((((~ (IData)((0x1fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xbU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xbU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x1bU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9399,((1U & (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+9400,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+9401,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+9402,((1U & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+9403,((((~ (IData)((0xfffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xcU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xcU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x1cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9404,((1U & (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+9405,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+9406,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+9407,((1U & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+9408,((((~ (IData)((0x7ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xdU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xdU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x1dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9409,((1U & (IData)((0x3fffffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU))))));
    bufp->fullBit(oldp+9410,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+9411,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+9412,((1U & (~ (IData)((0x3fffffffffffc000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xeU)))))));
    bufp->fullBit(oldp+9413,((((~ (IData)((0x3fffffffffffc000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xeU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffffc000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xeU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9414,((1U & (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+9415,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+9416,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+9417,((1U & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+9418,((((~ (IData)((0x3ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xeU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xeU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x1eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9419,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+9420,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+9421,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+9422,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+9423,((((~ (IData)((0x1ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xfU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xfU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x1fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9424,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+9425,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+9426,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+9427,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+9428,((((~ (IData)((0xffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x10U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x10U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x20U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9429,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+9430,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+9431,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+9432,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+9433,((((~ (IData)((0x7fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x11U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x11U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x21U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9434,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+9435,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+9436,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+9437,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+9438,((((~ (IData)((0x3fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x12U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x12U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x22U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9439,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+9440,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+9441,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+9442,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+9443,((((~ (IData)((0x1fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x13U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x13U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x23U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9444,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+9445,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+9446,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+9447,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+9448,((((~ (IData)((0xfffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x14U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x14U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x24U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9449,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+9450,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+9451,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+9452,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+9453,((((~ (IData)((0x7ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x15U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x15U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x25U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9454,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+9455,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+9456,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+9457,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+9458,((((~ (IData)((0x3ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x16U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x16U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x26U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9459,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+9460,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+9461,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+9462,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+9463,((((~ (IData)((0x1ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x17U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x17U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x27U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9464,((1U & (IData)((0x1fffffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU))))));
    bufp->fullBit(oldp+9465,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+9466,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+9467,((1U & (~ (IData)((0x1fffffffffffe000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xdU)))))));
    bufp->fullBit(oldp+9468,((((~ (IData)((0x1fffffffffffe000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xdU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffffe000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xdU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9469,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+9470,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+9471,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+9472,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+9473,((((~ (IData)((0xffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x18U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x18U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x28U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9474,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+9475,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+9476,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+9477,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+9478,((((~ (IData)((0x7fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x19U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x19U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x29U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9479,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+9480,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+9481,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+9482,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+9483,((((~ (IData)((0x3fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1aU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1aU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x2aU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9484,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+9485,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+9486,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+9487,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+9488,((((~ (IData)((0x1fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1bU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1bU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x2bU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9489,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+9490,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+9491,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+9492,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+9493,((((~ (IData)((0xfffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1cU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1cU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x2cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9494,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+9495,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+9496,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+9497,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+9498,((((~ (IData)((0x7ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x2dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9499,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+9500,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+9501,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+9502,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+9503,((((~ (IData)((0x3ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x2eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9504,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+9505,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+9506,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+9507,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+9508,((((~ (IData)((0x1ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x2fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9509,((1U & (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+9510,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+9511,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+9512,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+9513,((((~ (IData)((0xffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x20U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x20U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x30U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9514,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+9515,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+9516,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+9517,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+9518,((((~ (IData)((0x7fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x31U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9519,((1U & (IData)((0xffffffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU))))));
    bufp->fullBit(oldp+9520,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+9521,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+9522,((1U & (~ (IData)((0xffffffffffff000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xcU)))))));
    bufp->fullBit(oldp+9523,((((~ (IData)((0xffffffffffff000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xcU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffffffff000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xcU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9524,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+9525,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+9526,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+9527,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+9528,((((~ (IData)((0x3fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x32U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9529,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+9530,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+9531,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+9532,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+9533,((((~ (IData)((0x1fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x33U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9534,((1U & (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+9535,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+9536,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+9537,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+9538,((((~ (IData)((0xfffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x34U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9539,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+9540,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+9541,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+9542,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+9543,((((~ (IData)((0x7ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x35U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9544,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+9545,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+9546,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+9547,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+9548,((((~ (IData)((0x3ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x26U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x26U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x36U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9549,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+9550,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+9551,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+9552,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+9553,((((~ (IData)((0x1ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x27U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x27U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x37U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9554,((1U & (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+9555,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+9556,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+9557,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+9558,((((~ (IData)((0xffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x28U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x28U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x38U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9559,((1U & (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+9560,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+9561,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+9562,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+9563,((((~ (IData)((0x7fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x29U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x29U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x39U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9564,((1U & (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+9565,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+9566,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+9567,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+9568,((((~ (IData)((0x3fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2aU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2aU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x3aU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9569,((1U & (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+9570,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+9571,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+9572,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+9573,((((~ (IData)((0x1fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2bU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2bU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x3bU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9574,((1U & (IData)((0x7fffffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU))))));
    bufp->fullBit(oldp+9575,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+9576,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+9577,((1U & (~ (IData)((0x7fffffffffff800ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xbU)))))));
    bufp->fullBit(oldp+9578,((((~ (IData)((0x7fffffffffff800ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xbU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffffff800ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xbU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9579,((1U & (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+9580,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+9581,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+9582,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+9583,((((~ (IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2cU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2cU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9584,((1U & (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU))))));
    bufp->fullBit(oldp+9585,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+9586,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+9587,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+9588,((((~ (IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9589,((1U & (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU))))));
    bufp->fullBit(oldp+9590,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+9591,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+9592,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+9593,((((~ (IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9594,((1U & (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU))))));
    bufp->fullBit(oldp+9595,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+9596,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+9597,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+9598,((((~ (IData)((1ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2fU) 
                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x))) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [0x3fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9599,((1U & (IData)((0x3fffffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU))))));
    bufp->fullBit(oldp+9600,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+9601,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+9602,((1U & (~ (IData)((0x3fffffffffffc00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xaU)))))));
    bufp->fullBit(oldp+9603,((((~ (IData)((0x3fffffffffffc00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xaU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffffc00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xaU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9604,((1U & (IData)((0x1fffffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U))))));
    bufp->fullBit(oldp+9605,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+9606,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+9607,((1U & (~ (IData)((0x1fffffffffffe00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 9U)))))));
    bufp->fullBit(oldp+9608,((((~ (IData)((0x1fffffffffffe00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 9U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffffe00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 9U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9609,((1U & (IData)((0xffffffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U))))));
    bufp->fullBit(oldp+9610,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+9611,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+9612,((1U & (~ (IData)((0xffffffffffff00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 8U)))))));
    bufp->fullBit(oldp+9613,((((~ (IData)((0xffffffffffff00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 8U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffffffff00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 8U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [8U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9614,((1U & (IData)((0x7fffffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U))))));
    bufp->fullBit(oldp+9615,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+9616,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+9617,((1U & (~ (IData)((0x7fffffffffff80ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 7U)))))));
    bufp->fullBit(oldp+9618,((((~ (IData)((0x7fffffffffff80ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 7U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffffff80ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 7U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                      [9U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__CarrySig
                                       [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9619,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+9620,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                            >> 0x10U)))));
    bufp->fullCData(oldp+9621,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x11U)))),3);
    bufp->fullQData(oldp+9622,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                << 0x12U)),64);
    bufp->fullQData(oldp+9624,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+9626,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x) 
                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+9627,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+9628,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+9629,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+9630,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x12U)))));
    bufp->fullBit(oldp+9631,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U))))));
    bufp->fullBit(oldp+9632,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 0x12U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 0x12U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+9633,((1U & (IData)((0x3fffffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U))))));
    bufp->fullBit(oldp+9634,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+9635,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+9636,((1U & (~ (IData)((0x3fffffffffff00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 8U)))))));
    bufp->fullBit(oldp+9637,((((~ (IData)((0x3fffffffffff00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 8U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffff00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 8U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0xaU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9638,((1U & (IData)((0x1fffffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U))))));
    bufp->fullBit(oldp+9639,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+9640,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+9641,((1U & (~ (IData)((0x1fffffffffff80ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 7U)))))));
    bufp->fullBit(oldp+9642,((((~ (IData)((0x1fffffffffff80ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 7U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffff80ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 7U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0xbU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9643,((1U & (IData)((0xfffffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U))))));
    bufp->fullBit(oldp+9644,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+9645,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+9646,((1U & (~ (IData)((0xfffffffffffc0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 6U)))))));
    bufp->fullBit(oldp+9647,((((~ (IData)((0xfffffffffffc0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 6U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffffc0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 6U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0xcU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9648,((1U & (IData)((0x7ffffffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U))))));
    bufp->fullBit(oldp+9649,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+9650,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+9651,((1U & (~ (IData)((0x7ffffffffffe0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 5U)))))));
    bufp->fullBit(oldp+9652,((((~ (IData)((0x7ffffffffffe0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 5U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffe0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 5U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0xdU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9653,((1U & (IData)((0x3fffffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+9654,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+9655,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+9656,((1U & (~ (IData)((0x3fffffffffff0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U)))))));
    bufp->fullBit(oldp+9657,((((~ (IData)((0x3fffffffffff0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffff0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0xeU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9658,((1U & (IData)((0x1fffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+9659,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+9660,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+9661,((1U & (~ (IData)((0x1fffffffffff8ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 3U)))))));
    bufp->fullBit(oldp+9662,((((~ (IData)((0x1fffffffffff8ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 3U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffff8ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 3U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0xfU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9663,((1U & (IData)((0xfffffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))))));
    bufp->fullBit(oldp+9664,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+9665,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+9666,((1U & (~ (IData)((0xfffffffffffcULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 2U)))))));
    bufp->fullBit(oldp+9667,((((~ (IData)((0xfffffffffffcULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 2U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffffcULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 2U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x10U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9668,((1U & (IData)((0x7ffffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))))));
    bufp->fullBit(oldp+9669,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+9670,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+9671,((1U & (~ (IData)((0x7ffffffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U)))))));
    bufp->fullBit(oldp+9672,((((~ (IData)((0x7ffffffffffeULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 1U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffeULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 1U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x11U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9673,((1U & (IData)((0x3fffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+9674,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x12U])));
    bufp->fullBit(oldp+9675,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x12U] >> 1U))));
    bufp->fullBit(oldp+9676,((1U & (~ (IData)((0x3fffffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+9677,((((~ (IData)((0x3fffffffffffULL 
                                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffffULL 
                                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x12U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9678,((1U & (IData)((0x1fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))))));
    bufp->fullBit(oldp+9679,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x13U])));
    bufp->fullBit(oldp+9680,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x13U] >> 1U))));
    bufp->fullBit(oldp+9681,((1U & (~ (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+9682,((((~ (IData)((0x1fffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 1U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 1U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x13U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9683,((1U & (IData)((0x7ffffffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U))))));
    bufp->fullBit(oldp+9684,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [1U])));
    bufp->fullBit(oldp+9685,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+9686,((1U & (~ (IData)((0x7ffffffffffe0000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x11U)))))));
    bufp->fullBit(oldp+9687,((((~ (IData)((0x7ffffffffffe0000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x11U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffe0000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x11U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [1U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9688,((1U & (IData)((0xfffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))))));
    bufp->fullBit(oldp+9689,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x14U])));
    bufp->fullBit(oldp+9690,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x14U] >> 1U))));
    bufp->fullBit(oldp+9691,((1U & (~ (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+9692,((((~ (IData)((0xfffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 2U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 2U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x14U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9693,((1U & (IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))))));
    bufp->fullBit(oldp+9694,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x15U])));
    bufp->fullBit(oldp+9695,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x15U] >> 1U))));
    bufp->fullBit(oldp+9696,((1U & (~ (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+9697,((((~ (IData)((0x7ffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 3U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 3U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x15U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9698,((1U & (IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))))));
    bufp->fullBit(oldp+9699,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x16U])));
    bufp->fullBit(oldp+9700,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x16U] >> 1U))));
    bufp->fullBit(oldp+9701,((1U & (~ (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+9702,((((~ (IData)((0x3ffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 4U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 4U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x16U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9703,((1U & (IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))))));
    bufp->fullBit(oldp+9704,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x17U])));
    bufp->fullBit(oldp+9705,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x17U] >> 1U))));
    bufp->fullBit(oldp+9706,((1U & (~ (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+9707,((((~ (IData)((0x1ffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 5U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 5U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x17U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9708,((1U & (IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))))));
    bufp->fullBit(oldp+9709,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x18U])));
    bufp->fullBit(oldp+9710,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x18U] >> 1U))));
    bufp->fullBit(oldp+9711,((1U & (~ (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+9712,((((~ (IData)((0xffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 6U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 6U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x18U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9713,((1U & (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))))));
    bufp->fullBit(oldp+9714,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x19U])));
    bufp->fullBit(oldp+9715,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x19U] >> 1U))));
    bufp->fullBit(oldp+9716,((1U & (~ (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+9717,((((~ (IData)((0x7fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 7U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 7U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x19U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9718,((1U & (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))))));
    bufp->fullBit(oldp+9719,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x1aU])));
    bufp->fullBit(oldp+9720,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x1aU] >> 1U))));
    bufp->fullBit(oldp+9721,((1U & (~ (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+9722,((((~ (IData)((0x3fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 8U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 8U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x1aU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9723,((1U & (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))))));
    bufp->fullBit(oldp+9724,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x1bU])));
    bufp->fullBit(oldp+9725,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x1bU] >> 1U))));
    bufp->fullBit(oldp+9726,((1U & (~ (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+9727,((((~ (IData)((0x1fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 9U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 9U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x1bU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9728,((1U & (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+9729,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x1cU])));
    bufp->fullBit(oldp+9730,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x1cU] >> 1U))));
    bufp->fullBit(oldp+9731,((1U & (~ (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+9732,((((~ (IData)((0xfffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xaU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xaU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x1cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9733,((1U & (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+9734,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x1dU])));
    bufp->fullBit(oldp+9735,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x1dU] >> 1U))));
    bufp->fullBit(oldp+9736,((1U & (~ (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+9737,((((~ (IData)((0x7ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xbU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xbU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x1dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9738,((1U & (IData)((0x3fffffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U))))));
    bufp->fullBit(oldp+9739,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [2U])));
    bufp->fullBit(oldp+9740,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+9741,((1U & (~ (IData)((0x3fffffffffff0000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x10U)))))));
    bufp->fullBit(oldp+9742,((((~ (IData)((0x3fffffffffff0000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x10U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffff0000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x10U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9743,((1U & (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+9744,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x1eU])));
    bufp->fullBit(oldp+9745,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x1eU] >> 1U))));
    bufp->fullBit(oldp+9746,((1U & (~ (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+9747,((((~ (IData)((0x3ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xcU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xcU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x1eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9748,((1U & (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+9749,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x1fU])));
    bufp->fullBit(oldp+9750,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x1fU] >> 1U))));
    bufp->fullBit(oldp+9751,((1U & (~ (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+9752,((((~ (IData)((0x1ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xdU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xdU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x1fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9753,((1U & (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+9754,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x20U])));
    bufp->fullBit(oldp+9755,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x20U] >> 1U))));
    bufp->fullBit(oldp+9756,((1U & (~ (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+9757,((((~ (IData)((0xffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xeU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xeU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x20U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9758,((1U & (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+9759,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x21U])));
    bufp->fullBit(oldp+9760,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x21U] >> 1U))));
    bufp->fullBit(oldp+9761,((1U & (~ (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+9762,((((~ (IData)((0x7fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xfU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xfU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x21U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9763,((1U & (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+9764,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x22U])));
    bufp->fullBit(oldp+9765,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x22U] >> 1U))));
    bufp->fullBit(oldp+9766,((1U & (~ (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+9767,((((~ (IData)((0x3fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x10U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x10U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x22U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9768,((1U & (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+9769,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x23U])));
    bufp->fullBit(oldp+9770,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x23U] >> 1U))));
    bufp->fullBit(oldp+9771,((1U & (~ (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+9772,((((~ (IData)((0x1fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x11U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x11U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x23U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9773,((1U & (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+9774,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x24U])));
    bufp->fullBit(oldp+9775,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x24U] >> 1U))));
    bufp->fullBit(oldp+9776,((1U & (~ (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+9777,((((~ (IData)((0xfffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x12U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x12U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x24U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9778,((1U & (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+9779,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x25U])));
    bufp->fullBit(oldp+9780,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x25U] >> 1U))));
    bufp->fullBit(oldp+9781,((1U & (~ (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+9782,((((~ (IData)((0x7ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x13U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x13U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x25U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9783,((1U & (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+9784,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x26U])));
    bufp->fullBit(oldp+9785,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x26U] >> 1U))));
    bufp->fullBit(oldp+9786,((1U & (~ (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+9787,((((~ (IData)((0x3ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x14U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x14U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x26U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9788,((1U & (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+9789,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x27U])));
    bufp->fullBit(oldp+9790,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x27U] >> 1U))));
    bufp->fullBit(oldp+9791,((1U & (~ (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+9792,((((~ (IData)((0x1ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x15U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x15U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x27U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9793,((1U & (IData)((0x1fffffffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU))))));
    bufp->fullBit(oldp+9794,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [3U])));
    bufp->fullBit(oldp+9795,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+9796,((1U & (~ (IData)((0x1fffffffffff8000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xfU)))))));
    bufp->fullBit(oldp+9797,((((~ (IData)((0x1fffffffffff8000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xfU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffff8000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xfU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9798,((1U & (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+9799,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x28U])));
    bufp->fullBit(oldp+9800,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x28U] >> 1U))));
    bufp->fullBit(oldp+9801,((1U & (~ (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+9802,((((~ (IData)((0xffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x16U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x16U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x28U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9803,((1U & (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+9804,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x29U])));
    bufp->fullBit(oldp+9805,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x29U] >> 1U))));
    bufp->fullBit(oldp+9806,((1U & (~ (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+9807,((((~ (IData)((0x7fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x17U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x17U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x29U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9808,((1U & (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+9809,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x2aU])));
    bufp->fullBit(oldp+9810,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x2aU] >> 1U))));
    bufp->fullBit(oldp+9811,((1U & (~ (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+9812,((((~ (IData)((0x3fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x18U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x18U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x2aU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9813,((1U & (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+9814,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x2bU])));
    bufp->fullBit(oldp+9815,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x2bU] >> 1U))));
    bufp->fullBit(oldp+9816,((1U & (~ (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+9817,((((~ (IData)((0x1fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x19U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x19U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x2bU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9818,((1U & (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+9819,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x2cU])));
    bufp->fullBit(oldp+9820,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x2cU] >> 1U))));
    bufp->fullBit(oldp+9821,((1U & (~ (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+9822,((((~ (IData)((0xfffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1aU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1aU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x2cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9823,((1U & (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+9824,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x2dU])));
    bufp->fullBit(oldp+9825,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x2dU] >> 1U))));
    bufp->fullBit(oldp+9826,((1U & (~ (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+9827,((((~ (IData)((0x7ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1bU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1bU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x2dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9828,((1U & (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+9829,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x2eU])));
    bufp->fullBit(oldp+9830,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x2eU] >> 1U))));
    bufp->fullBit(oldp+9831,((1U & (~ (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+9832,((((~ (IData)((0x3ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1cU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1cU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x2eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9833,((1U & (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+9834,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x2fU])));
    bufp->fullBit(oldp+9835,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x2fU] >> 1U))));
    bufp->fullBit(oldp+9836,((1U & (~ (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+9837,((((~ (IData)((0x1ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x2fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9838,((1U & (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+9839,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x30U])));
    bufp->fullBit(oldp+9840,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x30U] >> 1U))));
    bufp->fullBit(oldp+9841,((1U & (~ (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+9842,((((~ (IData)((0xffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x30U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9843,((1U & (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+9844,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x31U])));
    bufp->fullBit(oldp+9845,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x31U] >> 1U))));
    bufp->fullBit(oldp+9846,((1U & (~ (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+9847,((((~ (IData)((0x7fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x31U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9848,((1U & (IData)((0xfffffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU))))));
    bufp->fullBit(oldp+9849,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [4U])));
    bufp->fullBit(oldp+9850,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+9851,((1U & (~ (IData)((0xfffffffffffc000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xeU)))))));
    bufp->fullBit(oldp+9852,((((~ (IData)((0xfffffffffffc000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xeU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffffc000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xeU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9853,((1U & (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+9854,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x32U])));
    bufp->fullBit(oldp+9855,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x32U] >> 1U))));
    bufp->fullBit(oldp+9856,((1U & (~ (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+9857,((((~ (IData)((0x3fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x20U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x20U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x32U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9858,((1U & (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+9859,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x33U])));
    bufp->fullBit(oldp+9860,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x33U] >> 1U))));
    bufp->fullBit(oldp+9861,((1U & (~ (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+9862,((((~ (IData)((0x1fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x33U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9863,((1U & (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+9864,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x34U])));
    bufp->fullBit(oldp+9865,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x34U] >> 1U))));
    bufp->fullBit(oldp+9866,((1U & (~ (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+9867,((((~ (IData)((0xfffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x34U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9868,((1U & (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+9869,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x35U])));
    bufp->fullBit(oldp+9870,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x35U] >> 1U))));
    bufp->fullBit(oldp+9871,((1U & (~ (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+9872,((((~ (IData)((0x7ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x35U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9873,((1U & (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+9874,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x36U])));
    bufp->fullBit(oldp+9875,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x36U] >> 1U))));
    bufp->fullBit(oldp+9876,((1U & (~ (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+9877,((((~ (IData)((0x3ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x36U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9878,((1U & (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+9879,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x37U])));
    bufp->fullBit(oldp+9880,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x37U] >> 1U))));
    bufp->fullBit(oldp+9881,((1U & (~ (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+9882,((((~ (IData)((0x1ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x37U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9883,((1U & (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+9884,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x38U])));
    bufp->fullBit(oldp+9885,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x38U] >> 1U))));
    bufp->fullBit(oldp+9886,((1U & (~ (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+9887,((((~ (IData)((0xffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x26U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x26U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x38U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9888,((1U & (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+9889,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x39U])));
    bufp->fullBit(oldp+9890,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x39U] >> 1U))));
    bufp->fullBit(oldp+9891,((1U & (~ (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+9892,((((~ (IData)((0x7fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x27U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x27U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x39U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9893,((1U & (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+9894,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x3aU])));
    bufp->fullBit(oldp+9895,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x3aU] >> 1U))));
    bufp->fullBit(oldp+9896,((1U & (~ (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+9897,((((~ (IData)((0x3fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x28U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x28U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x3aU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9898,((1U & (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+9899,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x3bU])));
    bufp->fullBit(oldp+9900,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x3bU] >> 1U))));
    bufp->fullBit(oldp+9901,((1U & (~ (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+9902,((((~ (IData)((0x1fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x29U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x29U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x3bU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9903,((1U & (IData)((0x7ffffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU))))));
    bufp->fullBit(oldp+9904,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [5U])));
    bufp->fullBit(oldp+9905,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+9906,((1U & (~ (IData)((0x7ffffffffffe000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xdU)))))));
    bufp->fullBit(oldp+9907,((((~ (IData)((0x7ffffffffffe000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xdU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffe000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xdU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9908,((1U & (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+9909,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x3cU])));
    bufp->fullBit(oldp+9910,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x3cU] >> 1U))));
    bufp->fullBit(oldp+9911,((1U & (~ (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+9912,((((~ (IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2aU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfULL & 
                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2aU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9913,((1U & (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU))))));
    bufp->fullBit(oldp+9914,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x3dU])));
    bufp->fullBit(oldp+9915,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x3dU] >> 1U))));
    bufp->fullBit(oldp+9916,((1U & (~ (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+9917,((((~ (IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((7ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9918,((1U & (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU))))));
    bufp->fullBit(oldp+9919,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x3eU])));
    bufp->fullBit(oldp+9920,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x3eU] >> 1U))));
    bufp->fullBit(oldp+9921,((1U & (~ (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+9922,((((~ (IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((3ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9923,((1U & (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU))))));
    bufp->fullBit(oldp+9924,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [0x3fU])));
    bufp->fullBit(oldp+9925,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [0x3fU] >> 1U))));
    bufp->fullBit(oldp+9926,((1U & (~ (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+9927,((((~ (IData)((1ULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           >> 0x2dU) 
                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x))) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [0x3fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9928,((1U & (IData)((0x3fffffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU))))));
    bufp->fullBit(oldp+9929,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [6U])));
    bufp->fullBit(oldp+9930,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+9931,((1U & (~ (IData)((0x3fffffffffff000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xcU)))))));
    bufp->fullBit(oldp+9932,((((~ (IData)((0x3fffffffffff000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xcU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3fffffffffff000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xcU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9933,((1U & (IData)((0x1fffffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU))))));
    bufp->fullBit(oldp+9934,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [7U])));
    bufp->fullBit(oldp+9935,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+9936,((1U & (~ (IData)((0x1fffffffffff800ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xbU)))))));
    bufp->fullBit(oldp+9937,((((~ (IData)((0x1fffffffffff800ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xbU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1fffffffffff800ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xbU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9938,((1U & (IData)((0xfffffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU))))));
    bufp->fullBit(oldp+9939,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [8U])));
    bufp->fullBit(oldp+9940,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+9941,((1U & (~ (IData)((0xfffffffffffc00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xaU)))))));
    bufp->fullBit(oldp+9942,((((~ (IData)((0xfffffffffffc00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xaU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffffc00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xaU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [8U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9943,((1U & (IData)((0x7ffffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U))))));
    bufp->fullBit(oldp+9944,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                              [9U])));
    bufp->fullBit(oldp+9945,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+9946,((1U & (~ (IData)((0x7ffffffffffe00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 9U)))))));
    bufp->fullBit(oldp+9947,((((~ (IData)((0x7ffffffffffe00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 9U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffffe00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 9U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                      [9U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__CarrySig
                                       [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9948,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+9949,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                            >> 0x12U)))));
    bufp->fullCData(oldp+9950,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x13U)))),3);
    bufp->fullQData(oldp+9951,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                << 0x14U)),64);
    bufp->fullQData(oldp+9953,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+9955,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x) 
                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+9956,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+9957,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+9958,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+9959,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x14U)))));
    bufp->fullBit(oldp+9960,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x14U))))));
    bufp->fullBit(oldp+9961,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 0x14U))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                           << 0x14U)) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+9962,((1U & (IData)((0x3ffffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU))))));
    bufp->fullBit(oldp+9963,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                              [0xaU])));
    bufp->fullBit(oldp+9964,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+9965,((1U & (~ (IData)((0x3ffffffffffc00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xaU)))))));
    bufp->fullBit(oldp+9966,((((~ (IData)((0x3ffffffffffc00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xaU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffffffc00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xaU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                      [0xaU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9967,((1U & (IData)((0x1ffffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U))))));
    bufp->fullBit(oldp+9968,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                              [0xbU])));
    bufp->fullBit(oldp+9969,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+9970,((1U & (~ (IData)((0x1ffffffffffe00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 9U)))))));
    bufp->fullBit(oldp+9971,((((~ (IData)((0x1ffffffffffe00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 9U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffffffe00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 9U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                      [0xbU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9972,((1U & (IData)((0xfffffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U))))));
    bufp->fullBit(oldp+9973,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                              [0xcU])));
    bufp->fullBit(oldp+9974,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                    [0xcU] >> 1U))));
    bufp->fullBit(oldp+9975,((1U & (~ (IData)((0xfffffffffff00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 8U)))))));
    bufp->fullBit(oldp+9976,((((~ (IData)((0xfffffffffff00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 8U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffff00ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 8U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                      [0xcU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9977,((1U & (IData)((0x7ffffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U))))));
    bufp->fullBit(oldp+9978,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                              [0xdU])));
    bufp->fullBit(oldp+9979,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                    [0xdU] >> 1U))));
    bufp->fullBit(oldp+9980,((1U & (~ (IData)((0x7ffffffffff80ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 7U)))))));
    bufp->fullBit(oldp+9981,((((~ (IData)((0x7ffffffffff80ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 7U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7ffffffffff80ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 7U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                      [0xdU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9982,((1U & (IData)((0x3ffffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U))))));
    bufp->fullBit(oldp+9983,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                              [0xeU])));
    bufp->fullBit(oldp+9984,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                    [0xeU] >> 1U))));
    bufp->fullBit(oldp+9985,((1U & (~ (IData)((0x3ffffffffffc0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 6U)))))));
    bufp->fullBit(oldp+9986,((((~ (IData)((0x3ffffffffffc0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 6U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x3ffffffffffc0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 6U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                      [0xeU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9987,((1U & (IData)((0x1ffffffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U))))));
    bufp->fullBit(oldp+9988,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                              [0xfU])));
    bufp->fullBit(oldp+9989,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                    [0xfU] >> 1U))));
    bufp->fullBit(oldp+9990,((1U & (~ (IData)((0x1ffffffffffe0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 5U)))))));
    bufp->fullBit(oldp+9991,((((~ (IData)((0x1ffffffffffe0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 5U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x1ffffffffffe0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 5U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                      [0xfU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9992,((1U & (IData)((0xfffffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U))))));
    bufp->fullBit(oldp+9993,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                              [0x10U])));
    bufp->fullBit(oldp+9994,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                    [0x10U] >> 1U))));
    bufp->fullBit(oldp+9995,((1U & (~ (IData)((0xfffffffffff0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U)))))));
    bufp->fullBit(oldp+9996,((((~ (IData)((0xfffffffffff0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xfffffffffff0ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                      [0x10U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+9997,((1U & (IData)((0x7ffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))))));
    bufp->fullBit(oldp+9998,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                              [0x11U])));
    bufp->fullBit(oldp+9999,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                    [0x11U] >> 1U))));
    bufp->fullBit(oldp+10000,((1U & (~ (IData)((0x7ffffffffff8ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 3U)))))));
    bufp->fullBit(oldp+10001,((((~ (IData)((0x7ffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10002,((1U & (IData)((0x3ffffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
    bufp->fullBit(oldp+10003,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+10004,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+10005,((1U & (~ (IData)((0x3ffffffffffcULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 2U)))))));
    bufp->fullBit(oldp+10006,((((~ (IData)((0x3ffffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10007,((1U & (IData)((0x1ffffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
    bufp->fullBit(oldp+10008,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+10009,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+10010,((1U & (~ (IData)((0x1ffffffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
    bufp->fullBit(oldp+10011,((((~ (IData)((0x1ffffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10012,((1U & (IData)((0x7ffffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))))));
    bufp->fullBit(oldp+10013,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+10014,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+10015,((1U & (~ (IData)((0x7ffffffffff80000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x13U)))))));
    bufp->fullBit(oldp+10016,((((~ (IData)((0x7ffffffffff80000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffff80000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10017,((1U & (IData)((0xfffffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+10018,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+10019,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+10020,((1U & (~ (IData)((0xfffffffffffULL 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+10021,((((~ (IData)((0xfffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10022,((1U & (IData)((0x7ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
    bufp->fullBit(oldp+10023,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+10024,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+10025,((1U & (~ (IData)((0x7ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+10026,((((~ (IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10027,((1U & (IData)((0x3ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
    bufp->fullBit(oldp+10028,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+10029,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+10030,((1U & (~ (IData)((0x3ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+10031,((((~ (IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10032,((1U & (IData)((0x1ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
    bufp->fullBit(oldp+10033,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+10034,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+10035,((1U & (~ (IData)((0x1ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+10036,((((~ (IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10037,((1U & (IData)((0xffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
    bufp->fullBit(oldp+10038,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+10039,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+10040,((1U & (~ (IData)((0xffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+10041,((((~ (IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10042,((1U & (IData)((0x7fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
    bufp->fullBit(oldp+10043,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+10044,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+10045,((1U & (~ (IData)((0x7fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+10046,((((~ (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10047,((1U & (IData)((0x3fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+10048,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+10049,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+10050,((1U & (~ (IData)((0x3fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+10051,((((~ (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10052,((1U & (IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+10053,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+10054,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+10055,((1U & (~ (IData)((0x1fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+10056,((((~ (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10057,((1U & (IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+10058,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+10059,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+10060,((1U & (~ (IData)((0xfffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+10061,((((~ (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10062,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+10063,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+10064,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+10065,((1U & (~ (IData)((0x7ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+10066,((((~ (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10067,((1U & (IData)((0x3ffffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))))));
    bufp->fullBit(oldp+10068,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+10069,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+10070,((1U & (~ (IData)((0x3ffffffffffc0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))))));
    bufp->fullBit(oldp+10071,((((~ (IData)((0x3ffffffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10072,((1U & (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+10073,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+10074,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+10075,((1U & (~ (IData)((0x3ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+10076,((((~ (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10077,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+10078,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+10079,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+10080,((1U & (~ (IData)((0x1ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+10081,((((~ (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10082,((1U & (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+10083,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+10084,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+10085,((1U & (~ (IData)((0xffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+10086,((((~ (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10087,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+10088,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+10089,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+10090,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+10091,((((~ (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10092,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+10093,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+10094,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+10095,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+10096,((((~ (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10097,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+10098,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+10099,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+10100,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+10101,((((~ (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10102,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+10103,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+10104,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+10105,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+10106,((((~ (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10107,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+10108,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+10109,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+10110,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+10111,((((~ (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10112,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+10113,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+10114,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+10115,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+10116,((((~ (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10117,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+10118,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+10119,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+10120,((1U & (~ (IData)((0x1ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+10121,((((~ (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10122,((1U & (IData)((0x1ffffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))))));
    bufp->fullBit(oldp+10123,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+10124,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+10125,((1U & (~ (IData)((0x1ffffffffffe0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x11U)))))));
    bufp->fullBit(oldp+10126,((((~ (IData)((0x1ffffffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10127,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+10128,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+10129,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+10130,((1U & (~ (IData)((0xffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+10131,((((~ (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10132,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+10133,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+10134,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+10135,((1U & (~ (IData)((0x7fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+10136,((((~ (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10137,((1U & (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+10138,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+10139,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+10140,((1U & (~ (IData)((0x3fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+10141,((((~ (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10142,((1U & (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+10143,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+10144,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+10145,((1U & (~ (IData)((0x1fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+10146,((((~ (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10147,((1U & (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+10148,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+10149,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+10150,((1U & (~ (IData)((0xfffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+10151,((((~ (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10152,((1U & (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+10153,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+10154,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+10155,((1U & (~ (IData)((0x7ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+10156,((((~ (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10157,((1U & (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+10158,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+10159,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+10160,((1U & (~ (IData)((0x3ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+10161,((((~ (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10162,((1U & (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+10163,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+10164,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+10165,((1U & (~ (IData)((0x1ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+10166,((((~ (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10167,((1U & (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+10168,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+10169,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+10170,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+10171,((((~ (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10172,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
    bufp->fullBit(oldp+10173,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+10174,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x31U] >> 1U))));
    bufp->fullBit(oldp+10175,((1U & (~ (IData)((0x7fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+10176,((((~ (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10177,((1U & (IData)((0xfffffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))))));
    bufp->fullBit(oldp+10178,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [4U])));
    bufp->fullBit(oldp+10179,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [4U] >> 1U))));
    bufp->fullBit(oldp+10180,((1U & (~ (IData)((0xfffffffffff0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))))));
    bufp->fullBit(oldp+10181,((((~ (IData)((0xfffffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [4U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10182,((1U & (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
    bufp->fullBit(oldp+10183,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x32U])));
    bufp->fullBit(oldp+10184,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x32U] >> 1U))));
    bufp->fullBit(oldp+10185,((1U & (~ (IData)((0x3fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+10186,((((~ (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10187,((1U & (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))))));
    bufp->fullBit(oldp+10188,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x33U])));
    bufp->fullBit(oldp+10189,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x33U] >> 1U))));
    bufp->fullBit(oldp+10190,((1U & (~ (IData)((0x1fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+10191,((((~ (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10192,((1U & (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))))));
    bufp->fullBit(oldp+10193,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x34U])));
    bufp->fullBit(oldp+10194,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x34U] >> 1U))));
    bufp->fullBit(oldp+10195,((1U & (~ (IData)((0xfffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+10196,((((~ (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10197,((1U & (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))))));
    bufp->fullBit(oldp+10198,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x35U])));
    bufp->fullBit(oldp+10199,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x35U] >> 1U))));
    bufp->fullBit(oldp+10200,((1U & (~ (IData)((0x7ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+10201,((((~ (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10202,((1U & (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))))));
    bufp->fullBit(oldp+10203,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x36U])));
    bufp->fullBit(oldp+10204,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x36U] >> 1U))));
    bufp->fullBit(oldp+10205,((1U & (~ (IData)((0x3ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+10206,((((~ (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10207,((1U & (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x23U))))));
    bufp->fullBit(oldp+10208,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x37U])));
    bufp->fullBit(oldp+10209,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x37U] >> 1U))));
    bufp->fullBit(oldp+10210,((1U & (~ (IData)((0x1ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+10211,((((~ (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10212,((1U & (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x24U))))));
    bufp->fullBit(oldp+10213,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x38U])));
    bufp->fullBit(oldp+10214,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x38U] >> 1U))));
    bufp->fullBit(oldp+10215,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+10216,((((~ (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10217,((1U & (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x25U))))));
    bufp->fullBit(oldp+10218,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x39U])));
    bufp->fullBit(oldp+10219,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x39U] >> 1U))));
    bufp->fullBit(oldp+10220,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+10221,((((~ (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10222,((1U & (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x26U))))));
    bufp->fullBit(oldp+10223,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x3aU])));
    bufp->fullBit(oldp+10224,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x3aU] >> 1U))));
    bufp->fullBit(oldp+10225,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+10226,((((~ (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10227,((1U & (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x27U))))));
    bufp->fullBit(oldp+10228,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x3bU])));
    bufp->fullBit(oldp+10229,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x3bU] >> 1U))));
    bufp->fullBit(oldp+10230,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+10231,((((~ (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10232,((1U & (IData)((0x7ffffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))))));
    bufp->fullBit(oldp+10233,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [5U])));
    bufp->fullBit(oldp+10234,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [5U] >> 1U))));
    bufp->fullBit(oldp+10235,((1U & (~ (IData)((0x7ffffffffff8000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xfU)))))));
    bufp->fullBit(oldp+10236,((((~ (IData)((0x7ffffffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [5U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10237,((1U & (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x28U))))));
    bufp->fullBit(oldp+10238,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x3cU])));
    bufp->fullBit(oldp+10239,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x3cU] >> 1U))));
    bufp->fullBit(oldp+10240,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U)))))));
    bufp->fullBit(oldp+10241,((((~ (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10242,((1U & (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x29U))))));
    bufp->fullBit(oldp+10243,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x3dU])));
    bufp->fullBit(oldp+10244,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x3dU] >> 1U))));
    bufp->fullBit(oldp+10245,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U)))))));
    bufp->fullBit(oldp+10246,((((~ (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x29U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10247,((1U & (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2aU))))));
    bufp->fullBit(oldp+10248,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x3eU])));
    bufp->fullBit(oldp+10249,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x3eU] >> 1U))));
    bufp->fullBit(oldp+10250,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2aU)))))));
    bufp->fullBit(oldp+10251,((((~ (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10252,((1U & (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2bU))))));
    bufp->fullBit(oldp+10253,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [0x3fU])));
    bufp->fullBit(oldp+10254,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [0x3fU] >> 1U))));
    bufp->fullBit(oldp+10255,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU)))))));
    bufp->fullBit(oldp+10256,((((~ (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2bU) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x))) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10257,((1U & (IData)((0x3ffffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))))));
    bufp->fullBit(oldp+10258,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [6U])));
    bufp->fullBit(oldp+10259,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [6U] >> 1U))));
    bufp->fullBit(oldp+10260,((1U & (~ (IData)((0x3ffffffffffc000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xeU)))))));
    bufp->fullBit(oldp+10261,((((~ (IData)((0x3ffffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [6U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10262,((1U & (IData)((0x1ffffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))))));
    bufp->fullBit(oldp+10263,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [7U])));
    bufp->fullBit(oldp+10264,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [7U] >> 1U))));
    bufp->fullBit(oldp+10265,((1U & (~ (IData)((0x1ffffffffffe000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xdU)))))));
    bufp->fullBit(oldp+10266,((((~ (IData)((0x1ffffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [7U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10267,((1U & (IData)((0xfffffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))))));
    bufp->fullBit(oldp+10268,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [8U])));
    bufp->fullBit(oldp+10269,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [8U] >> 1U))));
    bufp->fullBit(oldp+10270,((1U & (~ (IData)((0xfffffffffff000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xcU)))))));
    bufp->fullBit(oldp+10271,((((~ (IData)((0xfffffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10272,((1U & (IData)((0x7ffffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))))));
    bufp->fullBit(oldp+10273,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                               [9U])));
    bufp->fullBit(oldp+10274,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                     [9U] >> 1U))));
    bufp->fullBit(oldp+10275,((1U & (~ (IData)((0x7ffffffffff800ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xbU)))))));
    bufp->fullBit(oldp+10276,((((~ (IData)((0x7ffffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__CarrySig
                                        [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10277,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+10278,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x14U)))));
    bufp->fullCData(oldp+10279,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x15U)))),3);
    bufp->fullQData(oldp+10280,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                 << 0x16U)),64);
    bufp->fullQData(oldp+10282,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+10284,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+10285,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+10286,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+10287,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+10288,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x16U)))));
    bufp->fullBit(oldp+10289,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))))));
    bufp->fullBit(oldp+10290,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x16U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x16U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+10291,((1U & (IData)((0x3ffffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))))));
    bufp->fullBit(oldp+10292,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0xaU])));
    bufp->fullBit(oldp+10293,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0xaU] >> 1U))));
    bufp->fullBit(oldp+10294,((1U & (~ (IData)((0x3ffffffffff000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xcU)))))));
    bufp->fullBit(oldp+10295,((((~ (IData)((0x3ffffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10296,((1U & (IData)((0x1ffffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))))));
    bufp->fullBit(oldp+10297,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0xbU])));
    bufp->fullBit(oldp+10298,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0xbU] >> 1U))));
    bufp->fullBit(oldp+10299,((1U & (~ (IData)((0x1ffffffffff800ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xbU)))))));
    bufp->fullBit(oldp+10300,((((~ (IData)((0x1ffffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10301,((1U & (IData)((0xffffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))))));
    bufp->fullBit(oldp+10302,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0xcU])));
    bufp->fullBit(oldp+10303,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0xcU] >> 1U))));
    bufp->fullBit(oldp+10304,((1U & (~ (IData)((0xffffffffffc00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xaU)))))));
    bufp->fullBit(oldp+10305,((((~ (IData)((0xffffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10306,((1U & (IData)((0x7fffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))))));
    bufp->fullBit(oldp+10307,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0xdU])));
    bufp->fullBit(oldp+10308,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0xdU] >> 1U))));
    bufp->fullBit(oldp+10309,((1U & (~ (IData)((0x7fffffffffe00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 9U)))))));
    bufp->fullBit(oldp+10310,((((~ (IData)((0x7fffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10311,((1U & (IData)((0x3ffffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))))));
    bufp->fullBit(oldp+10312,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0xeU])));
    bufp->fullBit(oldp+10313,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0xeU] >> 1U))));
    bufp->fullBit(oldp+10314,((1U & (~ (IData)((0x3ffffffffff00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 8U)))))));
    bufp->fullBit(oldp+10315,((((~ (IData)((0x3ffffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10316,((1U & (IData)((0x1ffffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))))));
    bufp->fullBit(oldp+10317,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0xfU])));
    bufp->fullBit(oldp+10318,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0xfU] >> 1U))));
    bufp->fullBit(oldp+10319,((1U & (~ (IData)((0x1ffffffffff80ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 7U)))))));
    bufp->fullBit(oldp+10320,((((~ (IData)((0x1ffffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10321,((1U & (IData)((0xffffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))))));
    bufp->fullBit(oldp+10322,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x10U])));
    bufp->fullBit(oldp+10323,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x10U] >> 1U))));
    bufp->fullBit(oldp+10324,((1U & (~ (IData)((0xffffffffffc0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 6U)))))));
    bufp->fullBit(oldp+10325,((((~ (IData)((0xffffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10326,((1U & (IData)((0x7fffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))))));
    bufp->fullBit(oldp+10327,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x11U])));
    bufp->fullBit(oldp+10328,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x11U] >> 1U))));
    bufp->fullBit(oldp+10329,((1U & (~ (IData)((0x7fffffffffe0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 5U)))))));
    bufp->fullBit(oldp+10330,((((~ (IData)((0x7fffffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10331,((1U & (IData)((0x3ffffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))))));
    bufp->fullBit(oldp+10332,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+10333,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+10334,((1U & (~ (IData)((0x3ffffffffff0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 4U)))))));
    bufp->fullBit(oldp+10335,((((~ (IData)((0x3ffffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10336,((1U & (IData)((0x1ffffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))))));
    bufp->fullBit(oldp+10337,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+10338,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+10339,((1U & (~ (IData)((0x1ffffffffff8ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 3U)))))));
    bufp->fullBit(oldp+10340,((((~ (IData)((0x1ffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10341,((1U & (IData)((0x7fffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))))));
    bufp->fullBit(oldp+10342,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+10343,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+10344,((1U & (~ (IData)((0x7fffffffffe00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x15U)))))));
    bufp->fullBit(oldp+10345,((((~ (IData)((0x7fffffffffe00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x15U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffe00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x15U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10346,((1U & (IData)((0xffffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
    bufp->fullBit(oldp+10347,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+10348,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+10349,((1U & (~ (IData)((0xffffffffffcULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 2U)))))));
    bufp->fullBit(oldp+10350,((((~ (IData)((0xffffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10351,((1U & (IData)((0x7fffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
    bufp->fullBit(oldp+10352,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+10353,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+10354,((1U & (~ (IData)((0x7fffffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
    bufp->fullBit(oldp+10355,((((~ (IData)((0x7fffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10356,((1U & (IData)((0x3ffffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+10357,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+10358,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+10359,((1U & (~ (IData)((0x3ffffffffffULL 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+10360,((((~ (IData)((0x3ffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10361,((1U & (IData)((0x1ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
    bufp->fullBit(oldp+10362,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+10363,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+10364,((1U & (~ (IData)((0x1ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+10365,((((~ (IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10366,((1U & (IData)((0xffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
    bufp->fullBit(oldp+10367,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+10368,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+10369,((1U & (~ (IData)((0xffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+10370,((((~ (IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10371,((1U & (IData)((0x7fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
    bufp->fullBit(oldp+10372,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+10373,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+10374,((1U & (~ (IData)((0x7fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+10375,((((~ (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10376,((1U & (IData)((0x3fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
    bufp->fullBit(oldp+10377,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+10378,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+10379,((1U & (~ (IData)((0x3fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+10380,((((~ (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10381,((1U & (IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
    bufp->fullBit(oldp+10382,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+10383,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+10384,((1U & (~ (IData)((0x1fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+10385,((((~ (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10386,((1U & (IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+10387,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+10388,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+10389,((1U & (~ (IData)((0xfffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+10390,((((~ (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10391,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+10392,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+10393,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+10394,((1U & (~ (IData)((0x7ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+10395,((((~ (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10396,((1U & (IData)((0x3ffffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))))));
    bufp->fullBit(oldp+10397,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+10398,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+10399,((1U & (~ (IData)((0x3ffffffffff00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x14U)))))));
    bufp->fullBit(oldp+10400,((((~ (IData)((0x3ffffffffff00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x14U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffff00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x14U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10401,((1U & (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+10402,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+10403,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+10404,((1U & (~ (IData)((0x3ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+10405,((((~ (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10406,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+10407,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+10408,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+10409,((1U & (~ (IData)((0x1ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+10410,((((~ (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10411,((1U & (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+10412,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+10413,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+10414,((1U & (~ (IData)((0xffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+10415,((((~ (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10416,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+10417,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+10418,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+10419,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+10420,((((~ (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10421,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+10422,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+10423,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+10424,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+10425,((((~ (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10426,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+10427,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+10428,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+10429,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+10430,((((~ (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10431,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+10432,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+10433,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+10434,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+10435,((((~ (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10436,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+10437,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+10438,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+10439,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+10440,((((~ (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10441,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+10442,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+10443,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+10444,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+10445,((((~ (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10446,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+10447,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+10448,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+10449,((1U & (~ (IData)((0x1ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+10450,((((~ (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10451,((1U & (IData)((0x1ffffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))))));
    bufp->fullBit(oldp+10452,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+10453,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+10454,((1U & (~ (IData)((0x1ffffffffff80000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x13U)))))));
    bufp->fullBit(oldp+10455,((((~ (IData)((0x1ffffffffff80000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffff80000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10456,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+10457,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+10458,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+10459,((1U & (~ (IData)((0xffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+10460,((((~ (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10461,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+10462,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+10463,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+10464,((1U & (~ (IData)((0x7fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+10465,((((~ (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10466,((1U & (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+10467,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+10468,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+10469,((1U & (~ (IData)((0x3fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+10470,((((~ (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10471,((1U & (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+10472,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+10473,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+10474,((1U & (~ (IData)((0x1fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+10475,((((~ (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10476,((1U & (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+10477,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+10478,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+10479,((1U & (~ (IData)((0xfffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+10480,((((~ (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10481,((1U & (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+10482,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+10483,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+10484,((1U & (~ (IData)((0x7ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+10485,((((~ (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10486,((1U & (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+10487,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+10488,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+10489,((1U & (~ (IData)((0x3ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+10490,((((~ (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10491,((1U & (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+10492,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+10493,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+10494,((1U & (~ (IData)((0x1ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+10495,((((~ (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10496,((1U & (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+10497,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+10498,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+10499,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+10500,((((~ (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10501,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+10502,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+10503,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x31U] >> 1U))));
    bufp->fullBit(oldp+10504,((1U & (~ (IData)((0x7fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+10505,((((~ (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10506,((1U & (IData)((0xffffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))))));
    bufp->fullBit(oldp+10507,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [4U])));
    bufp->fullBit(oldp+10508,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [4U] >> 1U))));
    bufp->fullBit(oldp+10509,((1U & (~ (IData)((0xffffffffffc0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))))));
    bufp->fullBit(oldp+10510,((((~ (IData)((0xffffffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [4U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10511,((1U & (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+10512,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x32U])));
    bufp->fullBit(oldp+10513,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x32U] >> 1U))));
    bufp->fullBit(oldp+10514,((1U & (~ (IData)((0x3fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+10515,((((~ (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10516,((1U & (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
    bufp->fullBit(oldp+10517,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x33U])));
    bufp->fullBit(oldp+10518,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x33U] >> 1U))));
    bufp->fullBit(oldp+10519,((1U & (~ (IData)((0x1fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+10520,((((~ (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10521,((1U & (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
    bufp->fullBit(oldp+10522,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x34U])));
    bufp->fullBit(oldp+10523,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x34U] >> 1U))));
    bufp->fullBit(oldp+10524,((1U & (~ (IData)((0xfffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+10525,((((~ (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10526,((1U & (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))))));
    bufp->fullBit(oldp+10527,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x35U])));
    bufp->fullBit(oldp+10528,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x35U] >> 1U))));
    bufp->fullBit(oldp+10529,((1U & (~ (IData)((0x7ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+10530,((((~ (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10531,((1U & (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))))));
    bufp->fullBit(oldp+10532,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x36U])));
    bufp->fullBit(oldp+10533,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x36U] >> 1U))));
    bufp->fullBit(oldp+10534,((1U & (~ (IData)((0x3ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+10535,((((~ (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10536,((1U & (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))))));
    bufp->fullBit(oldp+10537,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x37U])));
    bufp->fullBit(oldp+10538,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x37U] >> 1U))));
    bufp->fullBit(oldp+10539,((1U & (~ (IData)((0x1ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+10540,((((~ (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10541,((1U & (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))))));
    bufp->fullBit(oldp+10542,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x38U])));
    bufp->fullBit(oldp+10543,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x38U] >> 1U))));
    bufp->fullBit(oldp+10544,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+10545,((((~ (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10546,((1U & (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x23U))))));
    bufp->fullBit(oldp+10547,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x39U])));
    bufp->fullBit(oldp+10548,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x39U] >> 1U))));
    bufp->fullBit(oldp+10549,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+10550,((((~ (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10551,((1U & (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x24U))))));
    bufp->fullBit(oldp+10552,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x3aU])));
    bufp->fullBit(oldp+10553,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x3aU] >> 1U))));
    bufp->fullBit(oldp+10554,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+10555,((((~ (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10556,((1U & (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x25U))))));
    bufp->fullBit(oldp+10557,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x3bU])));
    bufp->fullBit(oldp+10558,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x3bU] >> 1U))));
    bufp->fullBit(oldp+10559,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+10560,((((~ (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10561,((1U & (IData)((0x7fffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))))));
    bufp->fullBit(oldp+10562,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [5U])));
    bufp->fullBit(oldp+10563,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [5U] >> 1U))));
    bufp->fullBit(oldp+10564,((1U & (~ (IData)((0x7fffffffffe0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x11U)))))));
    bufp->fullBit(oldp+10565,((((~ (IData)((0x7fffffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [5U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10566,((1U & (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x26U))))));
    bufp->fullBit(oldp+10567,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x3cU])));
    bufp->fullBit(oldp+10568,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x3cU] >> 1U))));
    bufp->fullBit(oldp+10569,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+10570,((((~ (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10571,((1U & (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x27U))))));
    bufp->fullBit(oldp+10572,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x3dU])));
    bufp->fullBit(oldp+10573,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x3dU] >> 1U))));
    bufp->fullBit(oldp+10574,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+10575,((((~ (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x27U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10576,((1U & (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x28U))))));
    bufp->fullBit(oldp+10577,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x3eU])));
    bufp->fullBit(oldp+10578,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x3eU] >> 1U))));
    bufp->fullBit(oldp+10579,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U)))))));
    bufp->fullBit(oldp+10580,((((~ (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x28U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10581,((1U & (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x29U))))));
    bufp->fullBit(oldp+10582,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [0x3fU])));
    bufp->fullBit(oldp+10583,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [0x3fU] >> 1U))));
    bufp->fullBit(oldp+10584,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U)))))));
    bufp->fullBit(oldp+10585,((((~ (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x29U) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x))) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10586,((1U & (IData)((0x3ffffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))))));
    bufp->fullBit(oldp+10587,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [6U])));
    bufp->fullBit(oldp+10588,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [6U] >> 1U))));
    bufp->fullBit(oldp+10589,((1U & (~ (IData)((0x3ffffffffff0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))))));
    bufp->fullBit(oldp+10590,((((~ (IData)((0x3ffffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [6U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10591,((1U & (IData)((0x1ffffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))))));
    bufp->fullBit(oldp+10592,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [7U])));
    bufp->fullBit(oldp+10593,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [7U] >> 1U))));
    bufp->fullBit(oldp+10594,((1U & (~ (IData)((0x1ffffffffff8000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xfU)))))));
    bufp->fullBit(oldp+10595,((((~ (IData)((0x1ffffffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [7U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10596,((1U & (IData)((0xffffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))))));
    bufp->fullBit(oldp+10597,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [8U])));
    bufp->fullBit(oldp+10598,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [8U] >> 1U))));
    bufp->fullBit(oldp+10599,((1U & (~ (IData)((0xffffffffffc000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xeU)))))));
    bufp->fullBit(oldp+10600,((((~ (IData)((0xffffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10601,((1U & (IData)((0x7fffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))))));
    bufp->fullBit(oldp+10602,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                               [9U])));
    bufp->fullBit(oldp+10603,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                     [9U] >> 1U))));
    bufp->fullBit(oldp+10604,((1U & (~ (IData)((0x7fffffffffe000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xdU)))))));
    bufp->fullBit(oldp+10605,((((~ (IData)((0x7fffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__CarrySig
                                        [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10606,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+10607,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 0x16U)))));
    bufp->fullCData(oldp+10608,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x17U)))),3);
    bufp->fullQData(oldp+10609,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                 << 0x18U)),64);
    bufp->fullQData(oldp+10611,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+10613,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+10614,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+10615,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+10616,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+10617,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x18U)))));
    bufp->fullBit(oldp+10618,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))))));
    bufp->fullBit(oldp+10619,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x18U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x18U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+10620,((1U & (IData)((0x3fffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))))));
    bufp->fullBit(oldp+10621,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0xaU])));
    bufp->fullBit(oldp+10622,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0xaU] >> 1U))));
    bufp->fullBit(oldp+10623,((1U & (~ (IData)((0x3fffffffffc000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xeU)))))));
    bufp->fullBit(oldp+10624,((((~ (IData)((0x3fffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10625,((1U & (IData)((0x1fffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))))));
    bufp->fullBit(oldp+10626,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0xbU])));
    bufp->fullBit(oldp+10627,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0xbU] >> 1U))));
    bufp->fullBit(oldp+10628,((1U & (~ (IData)((0x1fffffffffe000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xdU)))))));
    bufp->fullBit(oldp+10629,((((~ (IData)((0x1fffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10630,((1U & (IData)((0xffffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))))));
    bufp->fullBit(oldp+10631,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0xcU])));
    bufp->fullBit(oldp+10632,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0xcU] >> 1U))));
    bufp->fullBit(oldp+10633,((1U & (~ (IData)((0xffffffffff000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xcU)))))));
    bufp->fullBit(oldp+10634,((((~ (IData)((0xffffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10635,((1U & (IData)((0x7fffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))))));
    bufp->fullBit(oldp+10636,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0xdU])));
    bufp->fullBit(oldp+10637,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0xdU] >> 1U))));
    bufp->fullBit(oldp+10638,((1U & (~ (IData)((0x7fffffffff800ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xbU)))))));
    bufp->fullBit(oldp+10639,((((~ (IData)((0x7fffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10640,((1U & (IData)((0x3fffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))))));
    bufp->fullBit(oldp+10641,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0xeU])));
    bufp->fullBit(oldp+10642,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0xeU] >> 1U))));
    bufp->fullBit(oldp+10643,((1U & (~ (IData)((0x3fffffffffc00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xaU)))))));
    bufp->fullBit(oldp+10644,((((~ (IData)((0x3fffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10645,((1U & (IData)((0x1fffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))))));
    bufp->fullBit(oldp+10646,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0xfU])));
    bufp->fullBit(oldp+10647,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0xfU] >> 1U))));
    bufp->fullBit(oldp+10648,((1U & (~ (IData)((0x1fffffffffe00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 9U)))))));
    bufp->fullBit(oldp+10649,((((~ (IData)((0x1fffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10650,((1U & (IData)((0xffffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))))));
    bufp->fullBit(oldp+10651,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x10U])));
    bufp->fullBit(oldp+10652,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x10U] >> 1U))));
    bufp->fullBit(oldp+10653,((1U & (~ (IData)((0xffffffffff00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 8U)))))));
    bufp->fullBit(oldp+10654,((((~ (IData)((0xffffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10655,((1U & (IData)((0x7fffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))))));
    bufp->fullBit(oldp+10656,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x11U])));
    bufp->fullBit(oldp+10657,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x11U] >> 1U))));
    bufp->fullBit(oldp+10658,((1U & (~ (IData)((0x7fffffffff80ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 7U)))))));
    bufp->fullBit(oldp+10659,((((~ (IData)((0x7fffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10660,((1U & (IData)((0x3fffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))))));
    bufp->fullBit(oldp+10661,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+10662,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+10663,((1U & (~ (IData)((0x3fffffffffc0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 6U)))))));
    bufp->fullBit(oldp+10664,((((~ (IData)((0x3fffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10665,((1U & (IData)((0x1fffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))))));
    bufp->fullBit(oldp+10666,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+10667,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+10668,((1U & (~ (IData)((0x1fffffffffe0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 5U)))))));
    bufp->fullBit(oldp+10669,((((~ (IData)((0x1fffffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10670,((1U & (IData)((0x7fffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))))));
    bufp->fullBit(oldp+10671,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+10672,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+10673,((1U & (~ (IData)((0x7fffffffff800000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x17U)))))));
    bufp->fullBit(oldp+10674,((((~ (IData)((0x7fffffffff800000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x17U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffff800000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x17U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10675,((1U & (IData)((0xffffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))))));
    bufp->fullBit(oldp+10676,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+10677,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+10678,((1U & (~ (IData)((0xffffffffff0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 4U)))))));
    bufp->fullBit(oldp+10679,((((~ (IData)((0xffffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10680,((1U & (IData)((0x7fffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))))));
    bufp->fullBit(oldp+10681,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+10682,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+10683,((1U & (~ (IData)((0x7fffffffff8ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 3U)))))));
    bufp->fullBit(oldp+10684,((((~ (IData)((0x7fffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10685,((1U & (IData)((0x3fffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
    bufp->fullBit(oldp+10686,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+10687,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+10688,((1U & (~ (IData)((0x3fffffffffcULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 2U)))))));
    bufp->fullBit(oldp+10689,((((~ (IData)((0x3fffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10690,((1U & (IData)((0x1fffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
    bufp->fullBit(oldp+10691,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+10692,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+10693,((1U & (~ (IData)((0x1fffffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
    bufp->fullBit(oldp+10694,((((~ (IData)((0x1fffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10695,((1U & (IData)((0xffffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+10696,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+10697,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+10698,((1U & (~ (IData)((0xffffffffffULL 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+10699,((((~ (IData)((0xffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10700,((1U & (IData)((0x7fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
    bufp->fullBit(oldp+10701,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+10702,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+10703,((1U & (~ (IData)((0x7fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+10704,((((~ (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10705,((1U & (IData)((0x3fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
    bufp->fullBit(oldp+10706,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+10707,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+10708,((1U & (~ (IData)((0x3fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+10709,((((~ (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10710,((1U & (IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
    bufp->fullBit(oldp+10711,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+10712,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+10713,((1U & (~ (IData)((0x1fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+10714,((((~ (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10715,((1U & (IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
    bufp->fullBit(oldp+10716,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+10717,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+10718,((1U & (~ (IData)((0xfffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+10719,((((~ (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10720,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
    bufp->fullBit(oldp+10721,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+10722,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+10723,((1U & (~ (IData)((0x7ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+10724,((((~ (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10725,((1U & (IData)((0x3fffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))))));
    bufp->fullBit(oldp+10726,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+10727,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+10728,((1U & (~ (IData)((0x3fffffffffc00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x16U)))))));
    bufp->fullBit(oldp+10729,((((~ (IData)((0x3fffffffffc00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x16U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffc00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x16U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10730,((1U & (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+10731,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+10732,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+10733,((1U & (~ (IData)((0x3ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+10734,((((~ (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10735,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+10736,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+10737,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+10738,((1U & (~ (IData)((0x1ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+10739,((((~ (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10740,((1U & (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+10741,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+10742,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+10743,((1U & (~ (IData)((0xffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+10744,((((~ (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10745,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+10746,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+10747,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+10748,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+10749,((((~ (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10750,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+10751,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+10752,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+10753,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+10754,((((~ (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10755,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+10756,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+10757,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+10758,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+10759,((((~ (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10760,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+10761,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+10762,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+10763,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+10764,((((~ (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10765,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+10766,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+10767,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+10768,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+10769,((((~ (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10770,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+10771,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+10772,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+10773,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+10774,((((~ (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10775,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+10776,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+10777,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+10778,((1U & (~ (IData)((0x1ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+10779,((((~ (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10780,((1U & (IData)((0x1fffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))))));
    bufp->fullBit(oldp+10781,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+10782,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+10783,((1U & (~ (IData)((0x1fffffffffe00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x15U)))))));
    bufp->fullBit(oldp+10784,((((~ (IData)((0x1fffffffffe00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x15U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffe00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x15U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10785,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+10786,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+10787,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+10788,((1U & (~ (IData)((0xffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+10789,((((~ (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10790,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+10791,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+10792,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+10793,((1U & (~ (IData)((0x7fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+10794,((((~ (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10795,((1U & (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+10796,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+10797,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+10798,((1U & (~ (IData)((0x3fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+10799,((((~ (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10800,((1U & (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+10801,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+10802,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+10803,((1U & (~ (IData)((0x1fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+10804,((((~ (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10805,((1U & (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+10806,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+10807,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+10808,((1U & (~ (IData)((0xfffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+10809,((((~ (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10810,((1U & (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+10811,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+10812,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+10813,((1U & (~ (IData)((0x7ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+10814,((((~ (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10815,((1U & (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+10816,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+10817,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+10818,((1U & (~ (IData)((0x3ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+10819,((((~ (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10820,((1U & (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+10821,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+10822,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+10823,((1U & (~ (IData)((0x1ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+10824,((((~ (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10825,((1U & (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+10826,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+10827,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+10828,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+10829,((((~ (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10830,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+10831,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+10832,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x31U] >> 1U))));
    bufp->fullBit(oldp+10833,((1U & (~ (IData)((0x7fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+10834,((((~ (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10835,((1U & (IData)((0xffffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))))));
    bufp->fullBit(oldp+10836,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [4U])));
    bufp->fullBit(oldp+10837,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [4U] >> 1U))));
    bufp->fullBit(oldp+10838,((1U & (~ (IData)((0xffffffffff00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x14U)))))));
    bufp->fullBit(oldp+10839,((((~ (IData)((0xffffffffff00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x14U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffff00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x14U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [4U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10840,((1U & (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+10841,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x32U])));
    bufp->fullBit(oldp+10842,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x32U] >> 1U))));
    bufp->fullBit(oldp+10843,((1U & (~ (IData)((0x3fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+10844,((((~ (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10845,((1U & (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+10846,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x33U])));
    bufp->fullBit(oldp+10847,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x33U] >> 1U))));
    bufp->fullBit(oldp+10848,((1U & (~ (IData)((0x1fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+10849,((((~ (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10850,((1U & (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+10851,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x34U])));
    bufp->fullBit(oldp+10852,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x34U] >> 1U))));
    bufp->fullBit(oldp+10853,((1U & (~ (IData)((0xfffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+10854,((((~ (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10855,((1U & (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
    bufp->fullBit(oldp+10856,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x35U])));
    bufp->fullBit(oldp+10857,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x35U] >> 1U))));
    bufp->fullBit(oldp+10858,((1U & (~ (IData)((0x7ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+10859,((((~ (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10860,((1U & (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
    bufp->fullBit(oldp+10861,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x36U])));
    bufp->fullBit(oldp+10862,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x36U] >> 1U))));
    bufp->fullBit(oldp+10863,((1U & (~ (IData)((0x3ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+10864,((((~ (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10865,((1U & (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))))));
    bufp->fullBit(oldp+10866,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x37U])));
    bufp->fullBit(oldp+10867,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x37U] >> 1U))));
    bufp->fullBit(oldp+10868,((1U & (~ (IData)((0x1ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+10869,((((~ (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10870,((1U & (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))))));
    bufp->fullBit(oldp+10871,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x38U])));
    bufp->fullBit(oldp+10872,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x38U] >> 1U))));
    bufp->fullBit(oldp+10873,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+10874,((((~ (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10875,((1U & (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))))));
    bufp->fullBit(oldp+10876,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x39U])));
    bufp->fullBit(oldp+10877,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x39U] >> 1U))));
    bufp->fullBit(oldp+10878,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+10879,((((~ (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10880,((1U & (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))))));
    bufp->fullBit(oldp+10881,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x3aU])));
    bufp->fullBit(oldp+10882,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x3aU] >> 1U))));
    bufp->fullBit(oldp+10883,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+10884,((((~ (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10885,((1U & (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x23U))))));
    bufp->fullBit(oldp+10886,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x3bU])));
    bufp->fullBit(oldp+10887,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x3bU] >> 1U))));
    bufp->fullBit(oldp+10888,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+10889,((((~ (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10890,((1U & (IData)((0x7fffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))))));
    bufp->fullBit(oldp+10891,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [5U])));
    bufp->fullBit(oldp+10892,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [5U] >> 1U))));
    bufp->fullBit(oldp+10893,((1U & (~ (IData)((0x7fffffffff80000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x13U)))))));
    bufp->fullBit(oldp+10894,((((~ (IData)((0x7fffffffff80000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffff80000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [5U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10895,((1U & (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x24U))))));
    bufp->fullBit(oldp+10896,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x3cU])));
    bufp->fullBit(oldp+10897,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x3cU] >> 1U))));
    bufp->fullBit(oldp+10898,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+10899,((((~ (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10900,((1U & (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U))))));
    bufp->fullBit(oldp+10901,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x3dU])));
    bufp->fullBit(oldp+10902,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x3dU] >> 1U))));
    bufp->fullBit(oldp+10903,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+10904,((((~ (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x25U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10905,((1U & (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x26U))))));
    bufp->fullBit(oldp+10906,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x3eU])));
    bufp->fullBit(oldp+10907,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x3eU] >> 1U))));
    bufp->fullBit(oldp+10908,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+10909,((((~ (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x26U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10910,((1U & (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x27U))))));
    bufp->fullBit(oldp+10911,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x3fU])));
    bufp->fullBit(oldp+10912,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x3fU] >> 1U))));
    bufp->fullBit(oldp+10913,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+10914,((((~ (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
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
    bufp->fullBit(oldp+10915,((1U & (IData)((0x3fffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))))));
    bufp->fullBit(oldp+10916,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [6U])));
    bufp->fullBit(oldp+10917,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [6U] >> 1U))));
    bufp->fullBit(oldp+10918,((1U & (~ (IData)((0x3fffffffffc0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))))));
    bufp->fullBit(oldp+10919,((((~ (IData)((0x3fffffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [6U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+10920,((1U & (IData)((0x1fffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))))));
    bufp->fullBit(oldp+10921,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [7U])));
    bufp->fullBit(oldp+10922,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [7U] >> 1U))));
    bufp->fullBit(oldp+10923,((1U & (~ (IData)((0x1fffffffffe0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x11U)))))));
    bufp->fullBit(oldp+10924,((((~ (IData)((0x1fffffffffe0000ULL 
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
    bufp->fullBit(oldp+10925,((1U & (IData)((0xffffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))))));
    bufp->fullBit(oldp+10926,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [8U])));
    bufp->fullBit(oldp+10927,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [8U] >> 1U))));
    bufp->fullBit(oldp+10928,((1U & (~ (IData)((0xffffffffff0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))))));
    bufp->fullBit(oldp+10929,((((~ (IData)((0xffffffffff0000ULL 
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
    bufp->fullBit(oldp+10930,((1U & (IData)((0x7fffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))))));
    bufp->fullBit(oldp+10931,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [9U])));
    bufp->fullBit(oldp+10932,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [9U] >> 1U))));
    bufp->fullBit(oldp+10933,((1U & (~ (IData)((0x7fffffffff8000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xfU)))))));
    bufp->fullBit(oldp+10934,((((~ (IData)((0x7fffffffff8000ULL 
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
}
