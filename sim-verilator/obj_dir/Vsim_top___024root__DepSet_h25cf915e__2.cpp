// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top__Syms.h"
#include "Vsim_top___024root.h"

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__7(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__7\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9b69da90__0;
    VlWide<4>/*127:0*/ __Vtemp_h9b69da52__0;
    VlWide<4>/*127:0*/ __Vtemp_h64f16d70__1;
    VlWide<4>/*127:0*/ __Vtemp_h64f16cba__1;
    VlWide<4>/*127:0*/ __Vtemp_h64f16d70__2;
    VlWide<4>/*127:0*/ __Vtemp_h64f16cba__2;
    VlWide<4>/*127:0*/ __Vtemp_h9b69da90__1;
    VlWide<4>/*127:0*/ __Vtemp_h9b69da52__1;
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_axi_bid 
        = (0xfU & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT___zz_ram_port1));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__reset) {
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arvalid = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_awvalid = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wvalid = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__cpu_wlast = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__cpu_bready = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_num = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[0U] = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[1U] = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[2U] = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[3U] = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_op = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_tag = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_wstrb = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_wdata = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_cacop_op_mode = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__miss_buffer_replace_way = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_op = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_preld = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_size = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_index = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_tag = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wstrb = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wdata = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_cacop_op_mode = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_dcacop = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_req = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__rd_req_buffer = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__rd_req_buffer = 0U;
    } else {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state) {
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state) {
                if ((1U & ((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushCC_full)) 
                           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arid)))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arvalid = 0U;
                } else if ((1U & ((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushCC_full)) 
                                  & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arid))))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arvalid = 0U;
                }
            }
        } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_req) {
            if ((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state))) {
                if (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rValid) 
                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_bready))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arid = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_araddr 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_addr;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arsize 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__data_real_rd_size;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arlen 
                        = ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_type))
                            ? 3U : 0U);
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arvalid = 1U;
                }
            } else {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state = 1U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arid = 1U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_araddr 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_addr;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arsize 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__data_real_rd_size;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arlen 
                    = ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_type))
                        ? 3U : 0U);
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arvalid = 1U;
            }
        } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rd_req) {
            if ((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state))) {
                if (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rValid) 
                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_bready))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arid = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_araddr 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rd_addr;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arsize 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__inst_real_rd_size;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arlen 
                        = ((4U == ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en)
                                    ? 2U : 4U)) ? 3U
                            : 0U);
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arvalid = 1U;
                }
            } else {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state = 1U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arid = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_araddr 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rd_addr;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arsize 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__inst_real_rd_size;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arlen 
                    = ((4U == ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en)
                                ? 2U : 4U)) ? 3U : 0U);
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_arvalid = 1U;
            }
        }
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state))) {
            if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state))) {
                if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state = 0U;
                } else if (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rValid) 
                            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_bready))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state = 0U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__cpu_bready = 0U;
                }
            } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushCC_full)))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state = 4U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_awvalid = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wvalid = 1U;
                }
            } else if ((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushCC_full)))) {
                if (vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wlast) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state = 6U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wvalid = 0U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__cpu_wlast = 0U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__cpu_bready = 1U;
                } else {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_num 
                        = (7U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_num) 
                                 - (IData)(1U)));
                    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_last) {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__cpu_wlast = 1U;
                    }
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state = 4U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wdata 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[0U];
                    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wvalid = 1U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[0U] 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[1U];
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[1U] 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[2U];
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[2U] 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[3U];
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[3U] = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state))) {
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state = 0U;
        } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state))) {
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state = 0U;
        } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_req) {
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state = 5U;
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__uncache_wr_buffer) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_awaddr 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h3175ceaa__0;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wstrb 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wstrb;
            } else {
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_awaddr 
                    = ((0xfffff000U & ((((- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way)))) 
                                         << 0xcU) & 
                                        (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__output_buffer 
                                         << 0xbU)) 
                                       | (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way) 
                                                          >> 1U)))) 
                                           << 0xcU) 
                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__output_buffer 
                                             << 0xbU)))) 
                       | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_index) 
                          << 4U));
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wstrb = 0xfU;
            }
            if ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_type))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_awsize = 2U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_awlen = 3U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_num = 3U;
            } else {
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_awsize 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_type;
                vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_awlen = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_num = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__cpu_wlast = 1U;
            }
            vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_awvalid = 1U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wdata 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[0U];
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[0U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[1U];
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[1U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[2U];
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[2U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[3U];
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[3U] = 0U;
        }
        if ((0x10U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
            if ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if ((1U & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_ret_valid) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_ret_last)) 
                              | (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__rd_req_buffer))))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_ret_valid) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__miss_buffer_ret_num 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__ret_num_add_one;
            }
        } else if ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
            if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if (((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_req)) 
                        & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_rdy))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 0x10U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__miss_buffer_ret_num = 0U;
            }
        } else if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
        } else if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
            if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__req_or_inst_valid) 
                        & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cache_hit))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 2U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_op = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_offset;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_wstrb = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_wdata = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en;
            } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_tlb_excp_cancel_req) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cache_hit) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
            } else {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 8U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_tag 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_tag;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en 
                    = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_uncache_en) 
                       & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop)));
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__miss_buffer_replace_way 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__replace_way;
            }
        } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) {
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__req_or_inst_valid) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 2U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_op = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_offset;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_wstrb = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_wdata = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en;
            }
        } else {
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state = 1U;
        }
        if ((0x10U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
            if ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_ret_valid) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_ret_last)) 
                              | (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__rd_req_buffer))))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_ret_valid) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_ret_num 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__ret_num_add_one;
            }
        } else if ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
            if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else {
                if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_rdy) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 0x10U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_ret_num = 0U;
                }
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_req = 0U;
            }
        } else if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
            if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 8U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_req = 1U;
            }
        } else if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
            if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__req_or_inst_valid) 
                        & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_lookup2lookup))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 2U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_op 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_op;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_preld 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__preld_en;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_size 
                    = ((1U & (- (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x1fU)))) 
                       | (2U & (- (IData)((1U & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                             >> 0x1eU)))))))));
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_index 
                    = (0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr 
                                >> 4U));
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset 
                    = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr);
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wstrb 
                    = (0xfU & ((((- (IData)((1U & (
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                   >> 0x1eU)))) 
                                 >> 3U) & ((0x1ffffff8U 
                                            & ((3U 
                                                == 
                                                (3U 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                               << 3U)) 
                                           | ((0x1ffffffcU 
                                               & ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                  << 2U)) 
                                              | ((0x1ffffffeU 
                                                  & ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                     << 1U)) 
                                                 | (0x1fffffffU 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va))))))) 
                               | ((((- (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                >> 0x1fU))) 
                                    >> 3U) & ((0x1ffffff8U 
                                               & ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                  << 3U)) 
                                              | ((0x1ffffffcU 
                                                  & ((2U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (- (IData)(
                                                                 (0U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))))))) 
                                  | (0xfU & ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                        >> 0x1eU))))))) 
                                             >> 3U)))));
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wdata 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wdata;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_dcacop 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcacop_op_en;
            } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cancel_req) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cache_hit) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
            } else {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state 
                    = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__uncache_wr) 
                        | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__replace_d) 
                             & (0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__replace_way) 
                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h13703b6f__0)))) 
                            & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_uncache_en)) 
                               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2_hit_wr))) 
                           & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0))))
                        ? 4U : 8U);
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_tag 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_uncache_en;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__uncache_wr_buffer 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__uncache_wr;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__replace_way;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2_hit_wr_buffer 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2_hit_wr;
            }
        } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) {
            if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__req_or_inst_valid) 
                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_idle2lookup))) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 2U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_op 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_op;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_preld 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__preld_en;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_size 
                    = ((1U & (- (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x1fU)))) 
                       | (2U & (- (IData)((1U & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                             >> 0x1eU)))))))));
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_index 
                    = (0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr 
                                >> 4U));
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset 
                    = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr);
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wstrb 
                    = (0xfU & ((((- (IData)((1U & (
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                   >> 0x1eU)))) 
                                 >> 3U) & ((0x1ffffff8U 
                                            & ((3U 
                                                == 
                                                (3U 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                               << 3U)) 
                                           | ((0x1ffffffcU 
                                               & ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                  << 2U)) 
                                              | ((0x1ffffffeU 
                                                  & ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                     << 1U)) 
                                                 | (0x1fffffffU 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va))))))) 
                               | ((((- (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                >> 0x1fU))) 
                                    >> 3U) & ((0x1ffffff8U 
                                               & ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                  << 3U)) 
                                              | ((0x1ffffffcU 
                                                  & ((2U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (- (IData)(
                                                                 (0U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))))))) 
                                  | (0xfU & ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                        >> 0x1eU))))))) 
                                             >> 3U)))));
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wdata 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wdata;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_cacop_op_mode 
                    = (3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                             >> 3U));
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_dcacop 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcacop_op_en;
            }
        } else {
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state = 1U;
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rd_req) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__rd_req_buffer = 1U;
        } else if (((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)) 
                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_ret_valid) 
                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_ret_last)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__rd_req_buffer = 0U;
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_req) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__rd_req_buffer = 1U;
        } else if (((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)) 
                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_ret_valid) 
                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_ret_last)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__rd_req_buffer = 0U;
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__read_requst_state;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[0U] 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[0U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[1U] 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[1U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[2U] 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[2U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[3U] 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_data[3U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_wlast 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__cpu_wlast;
    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_bready 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__cpu_bready;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_num 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_num;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_last 
        = (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_num));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__ena) {
        if ((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__wea)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__output_buffer 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__mem_reg
                [vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__addra];
        }
        if ((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__1__KET____DOT__u__wea)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__output_buffer 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__mem_reg
                [vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__addra];
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_tlb_excp_cancel_req 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_tlbr) 
           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_pif) 
              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_ppi)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_uncache_en 
        = (1U & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__da_mode) 
                  & (0U == (0x60U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_crmd))) 
                 | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_dmw0_en) 
                     & (0U == (0x30U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_dmw0))) 
                    | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_dmw1_en) 
                        & (0U == (0x30U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_dmw1))) 
                       | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_trans_en) 
                           & (0U == ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__tlb_entry__DOT____VdfgTmp_h0a98f072__0)
                                      ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
                                     [vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__tlb_entry__DOT__s0_index]
                                      : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
                                     [vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__tlb_entry__DOT__s0_index]))) 
                          | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_disable_cache)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__mem_reg__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__mem_reg[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__mem_reg__v0;
    }
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__mem_reg__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__mem_reg[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__mem_reg__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__mem_reg__v0;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
        = (0xfffffU & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_addr_trans_en)
                        ? ((0xcU == vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                            [vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tlb_index])
                            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__s1_ppn
                            : ((0xffc00U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__s1_ppn) 
                               | (0x3ffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__data_paddr 
                                            >> 0xcU))))
                        : (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__data_paddr 
                           >> 0xcU)));
    __Vtemp_h9b69da90__0[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [0U][0U];
    __Vtemp_h9b69da90__0[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [0U][1U];
    __Vtemp_h9b69da90__0[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [0U][2U];
    __Vtemp_h9b69da90__0[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [0U][3U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_load_word[0U] 
        = __Vtemp_h9b69da90__0[(3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset) 
                                      >> 2U))];
    __Vtemp_h9b69da52__0[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [1U][0U];
    __Vtemp_h9b69da52__0[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [1U][1U];
    __Vtemp_h9b69da52__0[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [1U][2U];
    __Vtemp_h9b69da52__0[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [1U][3U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_load_word[1U] 
        = __Vtemp_h9b69da52__0[(3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset) 
                                      >> 2U))];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__excp 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_tlb_excp_cancel_req));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__ret_num_add_one 
        = ((2U & (VL_REDXOR_2(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__miss_buffer_ret_num) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__miss_buffer_ret_num))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__inst_real_rd_size 
        = ((4U == ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en)
                    ? 2U : 4U)) ? 2U : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en)
                                         ? 2U : 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rd_addr 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en)
            ? ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_tag 
                << 0xcU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index) 
                             << 4U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset)))
            : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_tag 
                << 0xcU) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index) 
                            << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode2 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop) 
           & (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_cacop_op_mode)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode1 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop) 
           & ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_cacop_op_mode)) 
              | (3U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_cacop_op_mode))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop) 
           & (0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_cacop_op_mode)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_douta[0U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__output_buffer;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_douta[1U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__output_buffer;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h13703b6f__0 
        = ((2U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__output_buffer 
                  << 1U)) | (1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__output_buffer));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__uncache_wr_buffer) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_type 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_size;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[0U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wdata;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[3U] = 0U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_type = 4U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[0U] 
            = (((- (IData)((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way)))) 
                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
                [0U][0U]) | ((- (IData)((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way) 
                                               >> 1U)))) 
                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
                             [1U][0U]));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[1U] 
            = (((- (IData)((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way)))) 
                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
                [0U][1U]) | ((- (IData)((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way) 
                                               >> 1U)))) 
                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
                             [1U][1U]));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[2U] 
            = (((- (IData)((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way)))) 
                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
                [0U][2U]) | ((- (IData)((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way) 
                                               >> 1U)))) 
                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
                             [1U][2U]));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wr_data[3U] 
            = (((- (IData)((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way)))) 
                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
                [0U][3U]) | ((- (IData)((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_replace_way) 
                                               >> 1U)))) 
                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
                             [1U][3U]));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__ret_num_add_one 
        = ((2U & (VL_REDXOR_2(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_ret_num) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_ret_num))));
    __Vtemp_h64f16d70__1[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [0U][0U];
    __Vtemp_h64f16d70__1[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [0U][1U];
    __Vtemp_h64f16d70__1[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [0U][2U];
    __Vtemp_h64f16d70__1[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [0U][3U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_load_word[0U] 
        = __Vtemp_h64f16d70__1[(3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset) 
                                      >> 2U))];
    __Vtemp_h64f16cba__1[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [1U][0U];
    __Vtemp_h64f16cba__1[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [1U][1U];
    __Vtemp_h64f16cba__1[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [1U][2U];
    __Vtemp_h64f16cba__1[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [1U][3U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_load_word[1U] 
        = __Vtemp_h64f16cba__1[(3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset) 
                                      >> 2U))];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h3175ceaa__0 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_tag 
            << 0xcU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_index) 
                         << 4U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset)));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_type 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_size;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h3175ceaa__0;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_type = 4U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_addr 
            = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_tag 
                << 0xcU) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_index) 
                            << 4U));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__refill_data 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_op) 
            & ((3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset) 
                      >> 2U)) == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__miss_buffer_ret_num)))
            ? ((((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wstrb))
                  ? (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wdata 
                     >> 0x18U) : (IData)((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                          >> 0x18U))) 
                << 0x18U) | ((0xff0000U & (((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wstrb))
                                             ? (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wdata 
                                                >> 0x10U)
                                             : (IData)(
                                                       (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                                        >> 0x10U))) 
                                           << 0x10U)) 
                             | ((0xff00U & (((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wstrb))
                                              ? (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wdata 
                                                 >> 8U)
                                              : (IData)(
                                                        (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                                         >> 8U))) 
                                            << 8U)) 
                                | (0xffU & ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wstrb))
                                             ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_wdata
                                             : (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1))))))
            : (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h63343402__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_dcacop) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_preld));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_dcacop) 
           & (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_cacop_op_mode)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode1 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_dcacop) 
           & ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_cacop_op_mode)) 
              | (3U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_cacop_op_mode))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_dcacop) 
           & (0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_cacop_op_mode)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_uncache_en 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_dcacop)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_uncache_en));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_tag 
        = (0xfffffU & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop)
                        ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag
                        : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_trans_en)
                            ? ((0xcU == vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__tlb_entry__DOT__s0_index])
                                ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__s0_ppn
                                : ((0xffc00U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__s0_ppn) 
                                   | (0x3ffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__inst_paddr 
                                                >> 0xcU))))
                            : (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__addr_trans__DOT__inst_paddr 
                               >> 0xcU))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__sc_cancel_req 
        = (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__lladdr 
             != ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                  << 8U) | (0xffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                      << 5U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                >> 0x1bU))))) 
            | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_uncache_en)) 
           & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
               >> 9U) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__access_mem)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_hb6042862__0 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__output_buffer 
           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
              == (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__output_buffer 
                              >> 1U))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h064d00c1__0 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__output_buffer 
           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
              == (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__output_buffer 
                              >> 1U))));
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_valid) 
         & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_allowin))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[0U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[1U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[2U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[3U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[4U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[5U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[6U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[7U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[8U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[9U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[0xaU];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[0xbU];
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_ret_last 
        = (IData)((0x4000000000ULL == (0x4100000000ULL 
                                       & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode2_hit_wr 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode2) 
           & (0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__lookup_way_hit_buffer)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_hf6d3044e__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__invalid_way 
        = (((IData)((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h13703b6f__0))) 
            << 1U) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h13703b6f__0))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__data_real_rd_size 
        = ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_type))
            ? 2U : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_type));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_hdb34a219__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h9ac96f4b__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0) 
           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode1) 
              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_ret_last 
        = (IData)((0x4100000000ULL == (0x4100000000ULL 
                                       & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_he890b2ef__0 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__output_buffer 
           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_tag 
              == (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__tagv_ram_way__BRA__1__KET____DOT__u__DOT__output_buffer 
                              >> 1U))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h5d80e202__0 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__output_buffer 
           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_tag 
              == (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__tagv_ram_way__BRA__0__KET____DOT__u__DOT__output_buffer 
                              >> 1U))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cancel_req 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__sc_cancel_req) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tlb_excp_cancel_req));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_hit 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_hb6042862__0) 
            << 1U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h064d00c1__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_dina[0U][0U] 
        = ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_dina[0U][1U] 
        = ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_dina[0U][2U] 
        = ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_dina[0U][3U] 
        = ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_dina[1U][0U] 
        = ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_dina[1U][1U] 
        = ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_dina[1U][2U] 
        = ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_dina[1U][3U] 
        = ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_ena[0U][0U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_ena[0U][1U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_ena[0U][2U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_ena[0U][3U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_ena[1U][0U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_ena[1U][1U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_ena[1U][2U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_ena[1U][3U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h00af7739__0 
        = ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)) 
           | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rd_req 
        = ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_hf6d3044e__0) 
               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode2))) 
           & (8U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)));
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_hf6d3044e__0) 
         | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode2_hit_wr))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__dina = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_dina[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_dina[1U] = 0U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__dina 
            = (1U | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_tag 
                     << 1U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_dina[0U] 
            = (1U | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_tag 
                     << 1U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_dina[1U] 
            = (1U | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_tag 
                     << 1U));
    }
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_hdb34a219__0) 
         | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2_hit_wr_buffer))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__dina = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_dina[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_dina[1U] = 0U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__dina 
            = (1U | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_tag 
                     << 1U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_dina[0U] 
            = (1U | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_tag 
                     << 1U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_dina[1U] 
            = (1U | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_tag 
                     << 1U));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__reset 
        = (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_resetn)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__ena 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en)) 
                 | ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)) 
                    | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_req 
        = ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__uncache_wr_buffer) 
               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h9ac96f4b__0))) 
           & (8U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_ena[0U] 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en)) 
                 | ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)) 
                    | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_ena[1U] 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en)) 
                 | ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)) 
                    | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_ena[0U][0U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_ena[0U][1U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_ena[0U][2U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_ena[0U][3U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_ena[1U][0U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_ena[1U][1U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_ena[1U][2U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_ena[1U][3U] 
        = (1U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_dina[0U][0U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_state))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__refill_data));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_dina[0U][1U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_state))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__refill_data));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_dina[0U][2U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_state))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__refill_data));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_dina[0U][3U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_state))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__refill_data));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_dina[1U][0U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_state))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__refill_data));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_dina[1U][1U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_state))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__refill_data));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_dina[1U][2U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_state))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__refill_data));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_dina[1U][3U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_state))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__refill_data));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__pipeline_no_empty 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid) 
                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_valid) 
                    | ((~ ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)) 
                           & ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_requst_state)) 
                              & (0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__axi_bridge__DOT__write_buffer_num))))) 
                       | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ws_valid)))));
    __Vtemp_h64f16d70__2[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [0U][0U];
    __Vtemp_h64f16d70__2[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [0U][1U];
    __Vtemp_h64f16d70__2[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [0U][2U];
    __Vtemp_h64f16d70__2[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [0U][3U];
    __Vtemp_h64f16cba__2[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [1U][0U];
    __Vtemp_h64f16cba__2[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [1U][1U];
    __Vtemp_h64f16cba__2[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [1U][2U];
    __Vtemp_h64f16cba__2[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_data
        [1U][3U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__data_buff_enable)
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__data_rd_buff
            : (((- (IData)((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
                & (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h064d00c1__0))) 
                    & __Vtemp_h64f16d70__2[(3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset) 
                                                  >> 2U))]) 
                   | ((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_hb6042862__0))) 
                      & __Vtemp_h64f16cba__2[(3U & 
                                              ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset) 
                                               >> 2U))]))) 
               | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_state)))) 
                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1))));
    __Vtemp_h9b69da90__1[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [0U][0U];
    __Vtemp_h9b69da90__1[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [0U][1U];
    __Vtemp_h9b69da90__1[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [0U][2U];
    __Vtemp_h9b69da90__1[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [0U][3U];
    __Vtemp_h9b69da52__1[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [1U][0U];
    __Vtemp_h9b69da52__1[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [1U][1U];
    __Vtemp_h9b69da52__1[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [1U][2U];
    __Vtemp_h9b69da52__1[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_data
        [1U][3U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rdata 
        = (((- (IData)((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
            & (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h5d80e202__0))) 
                & __Vtemp_h9b69da90__1[(3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset) 
                                              >> 2U))]) 
               | ((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_he890b2ef__0))) 
                  & __Vtemp_h9b69da52__1[(3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset) 
                                                >> 2U))]))) 
           | ((- (IData)((0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)))) 
              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_hit 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_he890b2ef__0) 
            << 1U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h5d80e202__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2_hit_wr 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2) 
           & (0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_hit)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__replace_way 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_hdb34a219__0))) 
            & ((2U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset) 
                      << 1U)) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_offset))))) 
           | (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2))) 
               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_hit)) 
              | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_dcacop))))) 
                 & ((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__invalid_way))
                     ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__invalid_way)
                     : ((2U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                               >> 5U)) | (1U & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                                   >> 6U))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cache_hit 
        = ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_uncache_en) 
               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____VdfgTmp_h9ac96f4b__0))) 
           & (0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_hit)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__preld_inst 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 6U) & ((0U == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                      | (8U == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_op 
        = (1U & ((~ (IData)((0U != (0x60U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U])))) 
                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                    >> 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__icacop_inst 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 5U) & (0U == (7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__dcacop_inst 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 5U) & (1U == (7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__access_mem 
        = (IData)((0U != (0x420U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    if ((0x2000000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
            = (((QData)((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
            = (((QData)((IData)((- (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])));
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
            = (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
            = (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_enable 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            >> 6U) & ((0U != (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid)));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31 
            = (1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__x_31_buffer));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed 
            = (1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__div_signed_buffer));
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31 
            = (1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                     >> 0x1fU));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed 
            = (1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                     >> 0x19U));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_pair_valid 
        = ((0x20U > (0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])) 
           & ((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_valid_bits 
                       >> (0x3fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                    << 1U)))) & (IData)(
                                                        (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_valid_bits 
                                                         >> 
                                                         (1U 
                                                          | (0x3eU 
                                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                                << 1U)))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_div_enable 
        = ((IData)((0U != (0x30000000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
        = ((0x200U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]
            : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2 
        = ((0x100U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]
            : ((0x80U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
                ? 4U : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin 
        = (IData)((0U != (0x7000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
            >> 0x1eU) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__ena 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en)) 
                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h00af7739__0)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_ena[0U] 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en)) 
                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h00af7739__0)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_ena[1U] 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_uncache_en)) 
                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h00af7739__0)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded 
        = (0xffU & (((- (IData)((0U == (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                     & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata) 
                    | (((- (IData)((1U == (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                        & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata 
                           >> 8U)) | (((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                                       & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata 
                                          >> 0x10U)) 
                                      | ((- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                                         & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata 
                                            >> 0x18U))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded 
        = (0xffffU & (((- (IData)((0U == (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata) 
                      | ((- (IData)((2U == (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                         & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata 
                            >> 0x10U))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__replace_way 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_hf6d3044e__0))) 
            & ((2U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset) 
                      << 1U)) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_offset))))) 
           | (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode2))) 
               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_hit)) 
              | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_icacop))))) 
                 & ((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__invalid_way))
                     ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__invalid_way)
                     : ((2U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                               >> 5U)) | (1U & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                                   >> 6U))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cache_hit 
        = ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_uncache_en) 
               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode0) 
                  | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode1) 
                     | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__cacop_op_mode2))))) 
           & (0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_hit)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__uncache_wr 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_uncache_en) 
           & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode1) 
                  | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__cacop_op_mode2_hit_wr))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_op)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__replace_d 
        = (0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__replace_way) 
                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_d_reg
                     [vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_index] 
                     | ((- (IData)((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__request_buffer_index) 
                                     == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_index)) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_state)))) 
                        & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__write_buffer_way)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y 
        = ((4U & ((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                           >> 0x20U)) << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                            >> 0x1fU))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__result_r 
        = (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_r)) 
            << 1U) | (QData)((IData)(((0x20U >= (0x3fU 
                                                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count))) 
                                      & (IData)(((QData)((IData)(
                                                                 ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                                   ? 
                                                                  ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                                    >> 0x1fU)
                                                                    ? 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (~ 
                                                                     vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))
                                                                    : 
                                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])
                                                                   : 
                                                                  vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__or_result 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
           | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_b 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)
            ? (~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)
            : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__status_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
           & (1U == (3U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
                            << 1U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                      >> 0x1fU)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__clear_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
           & (3U == (3U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
                            << 1U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                      >> 0x1fU)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
           & (0U == (3U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
                            << 1U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                      >> 0x1fU)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
           & (2U == (3U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
                            << 1U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                      >> 0x1fU)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_d 
        = (0x1ffffffffULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__result_r 
                             - (QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                 ? 
                                                ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                  >> 0x1fU)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]))
                                                  : 
                                                 vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])
                                                 : 
                                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
           + (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_b 
              + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_h5bf6fc0b__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__clear_cmd) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0) 
           & (0U == (0xfe0U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__set_mode_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0) 
           & (0x40U == (0xfe0U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__ub_write_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0) 
           & (0x20U == (0xfe0U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__dma_load_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0) 
           & (0x60U == (0xfe0U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va 
        = (((- (IData)((IData)((0U != (0x1800U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result) 
           | ((1U & ((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xdU)))) 
                     & (((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2 
                             >> 0x1fU)) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                           >> 0x1fU)) 
                        | ((~ ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                ^ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                               >> 0x1fU)) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
                                             >> 0x1fU))))) 
              | ((1U & ((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                          >> 0xeU)))) 
                        & (~ (IData)((1ULL & (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)) 
                                               + ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_b)) 
                                                  + (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)))) 
                                              >> 0x20U)))))) 
                 | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xfU)))) 
                     & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)) 
                    | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                          >> 0x17U)))) 
                        & ((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)) 
                       | (((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__or_result) 
                           & (- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                               >> 0x10U))))) 
                          | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                >> 0x11U)))) 
                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__or_result) 
                             | (((- (IData)((1U & (
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                   >> 0x18U)))) 
                                 & ((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                                    | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)) 
                                | (((- (IData)((1U 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                   >> 0x12U)))) 
                                    & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                       ^ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)) 
                                   | (((- (IData)((1U 
                                                   & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                      >> 0x16U)))) 
                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                         >> 0x13U)))) 
                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                             << (0x1fU 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2))) 
                                         | ((- (IData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))))) 
                                            & (IData)(
                                                      ((((QData)((IData)(
                                                                         (- (IData)(
                                                                                ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x15U) 
                                                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                                                                >> 0x1fU)))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1))) 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)))))))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_h5bf6fc0b__0) 
           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__ub_write_cmd) 
              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__dma_load_cmd)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wdata 
        = (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                              >> 0x1eU)))) & ((((- (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                               << 0x18U) 
                                              | ((0xff0000U 
                                                  & (((- (IData)(
                                                                 (2U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (((- (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                         & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & ((- (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))))) 
           | (((- (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                           >> 0x1fU))) & ((((- (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & ((- (IData)(
                                                           (0U 
                                                            == 
                                                            (3U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))) 
              | ((- (IData)((1U & (~ (IData)((0U != 
                                              (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                               >> 0x1eU))))))) 
                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr 
        = ((0x40000000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
            ? (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbehi_wen)
                 ? ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                     << 0xbU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                 >> 0x15U)) : (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbehi 
                                               >> 0xdU)) 
               << 0xdU) : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp_ale 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__access_mem) 
           & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                >> 0x1fU) & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va) 
              | ((~ (IData)((0U != (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                    >> 0x1eU)))) & 
                 (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va 
                  | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va 
                     >> 1U)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp 
        = (1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp_ale)));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__8(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[1U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[2U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[3U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[4U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[5U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[6U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[7U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[8U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[9U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0xaU] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0xbU] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0xcU] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0xdU] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0xeU] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0xfU] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.OutX;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0x10U] 
        = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.OutX;
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__9(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____VdfgTmp_hb9b19849__0 
        = (((QData)((IData)((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.__PVT__FifSig) 
                              & (IData)((0U != (0x3000U 
                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.COut))))) 
                             | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
            << 0x3eU) | (((QData)((IData)((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.__PVT__FifSig) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3000U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.COut))))) 
                                           | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                          << 0x3dU) | (((QData)((IData)(
                                                        (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.__PVT__FifSig) 
                                                          & (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x3000U 
                                                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.COut))))) 
                                                         | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.__PVT__FifSig) 
                                                           & (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x3000U 
                                                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.COut))))) 
                                                          | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.__PVT__FifSig) 
                                                              & (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.COut))))) 
                                                             | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                            << 0x3aU) 
                                           | (((QData)((IData)(
                                                               (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.__PVT__FifSig) 
                                                                 & (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.COut))))) 
                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.__PVT__FifSig) 
                                                                    & (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.COut))))) 
                                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.__PVT__FifSig) 
                                                                       & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.COut))))) 
                                                                      | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.__PVT__FifSig) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.COut))))) 
                                                                         | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                        << 0x36U) 
                                                       | (((QData)((IData)(
                                                                           (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.__PVT__FifSig) 
                                                                             & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.COut))))) 
                                                                            | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.COut))))) 
                                                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                              << 0x34U) 
                                                             | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                       << 0x31U) 
                                                                      | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                          << 0x30U) 
                                                                         | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                             << 0x2fU) 
                                                                            | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2eU) 
                                                                               | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1fU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1eU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1dU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1cU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1bU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x1aU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x19U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x18U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x17U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x16U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x15U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x14U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x13U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x12U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x11U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0x10U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xfU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xeU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xdU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xcU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xbU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 0xaU) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 9U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 8U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 7U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 6U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 5U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 4U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 3U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 2U) 
                                                                                | (((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.sixth1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__10(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SOut 
        = (((QData)((IData)((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi.__PVT__FifSig)) 
                                    & (IData)((0x1000U 
                                               == (0x3000U 
                                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.COut))))) 
                                   | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi.__PVT__FifSig)) 
                                       & (IData)((0x2000U 
                                                  == 
                                                  (0x3000U 
                                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.COut))))) 
                                      | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi.__PVT__FifSig) 
                                         & ((IData)(
                                                    (0U 
                                                     == 
                                                     (0x3000U 
                                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.COut)))) 
                                            | (IData)(
                                                      (0x3000U 
                                                       == 
                                                       (0x3000U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.COut))))))))))) 
            << 0x3fU) | (((QData)((IData)((1U & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.__PVT__FifSig)) 
                                                  & (IData)(
                                                            (0x1000U 
                                                             == 
                                                             (0x3000U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.COut))))) 
                                                 | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.__PVT__FifSig)) 
                                                     & (IData)(
                                                               (0x2000U 
                                                                == 
                                                                (0x3000U 
                                                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.COut))))) 
                                                    | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.__PVT__FifSig) 
                                                       & ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x3000U 
                                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.COut)))) 
                                                          | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                          << 0x3eU) | (((QData)((IData)(
                                                        (1U 
                                                         & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.__PVT__FifSig)) 
                                                             & (IData)(
                                                                       (0x1000U 
                                                                        == 
                                                                        (0x3000U 
                                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.COut))))) 
                                                            | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.__PVT__FifSig)) 
                                                                & (IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x3000U 
                                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.COut))))) 
                                                               | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.__PVT__FifSig) 
                                                                  & ((IData)(
                                                                             (0U 
                                                                              == 
                                                                              (0x3000U 
                                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.COut)))) 
                                                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.__PVT__FifSig)) 
                                                              & (IData)(
                                                                        (0x1000U 
                                                                         == 
                                                                         (0x3000U 
                                                                          & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.COut))))) 
                                                             | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.__PVT__FifSig)) 
                                                                 & (IData)(
                                                                           (0x2000U 
                                                                            == 
                                                                            (0x3000U 
                                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.COut))))) 
                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.__PVT__FifSig) 
                                                                   & ((IData)(
                                                                              (0U 
                                                                               == 
                                                                               (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.COut)))) 
                                                                      | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.__PVT__FifSig)) 
                                                                 & (IData)(
                                                                           (0x1000U 
                                                                            == 
                                                                            (0x3000U 
                                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.COut))))) 
                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.__PVT__FifSig)) 
                                                                    & (IData)(
                                                                              (0x2000U 
                                                                               == 
                                                                               (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.COut))))) 
                                                                   | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.__PVT__FifSig) 
                                                                      & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.COut)))) 
                                                                         | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.__PVT__FifSig)) 
                                                                    & (IData)(
                                                                              (0x1000U 
                                                                               == 
                                                                               (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.COut))))) 
                                                                   | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.__PVT__FifSig)) 
                                                                       & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.COut))))) 
                                                                      | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.__PVT__FifSig) 
                                                                         & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.COut)))) 
                                                                            | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.__PVT__FifSig)) 
                                                                       & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.COut))))) 
                                                                      | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.__PVT__FifSig)) 
                                                                          & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.COut))))) 
                                                                         | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.__PVT__FifSig) 
                                                                            & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.COut)))) 
                                                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.__PVT__FifSig)) 
                                                                          & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.COut))))) 
                                                                         | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.__PVT__FifSig)) 
                                                                             & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.COut))))) 
                                                                            | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.__PVT__FifSig) 
                                                                               & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.__PVT__FifSig)) 
                                                                             & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.COut))))) 
                                                                            | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.COut))))) 
                                                                               | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.COut))))) 
                                                                               | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))))) 
                                                                                | (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))))) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.__PVT__FifSig) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.sixth1__DOT____VdfgTmp_h99ddda1a__0))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.__PVT__FifSig)) 
                                                                                & (IData)(
                                                                                (0x1000U 
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
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.sixth1__DOT____VdfgTmp_h99ddda1a__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mul_result 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SOut 
           + (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____VdfgTmp_hb9b19849__0 
                << 1U) | (QData)((IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                >> 0xeU))))) 
              + (QData)((IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                       >> 0xfU))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data 
        = (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                              >> 6U)))) & (((- (IData)(
                                                       (1U 
                                                        & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                            >> 0xbU) 
                                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                              >> 0xeU))))) 
                                            & (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded) 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & ((~ 
                                                               (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                >> 0xeU)) 
                                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                 >> 0xbU))))) 
                                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded)) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                  >> 0xcU) 
                                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                    >> 0xeU))))) 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded) 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded))) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 & ((~ 
                                                                     (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                      >> 0xeU)) 
                                                                    & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                       >> 0xcU))))) 
                                                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                                >> 0xbU)))))))) 
                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata)))))) 
           | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                 >> 7U)))) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mul_result)) 
              | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 8U)))) & (IData)(
                                                        (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mul_result 
                                                         >> 0x20U))) 
                 | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 9U)))) & (IData)(
                                                           (0x1ffffffffULL 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                                ? 
                                                               (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31) 
                                                                 == 
                                                                 (1U 
                                                                  & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete)
                                                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer)
                                                                      : 
                                                                     (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                                      >> 0x1fU))))
                                                                 ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS
                                                                 : 
                                                                (~ 
                                                                 (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS 
                                                                  - 1ULL)))
                                                                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS)))) 
                    | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                          >> 0xaU)))) 
                        & (IData)((0x1ffffffffULL & 
                                   ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                     ? ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31)
                                         ? (~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR 
                                               - 1ULL))
                                         : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR)
                                     : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR)))) 
                       | ((- (IData)((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7c0U 
                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))))))) 
                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U] 
                             & (- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__sc_cancel_req))))))))))));
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vsim_top__ConstPool__TABLE_h10c88e1c_0;

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__18(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__18\n"); );
    // Init
    SData/*10:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__u_vga__DOT__ram_oe_n 
        = (1U & (~ ((0x10fU <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__u_vga__DOT__hdata)) 
                    & ((0x20fU > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__u_vga__DOT__hdata)) 
                       & ((0xb4U <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__u_vga__DOT__vdata)) 
                          & (0x1a4U > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__u_vga__DOT__vdata)))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo3_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u3_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u3_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u3_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo2_rdata 
        = ((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u2_sync_fifo__DOT__mem
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__mem__v0;
    }
    __Vtableidx14 = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__msr_read) 
                      << 0xaU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                                   << 9U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__iir_read) 
                                              << 8U) 
                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__tf_push) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__fifo_read) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__lsr_mask) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__sys_resetn)))))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__uart0_int 
        = Vsim_top__ConstPool__TABLE_h10c88e1c_0[__Vtableidx14];
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
             & (0xf000U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_en 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg;
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
             & (0xf108U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__sys_timer_en 
                = (1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg);
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
             & (0xf104U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__sys_timer_cmp 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg;
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
             & (0xf200U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__digital_ctrl 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg;
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_commit) {
            if (((((((((0U == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr)) 
                       | (4U == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) 
                      | (8U == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) 
                     | (0xcU == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) 
                    | (0x10U == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) 
                   | (0x14U == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) 
                  | (0x18U == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) 
                 | (0x1cU == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr)))) {
                if ((0U != (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) {
                    if ((4U != (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) {
                        if ((8U == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) {
                            if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_strb))) {
                                vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_brightness_thresh 
                                    = (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_data);
                            }
                        }
                        if ((8U != (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) {
                            if ((0xcU == (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr))) {
                                if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_strb))) {
                                    vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_contrast_thresh 
                                        = (0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_data);
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
             & (0xf204U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__digital_data 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg;
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__ar_enter) 
             | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__aw_enter))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__ar_enter)
                    ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_araddr_reg
                    : vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awaddr_reg);
        }
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_en = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__sys_timer_en = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__sys_timer_cmp = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__digital_ctrl = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_brightness_thresh = 0x80U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__digital_data = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_contrast_thresh = 0x80U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__iir_read 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__re) 
           & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT____Vcellinp__regs__addr))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__fifo_read 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__re) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT____VdfgTmp_hd44b3af7__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__msr_read 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__re) 
           & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (6U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT____Vcellinp__regs__addr))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__tf_push 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__we) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT____VdfgTmp_hd44b3af7__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) 
           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_wready) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wlast_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_addr 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__aw_done)
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__awaddr_reg
            : vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_awaddr_reg);
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__w_done) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_strb 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__wstrb_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_data 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__wdata_reg;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_strb 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_wstrb_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_data 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_wdata_reg;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__write_commit 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__axi_bvalid)) 
           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__aw_done) 
               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__aw_capture)) 
              & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__w_done) 
                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__w_capture))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_Brightness_adjustment__DOT__adj_amount 
        = (0xffU & ((0x80U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_brightness_thresh))
                     ? ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_brightness_thresh) 
                        - (IData)(0x80U)) : ((IData)(0x80U) 
                                             - (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_brightness_thresh))));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_output) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_wdata_mux;
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_temp_to_output) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wdata_reg;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__ar_enter 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_arready));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__aw_enter 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_awready));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT____VdfgTmp_h11de1f82__0 
        = (0x1fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg 
                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_edge));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wdata_reg 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_wdata_mux;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__write_confreg_int_clr 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
           & (0xf00cU == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__write_confreg_int_set 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
           & (0xf010U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__store_axi_ar_input_to_output) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_araddr_reg 
            = ((0x5fU >= (0x7fU & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                   << 5U))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                     << 5U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_araddr[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                       << 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                      << 5U))))) 
                                               | (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_araddr[
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                      << 5U))))
                : 0U);
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__store_axi_aw_input_to_output) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awaddr_reg 
            = ((0x5fU >= (0x7fU & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                   << 5U))) ? (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                     << 5U)))
                                                 ? 0U
                                                 : 
                                                (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_awaddr[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                       << 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                      << 5U))))) 
                                               | (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_awaddr[
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                      << 5U))))
                : 0U);
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_wdata_mux 
        = ((0x5fU >= (0x7fU & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_reg) 
                               << 5U))) ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_reg) 
                                                 << 5U)))
                                             ? 0U : 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_wdata[
                                             (((IData)(0x1fU) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_reg) 
                                                     << 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_reg) 
                                                     << 5U))))) 
                                           | (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_wdata[
                                              (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_reg))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_reg) 
                                                     << 5U))))
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_araddr[0U] 
        = (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT___zz_ram_port1);
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_araddr[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT___zz_ram_port1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg))));
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_araddr[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT___zz_ram_port1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg))) 
                   >> 0x20U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__store_axi_ar_input_to_output = 0U;
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_arready_reg) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__store_axi_ar_input_to_output = 1U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_awaddr[0U] 
        = (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT___zz_ram_port1);
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_awaddr[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT___zz_ram_port1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg))));
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_awaddr[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT___zz_ram_port1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg))) 
                   >> 0x20U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__store_axi_aw_input_to_output = 0U;
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_awready_reg) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__store_axi_aw_input_to_output = 1U;
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__19(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__19\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_arvalid_mux 
        = (((0x17U >= (0x1fU & ((IData)(4U) + ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                               << 3U)))) 
            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_arvalid 
               >> (0x1fU & ((IData)(4U) + ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                           << 3U))))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_valid_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_arready 
        = ((0xe00000U & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hc583ae5a__0) 
                          << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                         << 0x15U)) | ((0x1c0000U & 
                                        (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hd8cc6df3__0) 
                                          << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                         << 0x12U)) 
                                       | ((0x38000U 
                                           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h34079e05__0) 
                                               << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                              << 0xfU)) 
                                          | ((0x7000U 
                                              & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h1fe56f6d__0) 
                                                  << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                                 << 0xcU)) 
                                             | ((0xe00U 
                                                 & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h35472875__0) 
                                                     << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                                    << 9U)) 
                                                | ((0x1c0U 
                                                    & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h0ce2c142__0) 
                                                        << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                                       << 6U)) 
                                                   | ((0x38U 
                                                       & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_ha20a1a81__0) 
                                                           << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h374469b8__0) 
                                                            << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_reg;
    if ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_valid_reg) 
          & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_valid_reg))) 
         & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_new_reg))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_next 
            = vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_awvalid_mux 
        = (((0x17U >= (0x1fU & ((IData)(4U) + ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                               << 3U)))) 
            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_awvalid 
               >> (0x1fU & ((IData)(4U) + ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                           << 3U))))) 
           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_valid_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_awready 
        = ((0xe00000U & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h73db6a18__0) 
                          << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                         << 0x15U)) | ((0x1c0000U & 
                                        (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h2c86a764__0) 
                                          << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                         << 0x12U)) 
                                       | ((0x38000U 
                                           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h07089f56__0) 
                                               << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                              << 0xfU)) 
                                          | ((0x7000U 
                                              & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h047754ab__0) 
                                                  << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                                 << 0xcU)) 
                                             | ((0xe00U 
                                                 & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h9c4d5895__0) 
                                                     << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                                    << 9U)) 
                                                | ((0x1c0U 
                                                    & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hf8e988ac__0) 
                                                        << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                                       << 6U)) 
                                                   | ((0x38U 
                                                       & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_had68fa65__0) 
                                                           << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h0013566c__0) 
                                                            << (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__trans_start 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_arvalid_mux) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h1fe56f6d__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg;
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_arready_reg) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_arvalid_mux;
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_arready) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__trans_start 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_awvalid_mux) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h047754ab__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_reg;
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_awready_reg) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_awvalid_mux;
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_awready) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next = 0U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> Vsim_top__ConstPool__TABLE_h18b094e1_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim_top__ConstPool__TABLE_h16f08759_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim_top__ConstPool__TABLE_hef51093e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim_top__ConstPool__TABLE_h4c120632_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim_top__ConstPool__TABLE_h31c4cd05_0;

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__1(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0;
    sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0 = 0;
    CData/*0:0*/ sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0;
    sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0 = 0;
    CData/*0:0*/ sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0;
    sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0 = 0;
    IData/*31:0*/ __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout;
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__unaligned_address;
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__unaligned_address = 0;
    CData/*7:0*/ __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__len;
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__len = 0;
    CData/*4:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_arready = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_d 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_q;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_burst 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_burst;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_id 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_id;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_addr 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_addr;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_len 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_len;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_size 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_size;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_awready = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_wready = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT____VdfgTmp_hfd6a6470__0 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_raw_int 
           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_pol);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT____VdfgTmp_h3b162c72__0 
        = ((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_raw_int) 
           & (~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_pol));
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bid 
        = (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_wr_inst__DOT__s_axi_bid_reg)) 
            << 0x2aU) | (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__s_axi_bid_reg)) 
                          << 0x1eU) | (QData)((IData)(
                                                      (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_id) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dvi__DOT__buf_id) 
                                                           << 0x12U) 
                                                          | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__s_bid_t) 
                                                                 << 6U) 
                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_bvalid)
                                                                    ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_bid)
                                                                    : 0U)))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bvalid 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_wr_inst__DOT__s_axi_bvalid_reg) 
            << 7U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__s_axi_bvalid_reg) 
                       << 5U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_bvalid) 
                                  << 4U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s3_axi_bvalid) 
                                             << 3U) 
                                            | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s2_axi_bvalid) 
                                                << 2U) 
                                               | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__s_bvalid_t) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_bvalid)))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rid 
        = (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_rd_inst__DOT__s_axi_rid_reg)) 
            << 0x2aU) | (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_rd_inst__DOT__s_axi_rid_reg)) 
                          << 0x1eU) | (QData)((IData)(
                                                      (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_id) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dvi__DOT__buf_id) 
                                                           << 0x12U) 
                                                          | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__buf_id) 
                                                                 << 6U) 
                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rvalid)
                                                                    ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rid)
                                                                    : 0U)))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rvalid 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_rd_inst__DOT__s_axi_rvalid_reg) 
            << 7U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_rd_inst__DOT__s_axi_rvalid_reg) 
                       << 5U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_rvalid) 
                                  << 4U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s3_axi_rvalid) 
                                             << 3U) 
                                            | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s2_axi_rvalid) 
                                                << 2U) 
                                               | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__s_rvalid_reg) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rvalid)))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_bready 
        = ((0x17U >= (0x1fU & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__b_select) 
                               << 3U))) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_bready 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__b_select) 
                                                  << 3U))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_rready 
        = ((0x17U >= (0x1fU & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__r_select) 
                               << 3U))) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_rready 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__r_select) 
                                                  << 3U))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_acknowledge 
        = ((0xffffff00U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                              << 8U))) | ((0xffffff80U 
                                           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                              & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hc804f6e6__0) 
                                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                                                 << 7U))) 
                                          | ((0xffffffe0U 
                                              & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                 & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h683e81c2__0) 
                                                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                                                    << 5U))) 
                                             | ((0xfffffff0U 
                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                    & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h06cf4eba__0) 
                                                        & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                                                       << 4U))) 
                                                | ((0xfffffff8U 
                                                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                       & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h8ee41e40__0) 
                                                           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                                                          << 3U))) 
                                                   | ((0xfffffffcU 
                                                       & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                          & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h47110e03__0) 
                                                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                                                             << 2U))) 
                                                      | ((0xfffffffeU 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                             & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h39fefb9c__0) 
                                                                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                                                                << 1U))) 
                                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hc091bfef__0) 
                                                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request 
        = ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                 >> 8U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg)) 
            << 8U) | ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                            >> 7U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hc804f6e6__0)) 
                       << 7U) | ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                       >> 5U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h683e81c2__0)) 
                                  << 5U) | ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                  >> 4U)) 
                                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h06cf4eba__0)) 
                                             << 4U) 
                                            | ((((~ 
                                                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                   >> 3U)) 
                                                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h8ee41e40__0)) 
                                                << 3U) 
                                               | ((((~ 
                                                     ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                      >> 2U)) 
                                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h47110e03__0)) 
                                                   << 2U) 
                                                  | ((((~ 
                                                        ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                         >> 1U)) 
                                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h39fefb9c__0)) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg)) 
                                                        & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hc091bfef__0)))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_acknowledge 
        = ((0xffffff00U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                              << 8U))) | ((0xffffff80U 
                                           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                              & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h1b1abc2e__0) 
                                                  << 6U) 
                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                    << 7U)))) 
                                          | ((0xffffffe0U 
                                              & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                 & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h30f51473__0) 
                                                     << 4U) 
                                                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                       << 5U)))) 
                                             | ((0xfffffff0U 
                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                    & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h39e1126b__0) 
                                                        << 3U) 
                                                       & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                          << 4U)))) 
                                                | ((0xfffffff8U 
                                                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                       & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_ha3660a6a__0) 
                                                           << 2U) 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                             << 3U)))) 
                                                   | ((0xfffffffcU 
                                                       & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                          & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hb4c3a012__0) 
                                                              << 1U) 
                                                             & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                                << 2U)))) 
                                                      | ((0xfffffffeU 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                             & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h06c83b4d__0) 
                                                                & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                                   << 1U)))) 
                                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                            & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hacd91590__0) 
                                                                >> 1U) 
                                                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_acknowledge 
        = ((0xffffff00U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_bvalid_reg) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg)) 
                              << 8U))) | ((0xffffff80U 
                                           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                              & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h1b1abc2e__0) 
                                                  << 5U) 
                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                    << 7U)))) 
                                          | ((0xffffffe0U 
                                              & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                 & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h30f51473__0) 
                                                     << 3U) 
                                                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                       << 5U)))) 
                                             | ((0xfffffff0U 
                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                    & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h39e1126b__0) 
                                                        << 2U) 
                                                       & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                          << 4U)))) 
                                                | ((0xfffffff8U 
                                                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                       & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_ha3660a6a__0) 
                                                           << 1U) 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                             << 3U)))) 
                                                   | ((0xfffffffcU 
                                                       & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hb4c3a012__0) 
                                                             & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                                << 2U)))) 
                                                      | ((0x7ffffffeU 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                             & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h06c83b4d__0) 
                                                                 >> 1U) 
                                                                & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) 
                                                                   << 1U)))) 
                                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                            & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hacd91590__0) 
                                                                >> 2U) 
                                                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request 
        = ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                 >> 8U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg)) 
            << 8U) | ((0x80U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                     >> 7U)) << 7U) 
                                & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h1b1abc2e__0) 
                                   << 6U))) | ((0x20U 
                                                & (((~ 
                                                     ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                      >> 5U)) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h30f51473__0) 
                                                      << 4U))) 
                                               | ((0x10U 
                                                   & (((~ 
                                                        ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                         >> 4U)) 
                                                       << 4U) 
                                                      & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h39e1126b__0) 
                                                         << 3U))) 
                                                  | ((8U 
                                                      & (((~ 
                                                           ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                            >> 3U)) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_ha3660a6a__0) 
                                                            << 2U))) 
                                                     | ((4U 
                                                         & (((~ 
                                                              ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                               >> 2U)) 
                                                             << 2U) 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hb4c3a012__0) 
                                                               << 1U))) 
                                                        | ((2U 
                                                            & (((~ 
                                                                 ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                                  >> 1U)) 
                                                                << 1U) 
                                                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h06c83b4d__0))) 
                                                           | (1U 
                                                              & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg)) 
                                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hacd91590__0) 
                                                                    >> 1U))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request 
        = ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                 >> 8U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_bvalid_reg)) 
            << 8U) | (((IData)(((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                    >> 7U)) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h1b1abc2e__0) 
                                               >> 2U))) 
                       << 7U) | (((IData)(((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                               >> 5U)) 
                                           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h30f51473__0) 
                                              >> 2U))) 
                                  << 5U) | (((IData)(
                                                     ((~ 
                                                       ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                        >> 4U)) 
                                                      & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h39e1126b__0) 
                                                         >> 2U))) 
                                             << 4U) 
                                            | (((IData)(
                                                        ((~ 
                                                          ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                           >> 3U)) 
                                                         & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_ha3660a6a__0) 
                                                            >> 2U))) 
                                                << 3U) 
                                               | (((IData)(
                                                           ((~ 
                                                             ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                              >> 2U)) 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hb4c3a012__0) 
                                                               >> 2U))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              ((~ 
                                                                ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                                                 >> 1U)) 
                                                               & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_h06c83b4d__0) 
                                                                  >> 2U))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg)) 
                                                        & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT____VdfgTmp_hacd91590__0) 
                                                           >> 2U)))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request 
        = ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                 >> 8U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg)) 
            << 8U) | ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                            >> 7U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h47b077ad__0)) 
                       << 7U) | ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                       >> 5U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hc1bec046__0)) 
                                  << 5U) | ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                  >> 4U)) 
                                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h15d2211a__0)) 
                                             << 4U) 
                                            | ((((~ 
                                                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                   >> 3U)) 
                                                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2e092b0e__0)) 
                                                << 3U) 
                                               | ((((~ 
                                                     ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                      >> 2U)) 
                                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hbff92b83__0)) 
                                                   << 2U) 
                                                  | ((((~ 
                                                        ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                         >> 1U)) 
                                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h87bb5df0__0)) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg)) 
                                                        & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2da1c7a6__0)))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request 
        = ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                 >> 8U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg)) 
            << 8U) | ((0x80U & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                     >> 7U)) << 7U) 
                                & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hb74f63a4__0) 
                                   << 6U))) | ((0x20U 
                                                & (((~ 
                                                     ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                      >> 5U)) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h5e21b439__0) 
                                                      << 4U))) 
                                               | ((0x10U 
                                                   & (((~ 
                                                        ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                         >> 4U)) 
                                                       << 4U) 
                                                      & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h24d2997d__0) 
                                                         << 3U))) 
                                                  | ((8U 
                                                      & (((~ 
                                                           ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                            >> 3U)) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h19be2e40__0) 
                                                            << 2U))) 
                                                     | ((4U 
                                                         & (((~ 
                                                              ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                               >> 2U)) 
                                                             << 2U) 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_haab99ef2__0) 
                                                               << 1U))) 
                                                        | ((2U 
                                                            & (((~ 
                                                                 ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                                  >> 1U)) 
                                                                << 1U) 
                                                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h9ab06448__0))) 
                                                           | (1U 
                                                              & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg)) 
                                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hbde9209c__0) 
                                                                    >> 1U))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request 
        = ((((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                 >> 8U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_rvalid_reg)) 
            << 8U) | (((IData)(((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                    >> 7U)) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hb74f63a4__0) 
                                               >> 2U))) 
                       << 7U) | (((IData)(((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                               >> 5U)) 
                                           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h5e21b439__0) 
                                              >> 2U))) 
                                  << 5U) | (((IData)(
                                                     ((~ 
                                                       ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                        >> 4U)) 
                                                      & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h24d2997d__0) 
                                                         >> 2U))) 
                                             << 4U) 
                                            | (((IData)(
                                                        ((~ 
                                                          ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                           >> 3U)) 
                                                         & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h19be2e40__0) 
                                                            >> 2U))) 
                                                << 3U) 
                                               | (((IData)(
                                                           ((~ 
                                                             ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                              >> 2U)) 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_haab99ef2__0) 
                                                               >> 2U))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              ((~ 
                                                                ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                                 >> 1U)) 
                                                               & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h9ab06448__0) 
                                                                  >> 2U))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg)) 
                                                        & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hbde9209c__0) 
                                                           >> 2U)))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__aligned_address 
        = (0xfffffffcU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_addr);
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__len 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_len;
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__unaligned_address 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_addr;
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout = 0U;
    if ((1U == (IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__len))) {
        __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout 
            = ((7U & __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout) 
               | (0xfffffff8U & __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__unaligned_address));
    } else if ((3U == (IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__len))) {
        __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout 
            = ((0xfU & __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout) 
               | (0xfffffff0U & __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__unaligned_address));
    } else if ((7U == (IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__len))) {
        __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout 
            = ((0x1fU & __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout) 
               | (0x7fffffe0U & (__Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__unaligned_address 
                                 << 1U)));
    } else if ((0xfU == (IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__len))) {
        __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout 
            = ((0x3fU & __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout) 
               | (0x3fffffc0U & __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__unaligned_address));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__wrap_boundary 
        = __Vfunc_sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__get_wrap_boundary__0__Vfuncout;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__upper_wrap_boundary 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__wrap_boundary 
           + (((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_len)) 
              << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__aligned_address 
           + ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_q) 
              << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__req_addr_d 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__req_addr_q;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg;
    if ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_arready = 1U;
        }
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_arready_reg) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_arvalid_mux;
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_arready) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_reg;
    if ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_d = 1U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_burst 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arburst_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_id 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arid_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_araddr_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_len 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arlen_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_size 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arsize_reg;
        } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_awvalid_gated) {
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_d = 1U;
            }
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_burst 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awburst_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_id 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awid_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awaddr_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_len 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awlen_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_size 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awsize_reg;
        }
        if ((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg)))) {
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_awvalid_gated) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_awready = 1U;
            }
        }
    } else if ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_d = 1U;
        }
    } else if ((1U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if ((6U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_d 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_q)));
        } else if ((5U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
                if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_d 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_q)));
                }
            }
        }
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__s_axi_awready_reg) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_awvalid_mux;
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_awready) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next = 0U;
    }
    if ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg)))) {
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_awvalid_gated) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_wready = 1U;
            }
        }
    } else if ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_wready = 1U;
    } else if ((1U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if ((6U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            if ((5U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_wready = 0U;
            } else if ((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_wready = 1U;
            }
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_wready 
        = (0x40U | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_wr_inst__DOT__s_axi_wready_reg) 
                     << 7U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__s_axi_wready_reg) 
                                << 5U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_wready) 
                                           << 4U) | 
                                          (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s3_axi_wready) 
                                            << 3U) 
                                           | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s2_axi_wready) 
                                               << 2U) 
                                              | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__current_s_wready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_wready))))))));
    if ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs = 1U;
        } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_awvalid_gated) {
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg)))) {
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_awvalid_gated) {
                if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we = 1U;
                }
            }
        }
    } else if ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs = 1U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we = 1U;
        }
    } else {
        if ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs = 1U;
        } else if ((6U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs = 1U;
        } else if ((5U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
                if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs = 1U;
                }
            }
        }
        if ((1U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            if ((6U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
                if ((5U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
                    if ((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
                        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__be_out 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wstrb_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hdc52538b__0 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__be_out = 0xfU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hdc52538b__0 = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_state 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_pending 
           | (0x1fU & ((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_edge) 
                       & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT____VdfgTmp_hfd6a6470__0 
                          | vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT____VdfgTmp_h3b162c72__0))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id 
        = (0xfU & (IData)(((0x33U >= ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)))
                            ? (0xfffffffffffffULL & 
                               ((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bid_reg)) 
                                  << 0x30U) | vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bid) 
                                >> ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg))))
                            : 0ULL)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id 
        = (0xfU & (IData)(((0x33U >= ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)))
                            ? (0xfffffffffffffULL & 
                               ((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bid_reg)) 
                                  << 0x30U) | vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bid) 
                                >> ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg))))
                            : 0ULL)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_id 
        = (0xfU & (IData)(((0x33U >= ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)))
                            ? (0xfffffffffffffULL & 
                               ((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_bid_reg)) 
                                  << 0x30U) | vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bid) 
                                >> ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_encoded_reg))))
                            : 0ULL)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_bvalid_mux 
        = (0x1ffU & (((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg) 
                        << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bvalid)) 
                      >> (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)) 
                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_bvalid_mux 
        = (0x1ffU & (((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_bvalid_reg) 
                        << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bvalid)) 
                      >> (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)) 
                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_bvalid_mux 
        = (0x1ffU & (((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_bvalid_reg) 
                        << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bvalid)) 
                      >> (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_encoded_reg)) 
                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_valid_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id 
        = (0xfU & (IData)(((0x33U >= ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)))
                            ? (0xfffffffffffffULL & 
                               ((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rid_reg)) 
                                  << 0x30U) | vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rid) 
                                >> ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg))))
                            : 0ULL)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_id 
        = (0xfU & (IData)(((0x33U >= ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)))
                            ? (0xfffffffffffffULL & 
                               ((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_rid_reg)) 
                                  << 0x30U) | vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rid) 
                                >> ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_reg))))
                            : 0ULL)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id 
        = (0xfU & (IData)(((0x33U >= ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)))
                            ? (0xfffffffffffffULL & 
                               ((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rid_reg)) 
                                  << 0x30U) | vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rid) 
                                >> ((IData)(6U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg))))
                            : 0ULL)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rvalid_mux 
        = (0x1ffU & (((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg) 
                        << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rvalid)) 
                      >> (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)) 
                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rvalid_mux 
        = (0x1ffU & (((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg) 
                        << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rvalid)) 
                      >> (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)) 
                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rvalid_mux 
        = (0x1ffU & (((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_rvalid_reg) 
                        << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rvalid)) 
                      >> (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)) 
                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_valid_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_bvalid) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_bready));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rlast = 0U;
    if ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_reg) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_araddr_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__req_addr_d 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_araddr_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d = 1U;
        } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_awvalid_gated) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awaddr_reg;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg)
                    ? ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wlast_reg)
                        ? 3U : 5U) : 4U);
        }
    } else if ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_addr;
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wlast_reg)
                    ? 3U : 2U);
        }
    } else if ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__req_addr_q;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rlast 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_q) 
               == ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_len)));
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_rready) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rlast)
                    ? 0U : 6U);
        }
    } else if ((6U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if (((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_burst)) 
             | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_burst)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr;
        } else if ((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_burst))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr 
                    == vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__upper_wrap_boundary)
                    ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__wrap_boundary
                    : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr 
                        > vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__upper_wrap_boundary)
                        ? (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_addr 
                           + (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_q) 
                               - (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_len)) 
                              << 2U)) : vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr));
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__req_addr_d 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d = 1U;
    } else {
        if ((5U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
                if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
                    if (((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_burst)) 
                         | (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_burst)))) {
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr;
                    } else if ((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_burst))) {
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                            = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr 
                                == vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__upper_wrap_boundary)
                                ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__wrap_boundary
                                : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr 
                                    > vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__upper_wrap_boundary)
                                    ? (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_addr 
                                       + (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_q) 
                                           - (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_q_len)) 
                                          << 2U)) : vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr));
                    }
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__req_addr_d 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr;
                }
            }
        }
        if ((5U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d = 2U;
        } else if ((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d = 5U;
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) {
                if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wlast_reg) {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d = 3U;
                }
            }
        } else if ((3U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_bready) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d = 0U;
            }
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__mask_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request));
    vlSelf->sim_top__DOT__ext_ram_ce_n = (1U & ((~ 
                                                 (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                                  >> 0x16U)) 
                                                | (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs))));
    vlSelf->sim_top__DOT__u_base_sram__DOT____VdfgTmp_he15977e2__0 
        = ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
               >> 0x16U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hb164851c__0 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
            >> 0x16U) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hdc52538b__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hd0f82218__0 
        = ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
               >> 0x16U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hdc52538b__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_reg;
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_bvalid_mux;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_bvalid_mux;
    } else {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_bready_reg) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next = 0U;
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_bvalid_mux) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_valid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_bvalid_mux) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__m_axi_bready_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [1U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_count_reg
            [0U]) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_id_reg
                     [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id)));
    __Vtableidx9 = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rvalid_mux) 
                     << 4U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_rready_reg) 
                                << 3U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg) 
                                           << 2U) | 
                                          (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_reg) 
                                            << 1U) 
                                           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_next 
        = Vsim_top__ConstPool__TABLE_h18b094e1_0[__Vtableidx9];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_next 
        = Vsim_top__ConstPool__TABLE_h16f08759_0[__Vtableidx9];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_output 
        = Vsim_top__ConstPool__TABLE_hef51093e_0[__Vtableidx9];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_temp 
        = Vsim_top__ConstPool__TABLE_h4c120632_0[__Vtableidx9];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_temp_to_output 
        = Vsim_top__ConstPool__TABLE_h31c4cd05_0[__Vtableidx9];
    vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_rlast 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rlast) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rvalid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfeU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfdU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 4U)))) 
                     << 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xfbU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (4U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 4U)) << 2U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 6U)))) 
                     << 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xf7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (8U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 6U)) << 3U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 8U)))) 
                     << 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xefU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x10U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 8U)) << 4U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xaU)))) 
                     << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xdfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x20U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xaU)) << 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xcU)))) 
                     << 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0xbfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x40U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xcU)) << 6U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 0xeU)))) 
                     << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((0x7fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (0x80U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded) 
                                  >> 0xeU)) << 7U)));
    vlSelf->sim_top__DOT__u_ext_sram__DOT__write_enable 
        = (((0x400000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr)
             ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__be_out)
             : 0U) & (- (IData)((1U & ((~ (IData)(vlSelf->sim_top__DOT__ext_ram_ce_n)) 
                                       & (~ ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                                 >> 0x16U)) 
                                             | (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we)))))))));
    vlSelf->sim_top__DOT__u_ext_sram__DOT____VdfgTmp_hf7796532__0 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__ext_ram_ce_n)) 
                 & (~ ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                           >> 0x16U)) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we)))));
    vlSelf->sim_top__DOT__u_base_sram__DOT__write_enable 
        = (((0x400000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr)
             ? 0U : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__be_out)) 
           & (- (IData)((((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                              >> 0x16U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we)) 
                         & (IData)(vlSelf->sim_top__DOT__u_base_sram__DOT____VdfgTmp_he15977e2__0)))));
    vlSelf->sim_top__DOT__u_base_sram__DOT____VdfgTmp_hf7796532__0 
        = ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we) 
               | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                  >> 0x16U))) & (IData)(vlSelf->sim_top__DOT__u_base_sram__DOT____VdfgTmp_he15977e2__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_reg) 
           & (~ ((0x17U >= (0x1fU & ((IData)(1U) + 
                                     ((IData)(3U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_reg))))) 
                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_awready 
                    >> (0x1fU & ((IData)(1U) + ((IData)(3U) 
                                                * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_reg))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_valid_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_bvalid_reg));
    if ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_reg))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awvalid_reg) 
             & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_reg)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 0U;
            if ((0x38U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg 
                           >> 0x17U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x110U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f0U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f1U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f2U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f3U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f4U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f5U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awaddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match) {
                if ((1U & ((~ ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)) 
                               & (0x10U <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_count_reg)))) 
                           & ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hbab125fe__0) 
                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_m_reg
                                   [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next))) 
                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hdee7e73e__0) 
                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_m_reg
                                     [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next)))) 
                              | ((~ (IData)((3U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_active)))) 
                                 & (~ (IData)((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match))))))))) {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
                } else {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next = 1U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 1U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next = 1U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
            }
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((1U & (((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next)) 
                    & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next))) 
                   & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next))))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 1U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_valid)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rvalid) 
           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_rready) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_rlast)));
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rlast 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_rd_inst__DOT__s_axi_rlast_reg) 
            << 7U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_rd_inst__DOT__s_axi_rlast_reg) 
                       << 5U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_rlast) 
                                  << 4U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s3_axi_rlast) 
                                             << 3U) 
                                            | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s2_axi_rlast) 
                                                << 2U) 
                                               | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__s_rlast_reg) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_rlast)))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_acknowledge))))))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_reg;
    } else if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
                [3U])) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_next = 1U;
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                   [3U]);
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                   [3U]);
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__mask_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_acknowledge))))))))) {
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__mask_next 
                = (0x1ffU & ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
                              [3U]) ? ((8U >= ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        ? ((IData)(0x1ffU) 
                                           << ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        : 0U) : ((8U 
                                                  >= 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  ? 
                                                 ((IData)(0x1ffU) 
                                                  << 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  : 0U)));
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_acknowledge))))))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_reg;
    } else if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
                [3U])) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_next = 1U;
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                   [3U]);
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                   [3U]);
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__mask_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_acknowledge))))))))) {
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__mask_next 
                = (0x1ffU & ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
                              [3U]) ? ((8U >= ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        ? ((IData)(0x1ffU) 
                                           << ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        : 0U) : ((8U 
                                                  >= 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  ? 
                                                 ((IData)(0x1ffU) 
                                                  << 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  : 0U)));
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_acknowledge))))))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_valid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_valid_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_encoded_reg;
    } else if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
                [3U])) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_valid_next = 1U;
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                   [3U]);
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                   [3U]);
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__mask_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_acknowledge))))))))) {
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__mask_next 
                = (0x1ffU & ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
                              [3U]) ? ((8U >= ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        ? ((IData)(0x1ffU) 
                                           << ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        : 0U) : ((8U 
                                                  >= 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  ? 
                                                 ((IData)(0x1ffU) 
                                                  << 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  : 0U)));
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request 
        = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h26cb786c__0) 
             & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_reg) 
                    >> 2U)) & (~ ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete)) 
                                  & (4U <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_count_reg)))))) 
            << 2U) | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h107de08e__0) 
                        & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_reg) 
                               >> 1U)) & (~ ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete)) 
                                             & (4U 
                                                <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_count_reg)))))) 
                       << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h27b3ace4__0) 
                                 & ((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_reg)) 
                                    & (~ ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete)) 
                                          & (4U <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_count_reg))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rlast_mux 
        = (1U & ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_reg) 
                   << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rlast)) 
                 >> (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rlast_mux 
        = (1U & ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_reg) 
                   << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rlast)) 
                 >> (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rlast_mux 
        = (1U & ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_rlast_reg) 
                   << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rlast)) 
                 >> (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_reg)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rvalid_mux) 
           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rlast_mux)));
    sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rlast_mux) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rvalid_mux) 
           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rlast_mux)));
    sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rlast_mux) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_valid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rvalid_mux) 
           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rlast_mux)));
    sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rlast_mux) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_acknowledge 
        = ((0xffffff00U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rvalid_reg) 
                               & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__decerr_m_axi_rlast_reg) 
                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg))) 
                              << 8U))) | ((0xffffff80U 
                                           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                              & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h47b077ad__0) 
                                                  & (IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0)) 
                                                 << 7U))) 
                                          | ((0xffffffe0U 
                                              & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                 & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hc1bec046__0) 
                                                     & (IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0)) 
                                                    << 5U))) 
                                             | ((0xfffffff0U 
                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                    & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h15d2211a__0) 
                                                        & (IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0)) 
                                                       << 4U))) 
                                                | ((0xfffffff8U 
                                                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                       & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2e092b0e__0) 
                                                           & (IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0)) 
                                                          << 3U))) 
                                                   | ((0xfffffffcU 
                                                       & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                          & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hbff92b83__0) 
                                                              & (IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0)) 
                                                             << 2U))) 
                                                      | ((0xfffffffeU 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                             & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h87bb5df0__0) 
                                                                 & (IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0)) 
                                                                << 1U))) 
                                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2da1c7a6__0) 
                                                               & (IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h2b9cc33b__0))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_reg) 
           & (~ ((0x17U >= (0x1fU & ((IData)(1U) + 
                                     ((IData)(3U) * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_reg))))) 
                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_arready 
                    >> (0x1fU & ((IData)(1U) + ((IData)(3U) 
                                                * (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_reg))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_reg) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg));
    if ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_reg))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 0U;
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_arvalid_reg) 
             & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_reg)))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 0U;
            if ((0x38U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg 
                           >> 0x17U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x110U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f0U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f1U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f2U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f3U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f4U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if ((0x1f5U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_araddr_reg 
                            >> 0x14U))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match = 1U;
            }
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match) {
                if ((1U & ((~ ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid)) 
                               & (0x10U <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_count_reg)))) 
                           & ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hbab125fe__0) 
                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_m_reg
                                   [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next))) 
                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_hdee7e73e__0) 
                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_m_reg
                                     [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_select_next)))) 
                              | ((~ (IData)((3U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_active)))) 
                                 & (~ (IData)((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_match))))))))) {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
                } else {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next = 1U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next = 1U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
            }
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_reg))) {
        if ((1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next)) 
                   & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next))))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next = 1U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 0U;
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next = 1U;
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_acknowledge 
        = ((0xffffff00U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rvalid_reg) 
                               & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__decerr_m_axi_rlast_reg) 
                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg))) 
                              << 8U))) | ((0xffffff80U 
                                           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                              & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hb74f63a4__0) 
                                                  << 6U) 
                                                 & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0) 
                                                    << 7U)))) 
                                          | ((0xffffffe0U 
                                              & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                 & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h5e21b439__0) 
                                                     << 4U) 
                                                    & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0) 
                                                       << 5U)))) 
                                             | ((0xfffffff0U 
                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                    & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h24d2997d__0) 
                                                        << 3U) 
                                                       & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0) 
                                                          << 4U)))) 
                                                | ((0xfffffff8U 
                                                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                       & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h19be2e40__0) 
                                                           << 2U) 
                                                          & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0) 
                                                             << 3U)))) 
                                                   | ((0xfffffffcU 
                                                       & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                          & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_haab99ef2__0) 
                                                              << 1U) 
                                                             & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0) 
                                                                << 2U)))) 
                                                      | ((0xfffffffeU 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                             & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h9ab06448__0) 
                                                                & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0) 
                                                                   << 1U)))) 
                                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                            & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hbde9209c__0) 
                                                                >> 1U) 
                                                               & (IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h381eacbf__0))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_trans_complete 
        = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_valid)) 
            << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_valid)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_acknowledge 
        = ((0xffffff00U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_rvalid_reg) 
                               & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__decerr_m_axi_rlast_reg) 
                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_rready_reg))) 
                              << 8U))) | ((0xffffff80U 
                                           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                              & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hb74f63a4__0) 
                                                  << 5U) 
                                                 & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0) 
                                                    << 7U)))) 
                                          | ((0xffffffe0U 
                                              & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                 & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h5e21b439__0) 
                                                     << 3U) 
                                                    & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0) 
                                                       << 5U)))) 
                                             | ((0xfffffff0U 
                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                    & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h24d2997d__0) 
                                                        << 2U) 
                                                       & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0) 
                                                          << 4U)))) 
                                                | ((0xfffffff8U 
                                                    & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                       & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h19be2e40__0) 
                                                           << 1U) 
                                                          & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0) 
                                                             << 3U)))) 
                                                   | ((0xfffffffcU 
                                                       & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_haab99ef2__0) 
                                                             & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0) 
                                                                << 2U)))) 
                                                      | ((0x7ffffffeU 
                                                          & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                             & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h9ab06448__0) 
                                                                 >> 1U) 
                                                                & ((IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0) 
                                                                   << 1U)))) 
                                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                                            & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_hbde9209c__0) 
                                                                >> 2U) 
                                                               & (IData)(sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT____VdfgTmp_h16299bff__0))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_acknowledge))))))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg;
    } else if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
                [3U])) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_next = 1U;
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                   [3U]);
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                   [3U]);
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__mask_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_acknowledge))))))))) {
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__mask_next 
                = (0x1ffU & ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
                              [3U]) ? ((8U >= ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        ? ((IData)(0x1ffU) 
                                           << ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        : 0U) : ((8U 
                                                  >= 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  ? 
                                                 ((IData)(0x1ffU) 
                                                  << 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  : 0U)));
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_acknowledge))))))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg;
    } else if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
                [3U])) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_next = 1U;
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                   [3U]);
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                   [3U]);
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__mask_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_acknowledge))))))))) {
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__mask_next 
                = (0x1ffU & ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
                              [3U]) ? ((8U >= ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        ? ((IData)(0x1ffU) 
                                           << ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        : 0U) : ((8U 
                                                  >= 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  ? 
                                                 ((IData)(0x1ffU) 
                                                  << 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  : 0U)));
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_valid_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_next = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_next = 0U;
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
         & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_acknowledge))))))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_valid_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_valid_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_reg;
    } else if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
                [3U])) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_valid_next = 1U;
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                   [3U]);
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_next 
                = (0x1ffU & ((IData)(1U) << (0xfU & 
                                             vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                             [3U])));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_next 
                = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                   [3U]);
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__mask_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__mask_reg;
    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_valid_reg) 
                  & (~ (IData)((0U != ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_reg) 
                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_acknowledge))))))))) {
        if ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_valid
             [3U])) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__mask_next 
                = (0x1ffU & ((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_valid
                              [3U]) ? ((8U >= ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        ? ((IData)(0x1ffU) 
                                           << ((IData)(1U) 
                                               + (0xfU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_masked__DOT__stage_enc
                                                  [3U])))
                                        : 0U) : ((8U 
                                                  >= 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  ? 
                                                 ((IData)(0x1ffU) 
                                                  << 
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__priority_encoder_inst__DOT__stage_enc
                                                    [3U])))
                                                  : 0U)));
        }
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__30(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__30\n"); );
    // Init
    SData/*15:0*/ __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout;
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator;
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator = 0;
    QData/*32:0*/ __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended;
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended = 0;
    CData/*5:0*/ __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0;
    __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0;
    __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0;
    __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0;
    __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0 = 0;
    // Body
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_resetn) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__ins_valid_reg = 0U;
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_clear_final) {
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_done_reg = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_error_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_pending = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_seen_valid = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_done_reg = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_error_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_phase = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_src_addr_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_ub_addr_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_araddr_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arlen_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_txn_is_data_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_beats_left_reg = 0U;
            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_word_index = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_addr_reg = 0U;
        } else {
            if ((((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state)) 
                  | (5U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state))) 
                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_start_final))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 1U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_done_reg = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_error_reg = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_pending = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__tpu_pc_current 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_payload_tpu;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_seen_valid = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index = 0U;
                if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_hit_0) 
                     | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_hit_1))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_slot 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_hit_1;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 6U;
                } else {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay = 0U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_overflow = 0U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count = 0U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 1U;
                    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_0) {
                        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_1) {
                            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replace_slot) {
                                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_fill_slot = 1U;
                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_base_1 
                                    = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_payload_tpu;
                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_1 = 0U;
                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replace_slot = 0U;
                            } else {
                                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_fill_slot = 0U;
                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_base_0 
                                    = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_payload_tpu;
                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_0 = 0U;
                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replace_slot = 1U;
                            }
                        } else {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_fill_slot = 1U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_base_1 
                                = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_payload_tpu;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_1 = 0U;
                        }
                    } else {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_fill_slot = 0U;
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_base_0 
                            = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_payload_tpu;
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_0 = 0U;
                    }
                }
            } else if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state))) {
                if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state))) {
                    if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state))) {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 0U;
                    } else {
                        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_last_ins 
                            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_word;
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__ins_reg 
                            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_word;
                        if ((0xfU == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_word 
                                      >> 0x1cU))) {
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_done_reg = 0U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 1U;
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_pending = 1U;
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count = 0U;
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 5U;
                        } else if ((5U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_word 
                                           >> 0x1cU))) {
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type 
                                = (0xfU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_word 
                                           >> 0x18U));
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_limit 
                                = (0xffffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_word);
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter = 0U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_seen_valid = 0U;
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 4U;
                        } else {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 3U;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg = 0U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg = 0U;
                    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_pending) {
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 1U;
                        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__vpu_valid_any) {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count = 0U;
                        } else if ((0xffU <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count))) {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_pending = 0U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_done_reg = 1U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 0U;
                        } else {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count)));
                        }
                    } else {
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 0U;
                    }
                } else {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter 
                        = (0xffffffU & ((IData)(1U) 
                                        + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter));
                    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_signal) {
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_seen_valid = 1U;
                    }
                    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_cycles_done) 
                         | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_signal_done))) {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__tpu_pc_current 
                            = ((IData)(4U) + vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_pc_current);
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter = 0U;
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_seen_valid = 0U;
                        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay) {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index)));
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 6U;
                        } else {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 1U;
                        }
                    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_timeout) {
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_error_reg = 1U;
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_done_reg = 1U;
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 0U;
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 5U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state))) {
                if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__tpu_pc_current 
                        = ((IData)(4U) + vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_pc_current);
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__ins_valid_reg = 1U;
                    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay) {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index)));
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 6U;
                    } else {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 1U;
                    }
                } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_r_handshake) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_last_ins 
                        = (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1);
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__ins_reg 
                        = (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1);
                    if ((IData)((0x4000000000ULL != 
                                 (0x7000000000ULL & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1)))) {
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_error_reg = 1U;
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_done_reg = 1U;
                        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 0U;
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 5U;
                    } else {
                        if (((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_overflow)) 
                             & (0x40U > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count)))) {
                            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_fill_slot) {
                                __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0 
                                    = (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1);
                                vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0 = 1U;
                                __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0 
                                    = (0x3fU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count));
                            } else {
                                __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0 
                                    = (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1);
                                vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0 = 1U;
                                __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0 
                                    = (0x3fU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count));
                            }
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count)));
                        } else {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_overflow = 1U;
                        }
                        if ((0xfU == (0xfU & (IData)(
                                                     (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                                      >> 0x1cU))))) {
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_done_reg = 0U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 1U;
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_pending = 1U;
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count = 0U;
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 5U;
                            if (((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_overflow)) 
                                 & (0x40U > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count)))) {
                                if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_fill_slot) {
                                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_1 = 1U;
                                } else {
                                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_0 = 1U;
                                }
                            }
                        } else if ((5U == (0xfU & (IData)(
                                                          (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                                           >> 0x1cU))))) {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter = 0U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type 
                                = (0xfU & (IData)((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                                   >> 0x18U)));
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_limit 
                                = (0xffffffU & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_seen_valid = 0U;
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 4U;
                        } else {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 3U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 1U;
                if ((1U & ((((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg)) 
                             & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg))) 
                            & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg))) 
                           & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg))))) {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_araddr_reg 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_pc_current;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg = 1U;
                }
                if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_ar_handshake) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg = 0U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg = 1U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 2U;
                }
            } else {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg = 0U;
            }
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_start_final) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_done_reg = 0U;
            }
            if (((((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg) 
                     & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg))) 
                    & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg))) 
                   & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay) 
                      | ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state)) 
                         | ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state)) 
                            | (5U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state)))))) 
                  & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg))) 
                 & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg)))) {
                if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_phase) {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_araddr_reg 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_src_addr_reg;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arlen_reg 
                        = (0xffU & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_next_beats) 
                                    - (IData)(1U)));
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_txn_is_data_reg = 1U;
                } else {
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_araddr_reg 
                        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_addr_reg;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arlen_reg = 1U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_txn_is_data_reg = 0U;
                }
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg = 1U;
            }
            if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_dma_req_valid) 
                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_dma_req_ready))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_done_reg = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_phase = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_word_index = 0U;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_error_reg = 0U;
                if ((0U != (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_payload_tpu))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_done_reg = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_error_reg = 1U;
                } else {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg = 1U;
                }
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_addr_reg 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_payload_tpu;
            }
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_ar_handshake) {
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg = 0U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg = 1U;
                vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_beats_left_reg 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arlen_reg)));
                if ((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_txn_is_data_reg)))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_word_index = 0U;
                }
            }
            if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_r_handshake) {
                if ((IData)(((0ULL != (0x3000000000ULL 
                                       & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1)) 
                             | ((1U & (IData)((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                               >> 0x26U))) 
                                != (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_beats_left_reg)))))) {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg = 0U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_done_reg = 1U;
                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_error_reg = 1U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg = 0U;
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg = 0U;
                } else {
                    vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_beats_left_reg 
                        = (0xffU & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_beats_left_reg) 
                                    - (IData)(1U)));
                    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_txn_is_data_reg) {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_src_addr_reg 
                            = ((IData)(4U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_src_addr_reg);
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_ub_addr_reg 
                            = (0xffffU & ((IData)(2U) 
                                          + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_ub_addr_reg)));
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg 
                            = (0xffffU & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg) 
                                          - (IData)(2U)));
                        if ((2U >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg))) {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg = 0U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_done_reg = 1U;
                        }
                    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_word_index) {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_ub_addr_reg 
                            = (0xffffU & (IData)((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                                  >> 0x10U)));
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg 
                            = (0xffffU & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1));
                        if ((1U & ((((0U != (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_src_addr_reg)) 
                                     | (0U == (0xffffU 
                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1)))) 
                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1)) 
                                   | (0x800U < ((0xffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                                            >> 0x10U))) 
                                                + (0xffffU 
                                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1))))))) {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg = 0U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_done_reg = 1U;
                            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_error_reg = 1U;
                        } else {
                            vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_phase = 1U;
                        }
                    } else {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_src_addr_reg 
                            = (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1);
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_word_index = 1U;
                    }
                    if ((1U & (IData)((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                       >> 0x26U)))) {
                        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg = 0U;
                    }
                }
            }
        }
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__ins_reg = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__ins_valid_reg = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_limit = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_seen_valid = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_done_reg = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_error_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_pending = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__tpu_pc_current = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_last_ins = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_base_0 = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_base_1 = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_0 = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_complete_1 = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_slot = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_fill_slot = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replace_slot = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_overflow = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_araddr_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_phase = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_beats_left_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_word_index = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_done_reg = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_error_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_src_addr_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_ub_addr_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_araddr_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arlen_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg = 0U;
        vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_txn_is_data_reg = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_addr_reg = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx 
        = ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_num))
            ? 0U : ((8U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_num))
                     ? 7U : ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_num))
                              ? 1U : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_num) 
                                      - (IData)(1U)))));
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
        [0U];
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended 
        = (((QData)((IData)((__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator)));
    if (VL_GTS_IQQ(33, 0ULL, __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude 
            = (0x1ffffffffULL & (- __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & (- VL_SHIFTRS_QQI(33,33,32, 
                                                  (0x1ffffffffULL 
                                                   & (0x80ULL 
                                                      + vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude)), 8U)));
    } else {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,32, 
                                               (0x1ffffffffULL 
                                                & (0x80ULL 
                                                   + __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)), 8U));
    }
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout 
        = (VL_LTS_IQQ(33, 0x7fffULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
            ? 0x7fffU : (VL_GTS_IQQ(33, 0x1ffff8000ULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
                          ? 0x8000U : (0xffffU & (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
        = ((0xffff0000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U]) 
           | (IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xfeU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
           [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
           [0U]);
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
        [1U];
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended 
        = (((QData)((IData)((__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator)));
    if (VL_GTS_IQQ(33, 0ULL, __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude 
            = (0x1ffffffffULL & (- __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & (- VL_SHIFTRS_QQI(33,33,32, 
                                                  (0x1ffffffffULL 
                                                   & (0x80ULL 
                                                      + vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude)), 8U)));
    } else {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,32, 
                                               (0x1ffffffffULL 
                                                & (0x80ULL 
                                                   + __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)), 8U));
    }
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout 
        = (VL_LTS_IQQ(33, 0x7fffULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
            ? 0x7fffU : (VL_GTS_IQQ(33, 0x1ffff8000ULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
                          ? 0x8000U : (0xffffU & (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
        = ((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U]) 
           | ((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout) 
              << 0x10U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xfdU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [1U] << 1U));
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
        [2U];
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended 
        = (((QData)((IData)((__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator)));
    if (VL_GTS_IQQ(33, 0ULL, __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude 
            = (0x1ffffffffULL & (- __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & (- VL_SHIFTRS_QQI(33,33,32, 
                                                  (0x1ffffffffULL 
                                                   & (0x80ULL 
                                                      + vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude)), 8U)));
    } else {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,32, 
                                               (0x1ffffffffULL 
                                                & (0x80ULL 
                                                   + __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)), 8U));
    }
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout 
        = (VL_LTS_IQQ(33, 0x7fffULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
            ? 0x7fffU : (VL_GTS_IQQ(33, 0x1ffff8000ULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
                          ? 0x8000U : (0xffffU & (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
        = ((0xffff0000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U]) 
           | (IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xfbU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [2U] << 2U));
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
        [3U];
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended 
        = (((QData)((IData)((__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator)));
    if (VL_GTS_IQQ(33, 0ULL, __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude 
            = (0x1ffffffffULL & (- __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & (- VL_SHIFTRS_QQI(33,33,32, 
                                                  (0x1ffffffffULL 
                                                   & (0x80ULL 
                                                      + vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude)), 8U)));
    } else {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,32, 
                                               (0x1ffffffffULL 
                                                & (0x80ULL 
                                                   + __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)), 8U));
    }
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout 
        = (VL_LTS_IQQ(33, 0x7fffULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
            ? 0x7fffU : (VL_GTS_IQQ(33, 0x1ffff8000ULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
                          ? 0x8000U : (0xffffU & (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
        = ((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U]) 
           | ((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout) 
              << 0x10U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xf7U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [3U] << 3U));
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
        [4U];
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended 
        = (((QData)((IData)((__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator)));
    if (VL_GTS_IQQ(33, 0ULL, __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude 
            = (0x1ffffffffULL & (- __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & (- VL_SHIFTRS_QQI(33,33,32, 
                                                  (0x1ffffffffULL 
                                                   & (0x80ULL 
                                                      + vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude)), 8U)));
    } else {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,32, 
                                               (0x1ffffffffULL 
                                                & (0x80ULL 
                                                   + __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)), 8U));
    }
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout 
        = (VL_LTS_IQQ(33, 0x7fffULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
            ? 0x7fffU : (VL_GTS_IQQ(33, 0x1ffff8000ULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
                          ? 0x8000U : (0xffffU & (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
        = ((0xffff0000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U]) 
           | (IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xefU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [4U] << 4U));
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
        [5U];
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended 
        = (((QData)((IData)((__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator)));
    if (VL_GTS_IQQ(33, 0ULL, __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude 
            = (0x1ffffffffULL & (- __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & (- VL_SHIFTRS_QQI(33,33,32, 
                                                  (0x1ffffffffULL 
                                                   & (0x80ULL 
                                                      + vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude)), 8U)));
    } else {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,32, 
                                               (0x1ffffffffULL 
                                                & (0x80ULL 
                                                   + __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)), 8U));
    }
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout 
        = (VL_LTS_IQQ(33, 0x7fffULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
            ? 0x7fffU : (VL_GTS_IQQ(33, 0x1ffff8000ULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
                          ? 0x8000U : (0xffffU & (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
        = ((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U]) 
           | ((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout) 
              << 0x10U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xdfU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [5U] << 5U));
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
        [6U];
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended 
        = (((QData)((IData)((__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator)));
    if (VL_GTS_IQQ(33, 0ULL, __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude 
            = (0x1ffffffffULL & (- __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & (- VL_SHIFTRS_QQI(33,33,32, 
                                                  (0x1ffffffffULL 
                                                   & (0x80ULL 
                                                      + vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude)), 8U)));
    } else {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,32, 
                                               (0x1ffffffffULL 
                                                & (0x80ULL 
                                                   + __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)), 8U));
    }
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout 
        = (VL_LTS_IQQ(33, 0x7fffULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
            ? 0x7fffU : (VL_GTS_IQQ(33, 0x1ffff8000ULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
                          ? 0x8000U : (0xffffU & (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
        = ((0xffff0000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U]) 
           | (IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xbfU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [6U] << 6U));
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
        [7U];
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended 
        = (((QData)((IData)((__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__accumulator)));
    if (VL_GTS_IQQ(33, 0ULL, __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude 
            = (0x1ffffffffULL & (- __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & (- VL_SHIFTRS_QQI(33,33,32, 
                                                  (0x1ffffffffULL 
                                                   & (0x80ULL 
                                                      + vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__magnitude)), 8U)));
    } else {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled 
            = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,32, 
                                               (0x1ffffffffULL 
                                                & (0x80ULL 
                                                   + __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__extended)), 8U));
    }
    __Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout 
        = (VL_LTS_IQQ(33, 0x7fffULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
            ? 0x7fffU : (VL_GTS_IQQ(33, 0x1ffff8000ULL, vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled)
                          ? 0x8000U : (0xffffU & (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__scaled))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
        = ((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U]) 
           | ((IData)(__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__accumulator_to_output__12__Vfuncout) 
              << 0x10U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0x7fU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [7U] << 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_pending 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_pending;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_drain_count;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_overflow 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_overflow;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_word_count;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_fill_slot 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_fill_slot;
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_pc_current 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__tpu_pc_current;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1__v0;
    }
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0__v0;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_phase 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_phase;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_src_addr_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_src_addr_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_beats_left_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_beats_left_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_word_index 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_desc_word_index;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arlen_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arlen_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_ub_addr_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_ub_addr_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_txn_is_data_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_txn_is_data_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[0U] 
        = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[1U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U] 
           >> 0x10U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[2U] 
        = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[3U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U] 
           >> 0x10U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[4U] 
        = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[5U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U] 
           >> 0x10U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[6U] 
        = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[7U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U] 
           >> 0x10U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[0U] 
        = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[1U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U] 
           >> 0x10U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[2U] 
        = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[3U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U] 
           >> 0x10U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[4U] 
        = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[5U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U] 
           >> 0x10U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[6U] 
        = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[7U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U] 
           >> 0x10U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[0U] 
        = (1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[1U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[2U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[3U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[4U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[5U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[6U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[7U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[0U] 
        = (1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[1U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[2U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 2U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[3U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 3U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[4U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 4U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[5U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[6U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 6U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[7U] 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                 >> 7U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__vpu_valid_any 
        = (IData)((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_word 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_replay_slot)
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_1
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index]
            : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__insn_cache_0
           [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__cache_index]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT____VdfgTmp_hf8428ce9__0 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter 
           >= vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_limit);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_next_beats 
        = ((0x10U < (0x7fffU & (((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg)) 
                                >> 1U))) ? 0x10U : 
           (0xffU & (((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_remaining_reg)) 
                     >> 1U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_tpu 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__exec_busy_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_axi_araddr 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg)
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_araddr_reg
            : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_araddr_reg);
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_axi_arvalid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_arvalid_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_signal 
        = ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type))
            ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__weight_valid_any)
            : ((2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type))
                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__vpu_valid_any)
                : ((3U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type)) 
                   & (IData)((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_rready_int 
        = ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_txn_is_data_reg) 
               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__vpu_valid_any))) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_cycles_done 
        = ((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT____VdfgTmp_hf8428ce9__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_dma_req_ready 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_busy_reg)) 
                 & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_arvalid_reg)) 
                    & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_signal_done 
        = ((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type)) 
           & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_signal)) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_seen_valid)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_axi_rready 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_read_active_reg)
            ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__dma_rready_int)
            : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__if_rready_reg));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_timeout 
        = ((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type)) 
           & ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_limit) 
              & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_signal_done)) 
                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT____VdfgTmp_hf8428ce9__0))));
}
