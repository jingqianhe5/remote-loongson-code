// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_Axi_CDC.h"

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__4(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__4\n"); );
    // Body
    if (vlSelf->__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_1) {
        if (vlSelf->__PVT__arFifo__DOT__popCC_readArbitation_fire) {
            vlSelf->__PVT__arFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__arFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__arFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray;
        }
        if (vlSelf->__PVT__wFifo__DOT__popCC_readArbitation_fire) {
            vlSelf->__PVT__wFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__wFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__wFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray;
        }
        if (vlSelf->__PVT__awFifo__DOT__popCC_readArbitation_fire) {
            vlSelf->__PVT__awFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__awFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__awFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray;
        }
        if (vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_empty)));
        }
        if (vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_empty)));
        }
        vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        if (vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_empty)));
        }
        if (vlSelf->__PVT__arFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__arFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__arFifo__DOT__popCC_popPtrPlus;
        }
        if (vlSelf->__PVT__wFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__wFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__wFifo__DOT__popCC_popPtrPlus;
        }
        if (vlSelf->__PVT__awFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__awFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__awFifo__DOT__popCC_popPtrPlus;
        }
        vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray;
        vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrGray;
        vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrGray;
    } else {
        vlSelf->__PVT__arFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__wFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__awFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid = 0U;
        vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid = 0U;
        vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid = 0U;
        vlSelf->__PVT__arFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__wFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__awFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__arFifo__DOT__popCC_popPtr = 0U;
        vlSelf->__PVT__wFifo__DOT__popCC_popPtr = 0U;
        vlSelf->__PVT__awFifo__DOT__popCC_popPtr = 0U;
        vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
    }
    vlSelf->__PVT__arFifo__DOT__popCC_popPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray = 
        (7U & (((IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr) 
                >> 1U) ^ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__wFifo__DOT__popCC_popPtrPlus = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray = (0xfU 
                                                   & (((IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__awFifo__DOT__popCC_popPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray = 
        (7U & (((IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr) 
                >> 1U) ^ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__arFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray) 
                                               == (IData)(vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__wFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__awFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray) 
                                               == (IData)(vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__5(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__5\n"); );
    // Body
    if (vlSelf->__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_1) {
        if (vlSelf->__PVT__rFifo__DOT__popCC_readArbitation_fire) {
            vlSelf->__PVT__rFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__rFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__rFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray;
        }
        if (vlSelf->__PVT__bFifo__DOT__popCC_readArbitation_fire) {
            vlSelf->__PVT__bFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__bFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__bFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray;
        }
        vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        if (vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_empty)));
        }
        if (vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_empty)));
        }
        if (vlSelf->__PVT__rFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__rFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__rFifo__DOT__popCC_popPtrPlus;
        }
        if (vlSelf->__PVT__bFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__bFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__bFifo__DOT__popCC_popPtrPlus;
        }
        vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray;
        vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray;
    } else {
        vlSelf->__PVT__rFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__bFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid = 0U;
        vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid = 0U;
        vlSelf->__PVT__bFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__rFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__rFifo__DOT__popCC_popPtr = 0U;
        vlSelf->__PVT__bFifo__DOT__popCC_popPtr = 0U;
        vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
    }
    vlSelf->__PVT__rFifo__DOT__popCC_popPtrPlus = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray = (0xfU 
                                                   & (((IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__popCC_popPtrPlus = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray = (7U 
                                                   & (((IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__rFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__bFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__6(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__6\n"); );
    // Body
    if (vlSelf->__Vdlyvset__bFifo__DOT__ram__v0) {
        vlSelf->__PVT__bFifo__DOT__ram[vlSelf->__Vdlyvdim0__bFifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__bFifo__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__rFifo__DOT__ram__v0) {
        vlSelf->__PVT__rFifo__DOT__ram[vlSelf->__Vdlyvdim0__rFifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__rFifo__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___eval_initial__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___eval_initial__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC\n"); );
    // Body
    vlSelf->__PVT__awFifo__DOT___zz_1 = 0U;
    vlSelf->__PVT__wFifo__DOT___zz_1 = 0U;
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__4(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__4\n"); );
    // Body
    if (vlSelf->__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_1) {
        if (vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_empty)));
        }
        if (vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_empty)));
        }
        if (vlSelf->__PVT__arFifo__DOT__popCC_readArbitation_fire) {
            vlSelf->__PVT__arFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__arFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__arFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray;
        }
        if (vlSelf->__PVT__wFifo__DOT__popCC_readArbitation_fire) {
            vlSelf->__PVT__wFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__wFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__wFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray;
        }
        if (vlSelf->__PVT__awFifo__DOT__popCC_readArbitation_fire) {
            vlSelf->__PVT__awFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__awFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__awFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray;
        }
        vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        if (vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_empty)));
        }
        vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        if (vlSelf->__PVT__arFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__arFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__arFifo__DOT__popCC_popPtrPlus;
        }
        if (vlSelf->__PVT__wFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__wFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__wFifo__DOT__popCC_popPtrPlus;
        }
        if (vlSelf->__PVT__awFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__awFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__awFifo__DOT__popCC_popPtrPlus;
        }
        vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrGray;
        vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrGray;
        vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray;
    } else {
        vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid = 0U;
        vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid = 0U;
        vlSelf->__PVT__arFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__wFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__awFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid = 0U;
        vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__wFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__awFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__arFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__arFifo__DOT__popCC_popPtr = 0U;
        vlSelf->__PVT__wFifo__DOT__popCC_popPtr = 0U;
        vlSelf->__PVT__awFifo__DOT__popCC_popPtr = 0U;
        vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
    }
    vlSelf->__PVT__arFifo__DOT__popCC_popPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray = 
        (7U & (((IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr) 
                >> 1U) ^ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__wFifo__DOT__popCC_popPtrPlus = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray = (0xfU 
                                                   & (((IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__awFifo__DOT__popCC_popPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray = 
        (7U & (((IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr) 
                >> 1U) ^ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__arFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtrGray) 
                                               == (IData)(vlSelf->__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__wFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__awFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtrGray) 
                                               == (IData)(vlSelf->__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__5(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__5\n"); );
    // Body
    if (vlSelf->__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_1) {
        if (vlSelf->__PVT__rFifo__DOT__popCC_readArbitation_fire) {
            vlSelf->__PVT__rFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__rFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__rFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray;
        }
        vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        if (vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid) {
            vlSelf->__PVT__bFifo__DOT__popCC_ptrToOccupancy 
                = vlSelf->__PVT__bFifo__DOT__popCC_popPtr;
            vlSelf->__PVT__bFifo__DOT__popCC_ptrToPush 
                = vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray;
        }
        vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        if (vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_empty)));
        }
        vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray;
        if (vlSelf->__PVT__bFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__bFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__bFifo__DOT__popCC_popPtrPlus;
        }
        vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray;
        if (vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready) {
            vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid 
                = (1U & (~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_empty)));
        }
    } else {
        vlSelf->__PVT__rFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__bFifo__DOT__popCC_ptrToOccupancy = 0U;
        vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid = 0U;
        vlSelf->__PVT__rFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__bFifo__DOT__popCC_ptrToPush = 0U;
        vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__bFifo__DOT__popCC_popPtr = 0U;
        vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid = 0U;
    }
    vlSelf->__PVT__bFifo__DOT__popCC_popPtrPlus = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray = (7U 
                                                   & (((IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__bFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlSelf->__PVT__bFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__6(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__6\n"); );
    // Body
    if (vlSelf->__Vdlyvset__bFifo__DOT__ram__v0) {
        vlSelf->__PVT__bFifo__DOT__ram[vlSelf->__Vdlyvdim0__bFifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__bFifo__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__10(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__10\n"); );
    // Body
    if (vlSelf->__PVT__rFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__rFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__rFifo__DOT__ram[(7U & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr))];
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__11(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__11\n"); );
    // Body
    if (vlSelf->__Vdlyvset__rFifo__DOT__ram__v0) {
        vlSelf->__PVT__rFifo__DOT__ram[vlSelf->__Vdlyvdim0__rFifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__rFifo__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__12(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__12\n"); );
    // Body
    if (vlSelf->__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_1) {
        if (vlSelf->__PVT__rFifo__DOT__popCC_addressGen_fire) {
            vlSelf->__PVT__rFifo__DOT__popCC_popPtr 
                = vlSelf->__PVT__rFifo__DOT__popCC_popPtrPlus;
        }
    } else {
        vlSelf->__PVT__rFifo__DOT__popCC_popPtr = 0U;
    }
    vlSelf->__PVT__rFifo__DOT__popCC_popPtrPlus = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray = (0xfU 
                                                   & (((IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr) 
                                                       >> 1U) 
                                                      ^ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr)));
    vlSelf->__PVT__rFifo__DOT__popCC_empty = ((IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtrGray) 
                                              == (IData)(vlSelf->__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__3(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__3\n"); );
    // Body
    vlSelf->__PVT__rFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready));
}
