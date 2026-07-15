// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_Axi_CDC.h"
#include "Vsim_top__Syms.h"

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__0(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__0\n"); );
    // Body
    vlSelf->__Vdlyvset__rFifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__bFifo__DOT__ram__v0 = 0U;
    if (vlSelf->__PVT__rFifo__DOT___zz_1) {
        vlSelf->__Vdlyvval__rFifo__DOT__ram__v0 = (
                                                   ((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rlast_reg)) 
                                                    << 0x26U) 
                                                   | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rresp_reg)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rid_reg)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rdata_reg)))));
        vlSelf->__Vdlyvset__rFifo__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__rFifo__DOT__ram__v0 = 
            (7U & (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__bFifo__DOT___zz_1) {
        vlSelf->__Vdlyvval__bFifo__DOT__ram__v0 = (
                                                   ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bresp_reg) 
                                                    << 4U) 
                                                   | (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bid_reg));
        vlSelf->__Vdlyvset__bFifo__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__bFifo__DOT__ram__v0 = 
            (3U & (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rData 
            = (3U & (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rData 
            = (7U & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rData 
            = (3U & (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__wFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__wFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__wFifo__DOT__ram[(7U & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr))];
    }
    if (vlSelf->__PVT__awFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__awFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__awFifo__DOT__ram[(3U & (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr))];
    }
    if (vlSelf->__PVT__arFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__arFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__arFifo__DOT__ram[(3U & (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr))];
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__1(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__1\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__awFifo__DOT__ram__v0;
    __Vdlyvdim0__awFifo__DOT__ram__v0 = 0;
    QData/*56:0*/ __Vdlyvval__awFifo__DOT__ram__v0;
    __Vdlyvval__awFifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__awFifo__DOT__ram__v0;
    __Vdlyvset__awFifo__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__wFifo__DOT__ram__v0;
    __Vdlyvdim0__wFifo__DOT__ram__v0 = 0;
    QData/*36:0*/ __Vdlyvval__wFifo__DOT__ram__v0;
    __Vdlyvval__wFifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__wFifo__DOT__ram__v0;
    __Vdlyvset__wFifo__DOT__ram__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__arFifo__DOT__ram__v0;
    __Vdlyvdim0__arFifo__DOT__ram__v0 = 0;
    QData/*56:0*/ __Vdlyvval__arFifo__DOT__ram__v0;
    __Vdlyvval__arFifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__arFifo__DOT__ram__v0;
    __Vdlyvset__arFifo__DOT__ram__v0 = 0;
    // Body
    __Vdlyvset__arFifo__DOT__ram__v0 = 0U;
    __Vdlyvset__wFifo__DOT__ram__v0 = 0U;
    __Vdlyvset__awFifo__DOT__ram__v0 = 0U;
    if (vlSelf->__PVT__arFifo__DOT___zz_1) {
        __Vdlyvval__arFifo__DOT__ram__v0 = (0x800000000000ULL 
                                            | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_arsize)) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_arlen)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_arid)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_araddr))))));
        __Vdlyvset__arFifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__arFifo__DOT__ram__v0 = (3U & (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__wFifo__DOT___zz_1) {
        __Vdlyvval__wFifo__DOT__ram__v0 = (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_wlast)) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_wstrb)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_wdata))));
        __Vdlyvset__wFifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__wFifo__DOT__ram__v0 = (7U & (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__awFifo__DOT___zz_1) {
        __Vdlyvval__awFifo__DOT__ram__v0 = (0x800100000000ULL 
                                            | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_awsize)) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_awlen)) 
                                                   << 0x24U) 
                                                  | (QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_awaddr)))));
        __Vdlyvset__awFifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__awFifo__DOT__ram__v0 = (3U & (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rData 
            = (7U & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rData 
            = (3U & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__bFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__bFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__bFifo__DOT__ram[(3U & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr))];
    }
    if (vlSelf->__PVT__rFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__rFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__rFifo__DOT__ram[(7U & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr))];
    }
    if (__Vdlyvset__arFifo__DOT__ram__v0) {
        vlSelf->__PVT__arFifo__DOT__ram[__Vdlyvdim0__arFifo__DOT__ram__v0] 
            = __Vdlyvval__arFifo__DOT__ram__v0;
    }
    if (__Vdlyvset__wFifo__DOT__ram__v0) {
        vlSelf->__PVT__wFifo__DOT__ram[__Vdlyvdim0__wFifo__DOT__ram__v0] 
            = __Vdlyvval__wFifo__DOT__ram__v0;
    }
    if (__Vdlyvset__awFifo__DOT__ram__v0) {
        vlSelf->__PVT__awFifo__DOT__ram[__Vdlyvdim0__awFifo__DOT__ram__v0] 
            = __Vdlyvval__awFifo__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__2(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__2\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__bFifo__DOT__popCC_ptrToPush;
        vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__rFifo__DOT__popCC_ptrToPush;
    } else {
        vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__3(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__3\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_resetn) {
        vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__arFifo__DOT__popCC_ptrToPush;
        vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__wFifo__DOT__popCC_ptrToPush;
        vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__awFifo__DOT__popCC_ptrToPush;
    } else {
        vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__0(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__0\n"); );
    // Body
    vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__arFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg));
    vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__awFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_reg));
    vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_wready;
    if ((1U & (~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__wFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_wready) 
           & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__arFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__awFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__wFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__7(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__7\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_resetn) {
        if (vlSelf->__PVT__arFifo__DOT__io_push_fire) {
            vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray 
                = (7U & ((3U & (((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr)) 
                                >> 1U)) ^ ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr))));
            vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr 
                = vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrPlus;
        }
        if (vlSelf->__PVT__wFifo__DOT__io_push_fire) {
            vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrGray 
                = (0xfU & ((7U & (((IData)(1U) + (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtr)) 
                                  >> 1U)) ^ ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtr))));
            vlSelf->__PVT__wFifo__DOT__pushCC_pushPtr 
                = vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrPlus;
        }
        if (vlSelf->__PVT__awFifo__DOT__io_push_fire) {
            vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrGray 
                = (7U & ((3U & (((IData)(1U) + (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtr)) 
                                >> 1U)) ^ ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtr))));
            vlSelf->__PVT__awFifo__DOT__pushCC_pushPtr 
                = vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrPlus;
        }
    } else {
        vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray = 0U;
        vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrGray = 0U;
        vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrGray = 0U;
        vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr = 0U;
        vlSelf->__PVT__wFifo__DOT__pushCC_pushPtr = 0U;
        vlSelf->__PVT__awFifo__DOT__pushCC_pushPtr = 0U;
    }
    vlSelf->__PVT__arFifo__DOT__pushCC_full = (((3U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                     >> 1U))) 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray) 
                                                    >> 1U))) 
                                               & ((1U 
                                                   & (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray)) 
                                                  == 
                                                  (1U 
                                                   & (IData)(vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__wFifo__DOT__pushCC_full = (((3U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                    >> 2U))) 
                                               == (3U 
                                                   & ((IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrGray) 
                                                      >> 2U))) 
                                              & ((3U 
                                                  & (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrGray)) 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__awFifo__DOT__pushCC_full = (((3U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                     >> 1U))) 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrGray) 
                                                    >> 1U))) 
                                               & ((1U 
                                                   & (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrGray)) 
                                                  == 
                                                  (1U 
                                                   & (IData)(vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrPlus 
        = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrPlus = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrPlus 
        = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtr)));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__8(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__8\n"); );
    // Body
    vlSelf->__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_1 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_resetn) 
           & (IData)(vlSelf->__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_0));
    vlSelf->__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_0 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_resetn;
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__1(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__1\n"); );
    // Body
    vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_rready;
    if ((1U & (~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__rFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_rready) 
           & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__bFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_bready) 
           & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_bready;
    if ((1U & (~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__rFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__bFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__bFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__9(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__9\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        if (vlSelf->__PVT__bFifo__DOT__io_push_fire) {
            vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray 
                = (7U & ((3U & (((IData)(1U) + (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtr)) 
                                >> 1U)) ^ ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtr))));
            vlSelf->__PVT__bFifo__DOT__pushCC_pushPtr 
                = vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrPlus;
        }
        if (vlSelf->__PVT__rFifo__DOT__io_push_fire) {
            vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray 
                = (0xfU & ((7U & (((IData)(1U) + (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtr)) 
                                  >> 1U)) ^ ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtr))));
            vlSelf->__PVT__rFifo__DOT__pushCC_pushPtr 
                = vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrPlus;
        }
    } else {
        vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray = 0U;
        vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray = 0U;
        vlSelf->__PVT__bFifo__DOT__pushCC_pushPtr = 0U;
        vlSelf->__PVT__rFifo__DOT__pushCC_pushPtr = 0U;
    }
    vlSelf->__PVT__bFifo__DOT__pushCC_full = (((3U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                    >> 1U))) 
                                               == (3U 
                                                   & ((IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray) 
                                                      >> 1U))) 
                                              & ((1U 
                                                  & (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrGray)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__rFifo__DOT__pushCC_full = (((3U 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                    >> 2U))) 
                                               == (3U 
                                                   & ((IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray) 
                                                      >> 2U))) 
                                              & ((3U 
                                                  & (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrGray)) 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__bFifo__DOT__pushCC_pushPtrPlus = 
        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__rFifo__DOT__pushCC_pushPtrPlus = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtr)));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__10(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__10\n"); );
    // Body
    vlSelf->__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_1 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
           & (IData)(vlSelf->__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_0));
    vlSelf->__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_0 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn;
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__2(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__2\n"); );
    // Body
    vlSelf->__PVT__arFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_full)) 
                                                & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_arvalid));
    vlSelf->__PVT__wFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_wvalid));
    vlSelf->__PVT__awFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_full)) 
                                                & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__cpu_awvalid));
    vlSelf->__PVT__arFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__arFifo__DOT__io_push_fire) {
        vlSelf->__PVT__arFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__wFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__wFifo__DOT__io_push_fire) {
        vlSelf->__PVT__wFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__awFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__awFifo__DOT__io_push_fire) {
        vlSelf->__PVT__awFifo__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__3(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC__3\n"); );
    // Body
    vlSelf->__PVT__bFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_reg));
    vlSelf->__PVT__rFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg));
    vlSelf->__PVT__bFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__bFifo__DOT__io_push_fire) {
        vlSelf->__PVT__bFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__rFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__rFifo__DOT__io_push_fire) {
        vlSelf->__PVT__rFifo__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__0(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__0\n"); );
    // Body
    vlSelf->__Vdlyvset__rFifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__bFifo__DOT__ram__v0 = 0U;
    if (vlSelf->__PVT__rFifo__DOT___zz_1) {
        vlSelf->__Vdlyvval__rFifo__DOT__ram__v0 = (
                                                   ((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rlast_reg)) 
                                                    << 0x26U) 
                                                   | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rresp_reg)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_sys_axi_rid)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rdata_reg)))));
        vlSelf->__Vdlyvset__rFifo__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__rFifo__DOT__ram__v0 = 
            (7U & (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__bFifo__DOT___zz_1) {
        vlSelf->__Vdlyvval__bFifo__DOT__ram__v0 = (
                                                   ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bresp_reg) 
                                                    << 4U) 
                                                   | (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_sys_axi_bid));
        vlSelf->__Vdlyvset__bFifo__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__bFifo__DOT__ram__v0 = 
            (3U & (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rData 
            = (3U & (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rData 
            = (7U & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rData 
            = (3U & (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__wFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__wFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__wFifo__DOT__ram[(7U & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_popPtr))];
    }
    if (vlSelf->__PVT__awFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__awFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__awFifo__DOT__ram[(3U & (IData)(vlSelf->__PVT__awFifo__DOT__popCC_popPtr))];
    }
    if (vlSelf->__PVT__arFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__arFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__arFifo__DOT__ram[(3U & (IData)(vlSelf->__PVT__arFifo__DOT__popCC_popPtr))];
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__1(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__1\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__awFifo__DOT__ram__v0;
    __Vdlyvdim0__awFifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__awFifo__DOT__ram__v0;
    __Vdlyvset__awFifo__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__wFifo__DOT__ram__v0;
    __Vdlyvdim0__wFifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__wFifo__DOT__ram__v0;
    __Vdlyvset__wFifo__DOT__ram__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__arFifo__DOT__ram__v0;
    __Vdlyvdim0__arFifo__DOT__ram__v0 = 0;
    QData/*56:0*/ __Vdlyvval__arFifo__DOT__ram__v0;
    __Vdlyvval__arFifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__arFifo__DOT__ram__v0;
    __Vdlyvset__arFifo__DOT__ram__v0 = 0;
    // Body
    __Vdlyvset__wFifo__DOT__ram__v0 = 0U;
    __Vdlyvset__awFifo__DOT__ram__v0 = 0U;
    __Vdlyvset__arFifo__DOT__ram__v0 = 0U;
    if (vlSelf->__PVT__wFifo__DOT___zz_1) {
        __Vdlyvset__wFifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__wFifo__DOT__ram__v0 = (7U & (IData)(vlSelf->__PVT__wFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__awFifo__DOT___zz_1) {
        __Vdlyvset__awFifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__awFifo__DOT__ram__v0 = (3U & (IData)(vlSelf->__PVT__awFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__arFifo__DOT___zz_1) {
        __Vdlyvval__arFifo__DOT__ram__v0 = (0xca00000000000ULL 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg)
                                                                  ? (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arlen_reg)
                                                                  : 0U))) 
                                                << 0x24U) 
                                               | (QData)((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_axi_araddr))));
        __Vdlyvset__arFifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__arFifo__DOT__ram__v0 = (3U & (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr));
    }
    if (vlSelf->__PVT__bFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__bFifo__DOT__popCC_addressGen_rData 
            = (3U & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready) {
        vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rData 
            = (7U & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_popPtr));
    }
    if (vlSelf->__PVT__bFifo__DOT__popCC_addressGen_fire) {
        vlSelf->__PVT__bFifo__DOT___zz_ram_port1 = 
            vlSelf->__PVT__bFifo__DOT__ram[(3U & (IData)(vlSelf->__PVT__bFifo__DOT__popCC_popPtr))];
    }
    if (__Vdlyvset__wFifo__DOT__ram__v0) {
        vlSelf->__PVT__wFifo__DOT__ram[__Vdlyvdim0__wFifo__DOT__ram__v0] = 0x1000000000ULL;
    }
    if (__Vdlyvset__awFifo__DOT__ram__v0) {
        vlSelf->__PVT__awFifo__DOT__ram[__Vdlyvdim0__awFifo__DOT__ram__v0] = 0xca00000000000ULL;
    }
    if (__Vdlyvset__arFifo__DOT__ram__v0) {
        vlSelf->__PVT__arFifo__DOT__ram[__Vdlyvdim0__arFifo__DOT__ram__v0] 
            = __Vdlyvval__arFifo__DOT__ram__v0;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__2(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__2\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_resetn) {
        vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__wFifo__DOT__popCC_ptrToPush;
        vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__awFifo__DOT__popCC_ptrToPush;
        vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__arFifo__DOT__popCC_ptrToPush;
    } else {
        vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_resetn)))) {
        vlSelf->__PVT__wFifo__DOT__pushCC_pushPtr = 0U;
        vlSelf->__PVT__awFifo__DOT__pushCC_pushPtr = 0U;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__3(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__3\n"); );
    // Body
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__rFifo__DOT__popCC_ptrToPush;
        vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelf->__PVT__bFifo__DOT__popCC_ptrToPush;
    } else {
        vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelf->__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
        vlSelf->__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__7(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__7\n"); );
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_resetn)))) {
        vlSelf->__PVT__wFifo__DOT__pushCC_pushPtrGray = 0U;
        vlSelf->__PVT__awFifo__DOT__pushCC_pushPtrGray = 0U;
    }
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_resetn) {
        if (vlSelf->__PVT__arFifo__DOT__io_push_fire) {
            vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray 
                = (7U & ((3U & (((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr)) 
                                >> 1U)) ^ ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr))));
            vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr 
                = vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrPlus;
        }
    } else {
        vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray = 0U;
        vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr = 0U;
    }
    vlSelf->__PVT__arFifo__DOT__pushCC_full = (((3U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                     >> 1U))) 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray) 
                                                    >> 1U))) 
                                               & ((1U 
                                                   & (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrGray)) 
                                                  == 
                                                  (1U 
                                                   & (IData)(vlSelf->__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlSelf->__PVT__arFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_full)) 
                                                & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_axi_arvalid));
    vlSelf->__PVT__arFifo__DOT__pushCC_pushPtrPlus 
        = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__arFifo__DOT__pushCC_pushPtr)));
    vlSelf->__PVT__arFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__arFifo__DOT__io_push_fire) {
        vlSelf->__PVT__arFifo__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__0(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__0\n"); );
    // Body
    vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__arFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_rValid) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_reg));
    vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_reg;
    if ((1U & (~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__awFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_rValid) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_reg));
    vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_sys_axi_wready;
    if ((1U & (~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready = 1U;
    }
    vlSelf->__PVT__wFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_sys_axi_wready) 
           & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__arFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__arFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__arFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__awFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__awFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__awFifo__DOT__popCC_addressGen_ready));
    vlSelf->__PVT__wFifo__DOT__popCC_addressGen_fire 
        = ((~ (IData)(vlSelf->__PVT__wFifo__DOT__popCC_empty)) 
           & (IData)(vlSelf->__PVT__wFifo__DOT__popCC_addressGen_ready));
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__8(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__8\n"); );
    // Body
    vlSelf->__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_1 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_resetn) 
           & (IData)(vlSelf->__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_0));
    vlSelf->__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_0 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_resetn;
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__1(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__1\n"); );
    // Body
    vlSelf->__PVT__rFifo__DOT__popCC_readArbitation_fire 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_axi_rready) 
           & (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid));
    vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready 
        = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__tpu_axi_rready;
    if ((1U & (~ (IData)(vlSelf->__PVT__rFifo__DOT__popCC_addressGen_rValid)))) {
        vlSelf->__PVT__rFifo__DOT__popCC_addressGen_ready = 1U;
    }
}

VL_INLINE_OPT void Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__2(Vsim_top_Axi_CDC* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsim_top_Axi_CDC___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC__2\n"); );
    // Body
    vlSelf->__PVT__bFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__bFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_reg));
    vlSelf->__PVT__rFifo__DOT__io_push_fire = ((~ (IData)(vlSelf->__PVT__rFifo__DOT__pushCC_full)) 
                                               & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg));
    vlSelf->__PVT__bFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__bFifo__DOT__io_push_fire) {
        vlSelf->__PVT__bFifo__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__rFifo__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__rFifo__DOT__io_push_fire) {
        vlSelf->__PVT__rFifo__DOT___zz_1 = 1U;
    }
}
