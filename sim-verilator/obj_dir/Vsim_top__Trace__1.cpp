// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_sub_1(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 5687);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
        bufp->chgBit(oldp+0,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__mem_sign_exted));
        bufp->chgBit(oldp+1,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj));
        bufp->chgBit(oldp+2,((1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b)) 
                                    & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                          | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                             | ((0x16U 
                                                 == 
                                                 (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)) 
                                                | ((0x17U 
                                                    == 
                                                    (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)) 
                                                   | ((0x18U 
                                                       == 
                                                       (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                        >> 0x1aU)) 
                                                      | ((0x19U 
                                                          == 
                                                          (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                           >> 0x1aU)) 
                                                         | ((0x1aU 
                                                             == 
                                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                              >> 0x1aU)) 
                                                            | ((0x1bU 
                                                                == 
                                                                (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                 >> 0x1aU)) 
                                                               | ((0x14U 
                                                                   == 
                                                                   (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                    >> 0x1aU)) 
                                                                  | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_syscall) 
                                                                     | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbsrch) 
                                                                        | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd) 
                                                                           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr) 
                                                                              | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid_cacop) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_preld) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_dbar) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar) 
                                                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_nop)))))))))))))))))))))))));
        bufp->chgBit(oldp+3,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b) 
                              | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                    | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w) 
                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__llbit)))))));
        bufp->chgBit(oldp+4,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__csr_we));
        bufp->chgBit(oldp+5,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hbc7c3b7a__0) 
                              | ((0x1aU == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0x1aU)) 
                                 | ((0x19U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0x1aU)) 
                                    | ((0x1bU == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)) 
                                       | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b) 
                                          | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                             | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w) 
                                                   | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__csr_we)))))))))));
        bufp->chgCData(oldp+6,(((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h) 
                                  | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                     | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h))) 
                                 << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b) 
                                           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b))))),2);
        bufp->chgCData(oldp+7,(((0x15U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU))
                                 ? 1U : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h416d0694__0))),5);
        bufp->chgIData(oldp+8,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_imm),32);
        bufp->chgCData(oldp+9,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                >> 0x1aU)),6);
        bufp->chgCData(oldp+10,((0xfU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x16U))),4);
        bufp->chgCData(oldp+11,((3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0x14U))),2);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+13,((0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])),5);
        bufp->chgCData(oldp+14,((0x1fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 5U))),5);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+16,((0xfffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0xaU))),12);
        bufp->chgSData(oldp+17,((0x3fffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0xaU))),14);
        bufp->chgIData(oldp+18,((0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 5U))),20);
        bufp->chgSData(oldp+19,((0xffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 0xaU))),16);
        bufp->chgIData(oldp+20,(((0x3ff0000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                << 0x10U)) 
                                 | (0xffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 0xaU)))),26);
        bufp->chgQData(oldp+21,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__op_31_26_d),64);
        bufp->chgSData(oldp+23,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__op_25_22_d),16);
        bufp->chgCData(oldp+24,((((3U == (3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0x14U))) 
                                  << 3U) | (((2U == 
                                              (3U & 
                                               (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                >> 0x14U))) 
                                             << 2U) 
                                            | (((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x14U))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                      >> 0x14U))))))),4);
        bufp->chgIData(oldp+25,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__op_19_15_d),32);
        bufp->chgIData(oldp+26,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rd_d),32);
        bufp->chgIData(oldp+27,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_d),32);
        bufp->chgIData(oldp+28,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rk_d),32);
        bufp->chgBit(oldp+29,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_add_w));
        bufp->chgBit(oldp+30,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sub_w));
        bufp->chgBit(oldp+31,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slt));
        bufp->chgBit(oldp+32,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sltu));
        bufp->chgBit(oldp+33,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_nor));
        bufp->chgBit(oldp+34,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_and));
        bufp->chgBit(oldp+35,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_or));
        bufp->chgBit(oldp+36,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_xor));
        bufp->chgBit(oldp+37,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_lu12i_w));
        bufp->chgBit(oldp+38,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_addi_w));
        bufp->chgBit(oldp+39,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slti));
        bufp->chgBit(oldp+40,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sltui));
        bufp->chgBit(oldp+41,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddi));
        bufp->chgBit(oldp+42,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddu12i));
        bufp->chgBit(oldp+43,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hb469ad25__0) 
                               & (0x68000U == (0xf8000U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
        bufp->chgBit(oldp+44,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hb469ad25__0) 
                               & (0x60000U == (0xf8000U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
        bufp->chgBit(oldp+45,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_andi));
        bufp->chgBit(oldp+46,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ori));
        bufp->chgBit(oldp+47,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_xori));
        bufp->chgBit(oldp+48,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mul_w));
        bufp->chgBit(oldp+49,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mulh_w));
        bufp->chgBit(oldp+50,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mulh_wu));
        bufp->chgBit(oldp+51,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_div_w));
        bufp->chgBit(oldp+52,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mod_w));
        bufp->chgBit(oldp+53,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_div_wu));
        bufp->chgBit(oldp+54,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mod_wu));
        bufp->chgBit(oldp+55,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slli_w));
        bufp->chgBit(oldp+56,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_srli_w));
        bufp->chgBit(oldp+57,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_srai_w));
        bufp->chgBit(oldp+58,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sll_w));
        bufp->chgBit(oldp+59,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_srl_w));
        bufp->chgBit(oldp+60,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sra_w));
        bufp->chgBit(oldp+61,((0x14U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+62,((0x16U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+63,((0x17U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+64,((0x18U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+65,((0x19U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+66,((0x1aU == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+67,((0x1bU == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x1aU))));
        bufp->chgBit(oldp+68,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w));
        bufp->chgBit(oldp+69,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w));
        bufp->chgBit(oldp+70,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b));
        bufp->chgBit(oldp+71,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu));
        bufp->chgBit(oldp+72,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h));
        bufp->chgBit(oldp+73,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu));
        bufp->chgBit(oldp+74,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w));
        bufp->chgBit(oldp+75,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b));
        bufp->chgBit(oldp+76,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h));
        bufp->chgBit(oldp+77,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w));
        bufp->chgBit(oldp+78,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_syscall));
        bufp->chgBit(oldp+79,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_break));
        bufp->chgBit(oldp+80,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_csrrd));
        bufp->chgBit(oldp+81,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_csrwr));
        bufp->chgBit(oldp+82,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ertn));
        bufp->chgBit(oldp+83,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_cpucfg));
        bufp->chgBit(oldp+84,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w));
        bufp->chgBit(oldp+85,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w));
        bufp->chgBit(oldp+86,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_idle));
        bufp->chgBit(oldp+87,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbsrch));
        bufp->chgBit(oldp+88,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd));
        bufp->chgBit(oldp+89,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr));
        bufp->chgBit(oldp+90,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill));
        bufp->chgBit(oldp+91,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb));
        bufp->chgBit(oldp+92,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_cacop));
        bufp->chgBit(oldp+93,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid_cacop));
        bufp->chgBit(oldp+94,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_preld));
        bufp->chgBit(oldp+95,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_dbar));
        bufp->chgBit(oldp+96,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar));
        bufp->chgBit(oldp+97,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_nop));
        bufp->chgBit(oldp+98,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__lacc_req));
        bufp->chgBit(oldp+99,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__need_ui5));
        bufp->chgBit(oldp+100,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_addi_w) 
                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b) 
                                   | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h) 
                                      | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w) 
                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b) 
                                            | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                                  | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                                     | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                                        | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slti) 
                                                           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sltui) 
                                                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h1d0e0636__0))))))))))))));
        bufp->chgBit(oldp+101,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_andi) 
                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ori) 
                                   | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_xori) 
                                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__lacc_req))))));
        bufp->chgBit(oldp+102,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w) 
                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w))));
        bufp->chgBit(oldp+103,(((0x13U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                | ((0x16U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                              >> 0x1aU)) 
                                   | ((0x17U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0x1aU)) 
                                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h38353e9a__0))))));
        bufp->chgBit(oldp+104,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_lu12i_w) 
                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddu12i))));
        bufp->chgBit(oldp+105,(((0x14U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 0x1aU)) 
                                | (0x15U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                             >> 0x1aU)))));
        bufp->chgIData(oldp+106,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata1),32);
        bufp->chgCData(oldp+107,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_raddr2),5);
        bufp->chgIData(oldp+108,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata2),32);
        bufp->chgBit(oldp+109,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__pipeline_no_empty));
        bufp->chgBit(oldp+110,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_dbar) 
                                & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__pipeline_no_empty))));
        bufp->chgBit(oldp+111,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar) 
                                & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__pipeline_no_empty))));
        bufp->chgBit(oldp+112,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_enable));
        bufp->chgCData(oldp+113,((0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])),5);
        bufp->chgIData(oldp+114,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data),32);
        bufp->chgBit(oldp+115,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__excp));
        bufp->chgSData(oldp+116,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__excp_ipe) 
                                   << 8U) | ((0x80U 
                                              & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid)) 
                                                 << 7U)) 
                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_break) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_syscall) 
                                                    << 5U) 
                                                   | ((0x1eU 
                                                       & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__has_int))))))),9);
        bufp->chgBit(oldp+117,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid));
        bufp->chgBit(oldp+118,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid)))));
        bufp->chgBit(oldp+119,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__excp_ipe));
        bufp->chgBit(oldp+120,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr) 
                                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill) 
                                    | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd) 
                                       | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb) 
                                          | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar))))) 
                                & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_valid))));
        bufp->chgBit(oldp+121,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__excp));
        bufp->chgBit(oldp+122,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6983a416__0) 
                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid_cacop) 
                                    & (2U != (3U & 
                                              (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                               >> 3U)))) 
                                   | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbsrch) 
                                      | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd) 
                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr) 
                                            | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill) 
                                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb) 
                                                  | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ertn) 
                                                     | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_idle)))))))))));
        bufp->chgIData(oldp+123,((((IData)((0x1ffffffffULL 
                                            & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                   & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64)) 
                                  | (((IData)((0x1ffffffffULL 
                                               & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                      & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                                 >> 0x20U))) 
                                     | ((IData)((0x1ffffffffULL 
                                                 & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))))) 
                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid)))),32);
        bufp->chgBit(oldp+124,((1U & (IData)(((((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                                >> 0x20U) 
                                               & (1ULL 
                                                  | ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64)) 
                                                     >> 0x20U))) 
                                              | ((((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                   >> 0x20U) 
                                                  & (1ULL 
                                                     | ((QData)((IData)(
                                                                        (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                                                         >> 0x20U))) 
                                                        >> 0x20U))) 
                                                 | (((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))) 
                                                     >> 0x20U) 
                                                    & (1ULL 
                                                       | ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid)) 
                                                          >> 0x20U)))))))));
        bufp->chgBit(oldp+125,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__branch_slot_cancel));
        bufp->chgBit(oldp+126,(((((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                   >> 0x1eU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                >> 2U)) 
                                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid)) 
                                | (((IData)((0U != 
                                             (0x8800U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U]))) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_valid)) 
                                   | ((IData)((0U != 
                                               (0x80200U 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U]))) 
                                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ws_valid))))));
        bufp->chgBit(oldp+127,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_need_reg_data) 
                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h1c4a3e54__0))));
        bufp->chgBit(oldp+128,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_need_reg_data));
        bufp->chgBit(oldp+129,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_to_btb));
        bufp->chgBit(oldp+130,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_need_rj));
        bufp->chgBit(oldp+131,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_need_rkd));
        bufp->chgCData(oldp+132,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w) 
                                   << 5U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w) 
                                              << 4U) 
                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b))))))),8);
        bufp->chgCData(oldp+133,(((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__llbit) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w)) 
                                   << 3U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                              << 2U) 
                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                                 << 1U) 
                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b))))),8);
        bufp->chgBit(oldp+134,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6983a416__0) 
                                & (0x1400U == (0xfffc00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
        bufp->chgIData(oldp+135,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+136,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+137,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+138,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+139,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+140,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+141,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+142,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+143,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+144,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+145,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+146,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+147,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+148,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+149,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+150,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+151,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+152,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+153,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+154,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+155,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+156,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+157,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+158,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+159,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+160,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+161,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+162,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+163,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+164,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+165,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+166,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__u_regfile__DOT__rf[31]),32);
        bufp->chgBit(oldp+167,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_valid));
        bufp->chgIData(oldp+168,(((IData)(4U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_pc)),32);
        bufp->chgBit(oldp+169,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_tlbr));
        bufp->chgBit(oldp+170,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_pif));
        bufp->chgBit(oldp+171,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_ppi));
        bufp->chgBit(oldp+172,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp));
        bufp->chgBit(oldp+173,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_num));
        bufp->chgCData(oldp+174,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_ppi) 
                                   << 3U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_pif) 
                                              << 2U) 
                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_tlbr) 
                                                 << 1U) 
                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_excp_num))))),4);
        bufp->chgBit(oldp+175,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_sign));
        bufp->chgIData(oldp+176,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_rd_buff),32);
        bufp->chgBit(oldp+177,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_buff_enable));
        bufp->chgBit(oldp+178,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_en) 
                                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_taken)) 
                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_ha3d303c7__0))));
        bufp->chgBit(oldp+179,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__idle_lock));
        bufp->chgBit(oldp+180,(((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_state) 
                                    | (4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_state)))) 
                                & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_tlb_excp_cancel_req))));
        bufp->chgIData(oldp+181,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_ret_pc_t),32);
        bufp->chgCData(oldp+182,((0x1fU & (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_en))) 
                                            & (IData)(
                                                      (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_buffer 
                                                       >> 0x20U))) 
                                           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_index)))),5);
        bufp->chgBit(oldp+183,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_ha3d303c7__0) 
                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_taken))));
        bufp->chgBit(oldp+184,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_en) 
                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_en))));
        bufp->chgIData(oldp+185,((((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__excp_tlbrefill))) 
                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbrentry) 
                                  | ((- (IData)((1U 
                                                 & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__excp_tlbrefill))))) 
                                     & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_eentry))),32);
        bufp->chgIData(oldp+186,((((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ertn_flush))) 
                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_era) 
                                  | ((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_h52ebff71__0))) 
                                     & ((IData)(4U) 
                                        + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])))),32);
        bufp->chgIData(oldp+187,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_buff_enable)
                                   ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__inst_rd_buff
                                   : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_rdata)),32);
        bufp->chgIData(oldp+188,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_pc),32);
        bufp->chgQData(oldp+189,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_buffer),38);
        bufp->chgBit(oldp+191,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_lock_en));
        bufp->chgIData(oldp+192,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_buffer),32);
        bufp->chgBit(oldp+193,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_state));
        bufp->chgIData(oldp+194,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_buffer),32);
        bufp->chgCData(oldp+195,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_state),3);
        bufp->chgWData(oldp+196,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r),425);
        bufp->chgCData(oldp+210,((0xfU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                          >> 7U))),4);
        bufp->chgCData(oldp+211,((3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])),2);
        bufp->chgCData(oldp+212,((3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                        >> 0xbU))),2);
        bufp->chgBit(oldp+213,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+214,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 5U))));
        bufp->chgIData(oldp+215,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]),32);
        bufp->chgIData(oldp+216,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]),32);
        bufp->chgBit(oldp+217,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 0xdU))));
        bufp->chgSData(oldp+218,((0x3ffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                             << 2U) 
                                            | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                               >> 0x1eU)))),10);
        bufp->chgBit(oldp+219,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+220,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                   << 0x11U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                >> 0xfU))),32);
        bufp->chgSData(oldp+221,((0x3fffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                             >> 0xfU))),14);
        bufp->chgBit(oldp+222,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+223,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                      >> 8U))));
        bufp->chgBit(oldp+224,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                      >> 9U))));
        bufp->chgBit(oldp+225,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+226,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+227,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+228,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+229,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+230,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+231,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                      >> 0x10U))));
        bufp->chgSData(oldp+232,((0x3ffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 0x11U))),10);
        bufp->chgIData(oldp+233,((0x7ffffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                               << 5U) 
                                              | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                 >> 0x1bU)))),19);
        bufp->chgBit(oldp+234,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+235,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+236,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+237,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+238,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+239,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+240,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+241,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+242,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+243,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                   << 9U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                             >> 0x17U))),32);
        bufp->chgBit(oldp+244,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                      >> 0x17U))));
        bufp->chgQData(oldp+245,((((QData)((IData)(
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[9U])) 
                                   << 0x29U) | (((QData)((IData)(
                                                                 vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[8U])) 
                                                 << 9U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[7U])) 
                                                   >> 0x17U)))),64);
        bufp->chgIData(oldp+247,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                   << 9U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                             >> 0x17U))),32);
        bufp->chgCData(oldp+248,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+249,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                                   << 0xcU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_index) 
                                                << 4U) 
                                               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_offset)))),32);
        bufp->chgIData(oldp+250,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU]),32);
        bufp->chgCData(oldp+251,((0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU])),8);
        bufp->chgIData(oldp+252,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                   << 0x18U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                                                >> 8U))),32);
        bufp->chgBit(oldp+253,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                      >> 8U))));
        bufp->chgIData(oldp+254,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xdU] 
                                   << 0x17U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                                >> 9U))),32);
        bufp->chgIData(oldp+255,((((- (IData)((1U & 
                                               ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                 >> 0xbU) 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                   >> 0xeU))))) 
                                   & (((- (IData)((1U 
                                                   & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded) 
                                                      >> 7U)))) 
                                       << 8U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                  | (((- (IData)((1U 
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
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata)))))),32);
        bufp->chgIData(oldp+256,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata),32);
        bufp->chgIData(oldp+257,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__data_rd_buff),32);
        bufp->chgBit(oldp+258,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__data_buff_enable));
        bufp->chgBit(oldp+259,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__access_mem));
        bufp->chgCData(oldp+260,((3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                        >> 3U))),2);
        bufp->chgBit(oldp+261,((0U == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))));
        bufp->chgIData(oldp+262,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                                   << 0xcU) | (0xfffU 
                                               & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                   << 9U) 
                                                  | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                     >> 0x17U))))),32);
        bufp->chgSData(oldp+263,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pil) 
                                   << 0xfU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pis) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_ppi) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pme) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_tlbr) 
                                                         << 0xbU) 
                                                        | (0x3ffU 
                                                           & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                               << 2U) 
                                                              | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                 >> 0x1eU))))))))),16);
        bufp->chgBit(oldp+264,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp));
        bufp->chgBit(oldp+265,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_tlbr));
        bufp->chgBit(oldp+266,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pil));
        bufp->chgBit(oldp+267,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pis));
        bufp->chgBit(oldp+268,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_pme));
        bufp->chgBit(oldp+269,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__excp_ppi));
        bufp->chgBit(oldp+270,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__lladdr 
                                == ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_tag 
                                     << 8U) | (0xffU 
                                               & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                   << 5U) 
                                                  | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                     >> 0x1bU)))))));
        bufp->chgCData(oldp+271,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded),8);
        bufp->chgSData(oldp+272,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded),16);
        bufp->chgCData(oldp+273,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_index),8);
        bufp->chgCData(oldp+274,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__tmp_data_offset),4);
        bufp->chgIData(oldp+275,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__dcache_miss_counter),32);
        bufp->chgIData(oldp+276,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__icache_miss_counter),32);
        bufp->chgIData(oldp+277,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__commit_inst_counter),32);
        bufp->chgIData(oldp+278,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__br_inst_counter),32);
        bufp->chgIData(oldp+279,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__mem_inst_counter),32);
        bufp->chgIData(oldp+280,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__br_pre_counter),32);
        bufp->chgIData(oldp+281,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__perf_counter__DOT__br_pre_error_counter),32);
        bufp->chgBit(oldp+282,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__crmd_wen));
        bufp->chgBit(oldp+283,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x100U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+284,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x400U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+285,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x500U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+286,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x600U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+287,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x700U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+288,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0xc00U == (0x3fff00U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+289,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+290,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbehi_wen));
        bufp->chgBit(oldp+291,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1200U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+292,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1300U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+293,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1800U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+294,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1900U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+295,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1a00U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+296,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x1b00U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+297,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x2000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+298,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x3000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+299,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x3100U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+300,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x3200U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+301,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x3300U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+302,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x4000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+303,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tcfg_wen));
        bufp->chgBit(oldp+304,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x4200U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+305,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x4300U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+306,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x4400U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+307,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x6000U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+308,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x8800U == (0x3fff00U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+309,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__DMW0_wen));
        bufp->chgBit(oldp+310,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__DMW1_wen));
        bufp->chgBit(oldp+311,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x10000U == (0x3fff00U 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgBit(oldp+312,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__csr_wr_en) 
                                & (0x10100U == (0x3fff00U 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U])))));
        bufp->chgIData(oldp+313,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_crmd),32);
        bufp->chgIData(oldp+314,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_prmd),32);
        bufp->chgIData(oldp+315,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_ectl),32);
        bufp->chgIData(oldp+316,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_estat),32);
        bufp->chgIData(oldp+317,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_badv),32);
        bufp->chgIData(oldp+318,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_asid),32);
        bufp->chgIData(oldp+319,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpuid),32);
        bufp->chgIData(oldp+320,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save0),32);
        bufp->chgIData(oldp+321,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save1),32);
        bufp->chgIData(oldp+322,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save2),32);
        bufp->chgIData(oldp+323,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save3),32);
        bufp->chgIData(oldp+324,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tcfg),32);
        bufp->chgIData(oldp+325,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tval),32);
        bufp->chgIData(oldp+326,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cntc),32);
        bufp->chgIData(oldp+327,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_ticlr),32);
        bufp->chgIData(oldp+328,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_llbctl),32);
        bufp->chgIData(oldp+329,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_dmw0),32);
        bufp->chgIData(oldp+330,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_dmw1),32);
        bufp->chgIData(oldp+331,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdl),32);
        bufp->chgIData(oldp+332,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdh),32);
        bufp->chgIData(oldp+333,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_brk),32);
        bufp->chgIData(oldp+334,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_disable_cache),32);
        bufp->chgIData(oldp+335,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg1),32);
        bufp->chgIData(oldp+336,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg2),32);
        bufp->chgIData(oldp+337,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg10),32);
        bufp->chgIData(oldp+338,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg11),32);
        bufp->chgIData(oldp+339,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg12),32);
        bufp->chgIData(oldp+340,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg13),32);
        bufp->chgIData(oldp+341,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_badv 
                                   >> 0x1fU) ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdh
                                   : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdl)),32);
        bufp->chgBit(oldp+342,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__timer_en));
        bufp->chgQData(oldp+343,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__timer_64),64);
        bufp->chgBit(oldp+345,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbrd_valid_wr_en));
        bufp->chgBit(oldp+346,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbrd_invalid_wr_en));
        bufp->chgBit(oldp+347,((0x3fU == (0x3fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_estat 
                                                   >> 0x10U)))));
        bufp->chgBit(oldp+348,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__no_forward));
        bufp->chgQData(oldp+349,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS),33);
        bufp->chgQData(oldp+351,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR),33);
        bufp->chgQData(oldp+353,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_r),33);
        bufp->chgCData(oldp+355,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count),8);
        bufp->chgQData(oldp+356,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_d),33);
        bufp->chgQData(oldp+358,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__result_r),33);
        bufp->chgQData(oldp+360,((QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
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
                                                  vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])))),33);
        bufp->chgQData(oldp+362,((QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
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
                                                  vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))),33);
        bufp->chgBit(oldp+364,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__div_signed_buffer));
        bufp->chgBit(oldp+365,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__x_31_buffer));
        bufp->chgBit(oldp+366,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer));
        bufp->chgBit(oldp+367,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed));
        bufp->chgBit(oldp+368,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31));
        bufp->chgBit(oldp+369,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete)
                                       ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer)
                                       : (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+370,((0xf0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count))));
        bufp->chgBit(oldp+371,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete));
        bufp->chgQData(oldp+372,((0x1ffffffffULL & 
                                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                    ? (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31) 
                                        == (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete)
                                                   ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer)
                                                   : 
                                                  (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                   >> 0x1fU))))
                                        ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS
                                        : (~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS 
                                              - 1ULL)))
                                    : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS))),33);
        bufp->chgQData(oldp+374,((0x1ffffffffULL & 
                                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                    ? ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31)
                                        ? (~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR 
                                              - 1ULL))
                                        : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR)
                                    : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR))),33);
        bufp->chgBit(oldp+376,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__error_reg));
        bufp->chgBit(oldp+377,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_full_reg));
        bufp->chgBit(oldp+378,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_overflow_reg));
        bufp->chgCData(oldp+379,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_count_reg),8);
        bufp->chgCData(oldp+380,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__error_code_reg),8);
        bufp->chgBit(oldp+381,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_raw_mode_reg));
        bufp->chgQData(oldp+382,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_valid_bits),64);
        bufp->chgBit(oldp+384,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd));
        bufp->chgBit(oldp+385,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__status_cmd));
        bufp->chgBit(oldp+386,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_cmd));
        bufp->chgBit(oldp+387,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__ub_write_cmd));
        bufp->chgBit(oldp+388,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__set_mode_cmd));
        bufp->chgBit(oldp+389,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__dma_load_cmd));
        bufp->chgBit(oldp+390,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__clear_cmd));
        bufp->chgBit(oldp+391,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd));
        bufp->chgCData(oldp+392,((0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])),6);
        bufp->chgBit(oldp+393,((0x20U <= (0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))));
        bufp->chgBit(oldp+394,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_pair_valid));
        bufp->chgIData(oldp+395,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__i),32);
        bufp->chgIData(oldp+396,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__lane),32);
        bufp->chgCData(oldp+397,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__write_index),8);
        bufp->chgCData(oldp+398,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_class),4);
        bufp->chgQData(oldp+399,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX),64);
        bufp->chgQData(oldp+401,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY),33);
        bufp->chgIData(oldp+403,(((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x) 
                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                   << 0x10U) | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x) 
                                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                                 << 0xfU) 
                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x) 
                                                     | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                                    << 0xeU) 
                                                   | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x) 
                                                        | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                                       << 0xdU) 
                                                      | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x) 
                                                           | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                                          << 0xcU) 
                                                         | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x) 
                                                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                                                             << 0xbU) 
                                                            | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x) 
                                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                                                                << 0xaU) 
                                                               | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x) 
                                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                                                                   << 9U) 
                                                                  | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x) 
                                                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                                                                      << 8U) 
                                                                     | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai.__PVT__neg2x) 
                                                                          | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai.__PVT__negx)) 
                                                                         << 7U) 
                                                                        | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai.__PVT__neg2x) 
                                                                             | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai.__PVT__negx)) 
                                                                            << 6U) 
                                                                           | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai.__PVT__negx)) 
                                                                               << 5U) 
                                                                              | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai.__PVT__negx)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx))))))))))))))))))),17);
        bufp->chgQData(oldp+404,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0]),64);
        bufp->chgQData(oldp+406,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[1]),64);
        bufp->chgQData(oldp+408,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[2]),64);
        bufp->chgQData(oldp+410,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[3]),64);
        bufp->chgQData(oldp+412,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[4]),64);
        bufp->chgQData(oldp+414,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[5]),64);
        bufp->chgQData(oldp+416,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[6]),64);
        bufp->chgQData(oldp+418,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[7]),64);
        bufp->chgQData(oldp+420,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[8]),64);
        bufp->chgQData(oldp+422,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[9]),64);
        bufp->chgQData(oldp+424,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[10]),64);
        bufp->chgQData(oldp+426,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[11]),64);
        bufp->chgQData(oldp+428,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[12]),64);
        bufp->chgQData(oldp+430,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[13]),64);
        bufp->chgQData(oldp+432,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[14]),64);
        bufp->chgQData(oldp+434,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[15]),64);
        bufp->chgQData(oldp+436,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[16]),64);
        bufp->chgIData(oldp+438,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry),17);
        bufp->chgQData(oldp+439,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[0]),64);
        bufp->chgQData(oldp+441,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[1]),64);
        bufp->chgQData(oldp+443,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[2]),64);
        bufp->chgQData(oldp+445,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[3]),64);
        bufp->chgQData(oldp+447,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[4]),64);
        bufp->chgQData(oldp+449,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[5]),64);
        bufp->chgQData(oldp+451,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[6]),64);
        bufp->chgQData(oldp+453,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[7]),64);
        bufp->chgQData(oldp+455,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[8]),64);
        bufp->chgQData(oldp+457,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[9]),64);
        bufp->chgQData(oldp+459,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[10]),64);
        bufp->chgQData(oldp+461,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[11]),64);
        bufp->chgQData(oldp+463,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[12]),64);
        bufp->chgQData(oldp+465,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[13]),64);
        bufp->chgQData(oldp+467,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[14]),64);
        bufp->chgQData(oldp+469,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[15]),64);
        bufp->chgQData(oldp+471,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageBoothRes[16]),64);
        bufp->chgIData(oldp+473,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__p),32);
        bufp->chgQData(oldp+474,((((QData)((IData)(
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi.__PVT__FifSig) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3000U 
                                                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.COut))))) 
                                                       | (IData)(
                                                                 (0x3000U 
                                                                  == 
                                                                  (0x3000U 
                                                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi.COut)))))))) 
                                   << 0x3fU) | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____VdfgTmp_hb9b19849__0)),64);
        bufp->chgQData(oldp+476,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SOut),64);
        bufp->chgWData(oldp+478,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r),493);
        bufp->chgBit(oldp+494,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+495,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 6U))));
        bufp->chgSData(oldp+496,((0xffffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                              << 9U) 
                                             | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                >> 0x17U)))),16);
        bufp->chgBit(oldp+497,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+498,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+499,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                      >> 7U))));
        bufp->chgBit(oldp+500,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                      >> 8U))));
        bufp->chgIData(oldp+501,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                   << 0x17U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                >> 9U))),32);
        bufp->chgBit(oldp+502,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 9U))));
        bufp->chgBit(oldp+503,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+504,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+505,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+506,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+507,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+508,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+509,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+510,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+511,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+512,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+513,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+514,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+515,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+516,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
                                   << 6U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                             >> 0x1aU))),32);
        bufp->chgBit(oldp+517,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+518,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                      >> 0x1bU))));
        bufp->chgQData(oldp+519,((((QData)((IData)(
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU])) 
                                   << 0x25U) | (((QData)((IData)(
                                                                 vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U])) 
                                                 << 5U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[8U])) 
                                                   >> 0x1bU)))),64);
        bufp->chgCData(oldp+521,((0xffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                            << 4U) 
                                           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                              >> 0x1cU)))),8);
        bufp->chgIData(oldp+522,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                   << 0x1cU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                                >> 4U))),32);
        bufp->chgIData(oldp+523,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                   << 0x1cU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                                >> 4U))),32);
        bufp->chgCData(oldp+524,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                           >> 4U))),8);
        bufp->chgIData(oldp+525,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                   << 0x14U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                                >> 0xcU))),32);
        bufp->chgBit(oldp+526,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+527,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xfU] 
                                   << 0x13U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                                >> 0xdU))),32);
        bufp->chgSData(oldp+528,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][0U]),16);
        bufp->chgSData(oldp+529,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][1U]),16);
        bufp->chgSData(oldp+530,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][2U]),16);
        bufp->chgSData(oldp+531,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][3U]),16);
        bufp->chgSData(oldp+532,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][4U]),16);
        bufp->chgSData(oldp+533,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][5U]),16);
        bufp->chgSData(oldp+534,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][6U]),16);
        bufp->chgSData(oldp+535,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [0U][7U]),16);
        bufp->chgSData(oldp+536,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][0U]),16);
        bufp->chgSData(oldp+537,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][1U]),16);
        bufp->chgSData(oldp+538,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][2U]),16);
        bufp->chgSData(oldp+539,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][3U]),16);
        bufp->chgSData(oldp+540,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][4U]),16);
        bufp->chgSData(oldp+541,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][5U]),16);
        bufp->chgSData(oldp+542,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][6U]),16);
        bufp->chgSData(oldp+543,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [1U][7U]),16);
        bufp->chgSData(oldp+544,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][0U]),16);
        bufp->chgSData(oldp+545,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][1U]),16);
        bufp->chgSData(oldp+546,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][2U]),16);
        bufp->chgSData(oldp+547,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][3U]),16);
        bufp->chgSData(oldp+548,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][4U]),16);
        bufp->chgSData(oldp+549,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][5U]),16);
        bufp->chgSData(oldp+550,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][6U]),16);
        bufp->chgSData(oldp+551,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
                                 [2U][7U]),16);
        bufp->chgSData(oldp+552,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+553,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+554,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+555,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+556,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+557,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+558,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+559,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+560,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+561,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+562,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+563,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+564,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+565,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+566,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+567,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+568,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+569,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+570,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+571,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+572,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+573,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+574,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+575,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgQData(oldp+576,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[0]),57);
        bufp->chgQData(oldp+578,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[1]),57);
        bufp->chgQData(oldp+580,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[2]),57);
        bufp->chgQData(oldp+582,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__ram[3]),57);
        bufp->chgQData(oldp+584,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[0]),57);
        bufp->chgQData(oldp+586,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[1]),57);
        bufp->chgQData(oldp+588,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[2]),57);
        bufp->chgQData(oldp+590,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__ram[3]),57);
        bufp->chgCData(oldp+592,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rData),2);
        bufp->chgCData(oldp+593,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rData),3);
        bufp->chgQData(oldp+594,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[0]),37);
        bufp->chgQData(oldp+596,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[1]),37);
        bufp->chgQData(oldp+598,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[2]),37);
        bufp->chgQData(oldp+600,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[3]),37);
        bufp->chgQData(oldp+602,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[4]),37);
        bufp->chgQData(oldp+604,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[5]),37);
        bufp->chgQData(oldp+606,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[6]),37);
        bufp->chgQData(oldp+608,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__ram[7]),37);
        bufp->chgCData(oldp+610,((0xfU & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT___zz_ram_port1))),4);
        bufp->chgQData(oldp+611,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[0]),57);
        bufp->chgQData(oldp+613,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[1]),57);
        bufp->chgQData(oldp+615,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[2]),57);
        bufp->chgQData(oldp+617,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__ram[3]),57);
        bufp->chgQData(oldp+619,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[0]),57);
        bufp->chgQData(oldp+621,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[1]),57);
        bufp->chgQData(oldp+623,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[2]),57);
        bufp->chgQData(oldp+625,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__ram[3]),57);
        bufp->chgCData(oldp+627,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rData),2);
        bufp->chgCData(oldp+628,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rData),3);
        bufp->chgQData(oldp+629,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[0]),37);
        bufp->chgQData(oldp+631,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[1]),37);
        bufp->chgQData(oldp+633,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[2]),37);
        bufp->chgQData(oldp+635,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[3]),37);
        bufp->chgQData(oldp+637,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[4]),37);
        bufp->chgQData(oldp+639,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[5]),37);
        bufp->chgQData(oldp+641,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[6]),37);
        bufp->chgQData(oldp+643,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__ram[7]),37);
        bufp->chgCData(oldp+645,((6U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY) 
                                        << 1U))),3);
        bufp->chgQData(oldp+646,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.OutX),64);
        bufp->chgBit(oldp+648,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0) 
                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx))));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0));
        bufp->chgBit(oldp+652,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))));
        bufp->chgBit(oldp+653,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+654,((((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0)))));
        bufp->chgBit(oldp+655,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+656,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+657,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+658,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+659,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xaU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xaU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+660,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+661,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+662,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+663,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+664,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xbU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xbU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+665,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+666,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+667,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+668,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+669,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xcU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xcU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+670,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+671,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+672,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+673,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+674,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xdU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xdU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+675,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+676,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+677,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+678,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+679,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xeU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xeU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+680,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+681,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+682,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+683,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+684,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xfU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0xfU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+685,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+686,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+687,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+688,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+689,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x10U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x10U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+690,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+691,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+692,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+693,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+694,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x11U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+695,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+696,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+697,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+698,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+699,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x12U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+700,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+701,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+702,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+703,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+704,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x13U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+705,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 1U)))));
        bufp->chgBit(oldp+706,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+707,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+708,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+709,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 1U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 1U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+710,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+711,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+712,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+713,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+714,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x14U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+715,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+716,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+717,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+718,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+719,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x15U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x15U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+720,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+721,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+722,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+723,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+724,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x16U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x16U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+725,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+726,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+727,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+728,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+729,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x17U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x17U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+730,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+731,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+732,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+733,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+734,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x18U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x18U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+735,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+736,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+737,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+738,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+739,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x19U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x19U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+740,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+741,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+742,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+743,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+744,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+745,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+746,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+747,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+748,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+749,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+750,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+751,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+752,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+753,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+754,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+755,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+756,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+757,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+758,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+759,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+760,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 2U)))));
        bufp->chgBit(oldp+761,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+762,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+763,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+764,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 2U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 2U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [2U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+765,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+766,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+767,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+768,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+769,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+770,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+771,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+772,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+773,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+774,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x1fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+775,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+776,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+777,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+778,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+779,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x20U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x20U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+780,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+781,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+782,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+783,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+784,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x21U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x21U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+785,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+786,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+787,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+788,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+789,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x22U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x22U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+790,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+791,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+792,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+793,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+794,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x23U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x23U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+795,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+796,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+797,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+798,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+799,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x24U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x24U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+800,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+801,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+802,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+803,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+804,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x25U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x25U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+805,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+806,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+807,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+808,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+809,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x26U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x26U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+810,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+811,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+812,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+813,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+814,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x27U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x27U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+815,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 3U)))));
        bufp->chgBit(oldp+816,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+817,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+818,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+819,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 3U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 3U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [3U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+820,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+821,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+822,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+823,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+824,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x28U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x28U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+825,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+826,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+827,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+828,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+829,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x29U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x29U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+830,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+831,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+832,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+833,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+834,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+835,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+836,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+837,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+838,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+839,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+840,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+841,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+842,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+843,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+844,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+845,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+846,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+847,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+848,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+849,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+850,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+851,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+852,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+853,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+854,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+855,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+856,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+857,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+858,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+859,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x2fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+860,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+861,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+862,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+863,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+864,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x30U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x30U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+865,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+866,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+867,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+868,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+869,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x31U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x31U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+870,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 4U)))));
        bufp->chgBit(oldp+871,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+872,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+873,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+874,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 4U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 4U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [4U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+875,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+876,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+877,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+878,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+879,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x32U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x32U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+880,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+881,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+882,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+883,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+884,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x33U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x33U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+885,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+886,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+887,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+888,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+889,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x34U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x34U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x34U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+890,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+891,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+892,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+893,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+894,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x35U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x35U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x35U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+895,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+896,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+897,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+898,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+899,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x36U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x36U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x36U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+900,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+901,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+902,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+903,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+904,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x37U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x37U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x37U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+905,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+906,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+907,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+908,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+909,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x38U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x38U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x38U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+910,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+911,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+912,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+913,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+914,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x39U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x39U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x39U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+915,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+916,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+917,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+918,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+919,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3aU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3aU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+920,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+921,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+922,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+923,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+924,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+925,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 5U)))));
        bufp->chgBit(oldp+926,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+927,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+928,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+929,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 5U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 5U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [5U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+930,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+931,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+932,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+933,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+934,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3cU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3cU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+935,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+936,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+937,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+938,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+939,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3dU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3dU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+940,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+941,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+942,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+943,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+944,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3eU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3eU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+945,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+946,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+947,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+948,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+949,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3fU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3fU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [0x3fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+950,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 6U)))));
        bufp->chgBit(oldp+951,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+952,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+953,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+954,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 6U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 6U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [6U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+955,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 7U)))));
        bufp->chgBit(oldp+956,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+957,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+958,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+959,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 7U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 7U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [7U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+960,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 8U)))));
        bufp->chgBit(oldp+961,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+962,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+963,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+964,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 8U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 8U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [8U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+965,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 9U)))));
        bufp->chgBit(oldp+966,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+967,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+968,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+969,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 9U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 9U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                   | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                       [9U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
        bufp->chgBit(oldp+970,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 1U)))));
        bufp->chgBit(oldp+971,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY))));
        bufp->chgCData(oldp+972,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y),3);
        bufp->chgQData(oldp+973,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                  << 0x20U)),64);
        bufp->chgQData(oldp+975,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.OutX),64);
        bufp->chgBit(oldp+977,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x) 
                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx))));
        bufp->chgBit(oldp+978,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx));
        bufp->chgBit(oldp+979,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x));
        bufp->chgBit(oldp+981,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x20U)))));
        bufp->chgBit(oldp+982,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x20U))))));
        bufp->chgBit(oldp+983,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x20U))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x20U)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)))));
        bufp->chgBit(oldp+984,((1U & (IData)((0x3fffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))));
        bufp->chgBit(oldp+985,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+986,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+987,((1U & (~ (IData)((0x3fffffffc00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))))));
        bufp->chgBit(oldp+988,((((~ (IData)((0x3fffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x3fffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xaU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+989,((1U & (IData)((0x1fffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+990,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+991,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+992,((1U & (~ (IData)((0x1fffffffe00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+993,((((~ (IData)((0x1fffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0x1fffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xbU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+994,((1U & (IData)((0xffffffff00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+995,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+996,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+997,((1U & (~ (IData)((0xffffffff00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+998,((((~ (IData)((0xffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                | (((IData)((0xffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xcU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+999,((1U & (IData)((0x7fffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+1000,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1001,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1002,((1U & (~ (IData)((0x7fffffff80000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x13U)))))));
        bufp->chgBit(oldp+1003,((((~ (IData)((0x7fffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xdU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1004,((1U & (IData)((0x3fffffffc0000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x12U))))));
        bufp->chgBit(oldp+1005,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1006,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1007,((1U & (~ (IData)((0x3fffffffc0000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x12U)))))));
        bufp->chgBit(oldp+1008,((((~ (IData)((0x3fffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xeU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1009,((1U & (IData)((0x1fffffffe0000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x11U))))));
        bufp->chgBit(oldp+1010,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1011,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1012,((1U & (~ (IData)((0x1fffffffe0000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x11U)))))));
        bufp->chgBit(oldp+1013,((((~ (IData)((0x1fffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0xfU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1014,((1U & (IData)((0xffffffff0000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x10U))))));
        bufp->chgBit(oldp+1015,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1016,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1017,((1U & (~ (IData)((0xffffffff0000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x10U)))))));
        bufp->chgBit(oldp+1018,((((~ (IData)((0xffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x10U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1019,((1U & (IData)((0x7fffffff8000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xfU))))));
        bufp->chgBit(oldp+1020,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1021,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1022,((1U & (~ (IData)((0x7fffffff8000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xfU)))))));
        bufp->chgBit(oldp+1023,((((~ (IData)((0x7fffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x11U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1024,((1U & (IData)((0x3fffffffc000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))));
        bufp->chgBit(oldp+1025,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1026,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1027,((1U & (~ (IData)((0x3fffffffc000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xeU)))))));
        bufp->chgBit(oldp+1028,((((~ (IData)((0x3fffffffc000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffffc000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x12U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1029,((1U & (IData)((0x1fffffffe000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))));
        bufp->chgBit(oldp+1030,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1031,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1032,((1U & (~ (IData)((0x1fffffffe000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xdU)))))));
        bufp->chgBit(oldp+1033,((((~ (IData)((0x1fffffffe000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffffe000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x13U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1034,((1U & (IData)((0x7fffffff80000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1fU))))));
        bufp->chgBit(oldp+1035,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1036,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1037,((1U & (~ (IData)((0x7fffffff80000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1fU)))))));
        bufp->chgBit(oldp+1038,((((~ (IData)((0x7fffffff80000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff80000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [1U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1039,((1U & (IData)((0xffffffff000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))));
        bufp->chgBit(oldp+1040,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1041,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1042,((1U & (~ (IData)((0xffffffff000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xcU)))))));
        bufp->chgBit(oldp+1043,((((~ (IData)((0xffffffff000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffff000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x14U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1044,((1U & (IData)((0x7fffffff800ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))));
        bufp->chgBit(oldp+1045,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1046,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1047,((1U & (~ (IData)((0x7fffffff800ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xbU)))))));
        bufp->chgBit(oldp+1048,((((~ (IData)((0x7fffffff800ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff800ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x15U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1049,((1U & (IData)((0x3fffffffc00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+1050,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1051,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1052,((1U & (~ (IData)((0x3fffffffc00ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xaU)))))));
        bufp->chgBit(oldp+1053,((((~ (IData)((0x3fffffffc00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffffc00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x16U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1054,((1U & (IData)((0x1fffffffe00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+1055,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1056,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1057,((1U & (~ (IData)((0x1fffffffe00ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+1058,((((~ (IData)((0x1fffffffe00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffffe00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x17U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1059,((1U & (IData)((0xffffffff00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+1060,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1061,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1062,((1U & (~ (IData)((0xffffffff00ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+1063,((((~ (IData)((0xffffffff00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffff00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x18U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1064,((1U & (IData)((0x7fffffff80ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+1065,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1066,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1067,((1U & (~ (IData)((0x7fffffff80ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+1068,((((~ (IData)((0x7fffffff80ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff80ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x19U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1069,((1U & (IData)((0x3fffffffc0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+1070,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1071,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1072,((1U & (~ (IData)((0x3fffffffc0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+1073,((((~ (IData)((0x3fffffffc0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffffc0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1074,((1U & (IData)((0x1fffffffe0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+1075,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1076,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1077,((1U & (~ (IData)((0x1fffffffe0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+1078,((((~ (IData)((0x1fffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1079,((1U & (IData)((0xffffffff0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+1080,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1081,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1082,((1U & (~ (IData)((0xffffffff0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+1083,((((~ (IData)((0xffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1084,((1U & (IData)((0x7fffffff8ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+1085,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1086,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1087,((1U & (~ (IData)((0x7fffffff8ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+1088,((((~ (IData)((0x7fffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1089,((1U & (IData)((0x3fffffffc0000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1eU))))));
        bufp->chgBit(oldp+1090,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1091,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1092,((1U & (~ (IData)((0x3fffffffc0000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1eU)))))));
        bufp->chgBit(oldp+1093,((((~ (IData)((0x3fffffffc0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffffc0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [2U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1094,((1U & (IData)((0x3fffffffcULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+1095,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1096,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1097,((1U & (~ (IData)((0x3fffffffcULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+1098,((((~ (IData)((0x3fffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1099,((1U & (IData)((0x1fffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1100,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1101,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1102,((1U & (~ (IData)((0x1fffffffeULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1103,((((~ (IData)((0x1fffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x1fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1104,((1U & (IData)((0xffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1105,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1106,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1107,((1U & (~ (IData)((0xffffffffULL 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1108,((((~ (IData)((0xffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x20U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1109,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1110,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1111,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1112,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1113,((((~ (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x21U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1114,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1115,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1116,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1117,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1118,((((~ (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x22U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1119,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1120,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1121,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1122,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1123,((((~ (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x23U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1124,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1125,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1126,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1127,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1128,((((~ (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x24U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1129,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1130,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1131,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1132,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1133,((((~ (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x25U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1134,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1135,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1136,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1137,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1138,((((~ (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x26U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1139,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1140,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1141,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1142,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1143,((((~ (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x27U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1144,((1U & (IData)((0x1fffffffe0000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1dU))))));
        bufp->chgBit(oldp+1145,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1146,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1147,((1U & (~ (IData)((0x1fffffffe0000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1dU)))))));
        bufp->chgBit(oldp+1148,((((~ (IData)((0x1fffffffe0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffffe0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [3U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1149,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1150,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1151,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1152,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1153,((((~ (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x28U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1154,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1155,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1156,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1157,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1158,((((~ (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x29U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1159,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1160,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1161,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1162,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1163,((((~ (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1164,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1165,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1166,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1167,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1168,((((~ (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1169,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1170,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1171,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1172,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1173,((((~ (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1174,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1175,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1176,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1177,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1178,((((~ (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1179,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1180,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1181,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1182,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1183,((((~ (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1184,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1185,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1186,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1187,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1188,((((~ (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x2fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1189,((1U & (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1190,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1191,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1192,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1193,((((~ (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x30U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1194,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1195,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1196,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1197,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1198,((((~ (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x31U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1199,((1U & (IData)((0xffffffff0000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU))))));
        bufp->chgBit(oldp+1200,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1201,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1202,((1U & (~ (IData)((0xffffffff0000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU)))))));
        bufp->chgBit(oldp+1203,((((~ (IData)((0xffffffff0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffff0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [4U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1204,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1205,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1206,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1207,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1208,((((~ (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x32U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1209,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1210,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1211,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1212,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1213,((((~ (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x33U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1214,((1U & (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1215,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1216,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1217,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1218,((((~ (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x34U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1219,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1220,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1221,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1222,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1223,((((~ (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x35U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1224,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1225,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1226,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1227,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1228,((((~ (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x36U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1229,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1230,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1231,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1232,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1233,((((~ (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x37U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1234,((1U & (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1235,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1236,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1237,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1238,((((~ (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x38U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1239,((1U & (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1240,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1241,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1242,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1243,((((~ (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x39U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1244,((1U & (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1245,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1246,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1247,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1248,((((~ (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1249,((1U & (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1250,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1251,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1252,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1253,((((~ (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1254,((1U & (IData)((0x7fffffff8000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU))))));
        bufp->chgBit(oldp+1255,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1256,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1257,((1U & (~ (IData)((0x7fffffff8000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU)))))));
        bufp->chgBit(oldp+1258,((((~ (IData)((0x7fffffff8000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff8000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [5U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1259,((1U & (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1260,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1261,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1262,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1263,((((~ (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1264,((1U & (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1265,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1266,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1267,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1268,((((~ (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1269,((1U & (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1270,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1271,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1272,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1273,((((~ (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1274,((1U & (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1275,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1276,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1277,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1278,((((~ (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU) 
                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x))) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [0x3fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1279,((1U & (IData)((0x3fffffffc000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU))))));
        bufp->chgBit(oldp+1280,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1281,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1282,((1U & (~ (IData)((0x3fffffffc000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU)))))));
        bufp->chgBit(oldp+1283,((((~ (IData)((0x3fffffffc000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x3fffffffc000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [6U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1284,((1U & (IData)((0x1fffffffe000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x19U))))));
        bufp->chgBit(oldp+1285,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1286,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1287,((1U & (~ (IData)((0x1fffffffe000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x19U)))))));
        bufp->chgBit(oldp+1288,((((~ (IData)((0x1fffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x1fffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [7U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1289,((1U & (IData)((0xffffffff000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))));
        bufp->chgBit(oldp+1290,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1291,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1292,((1U & (~ (IData)((0xffffffff000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x18U)))))));
        bufp->chgBit(oldp+1293,((((~ (IData)((0xffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0xffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [8U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1294,((1U & (IData)((0x7fffffff800000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))));
        bufp->chgBit(oldp+1295,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1296,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1297,((1U & (~ (IData)((0x7fffffff800000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x17U)))))));
        bufp->chgBit(oldp+1298,((((~ (IData)((0x7fffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                 | (((IData)((0x7fffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                         [9U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                          [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
        bufp->chgBit(oldp+1299,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y) 
                                       >> 2U))));
        bufp->chgBit(oldp+1300,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y) 
                                       >> 1U))));
        bufp->chgBit(oldp+1301,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y))));
        bufp->chgCData(oldp+1302,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                 >> 1U)))),3);
        bufp->chgQData(oldp+1303,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                   << 2U)),64);
        bufp->chgQData(oldp+1305,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+1307,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+1308,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+1309,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+1310,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+1311,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U)))));
        bufp->chgBit(oldp+1312,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+1313,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 2U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 2U)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+1314,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1315,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1316,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1317,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1318,((((~ (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1319,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1320,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1321,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1322,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1323,((((~ (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1324,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1325,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1326,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1327,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1328,((((~ (IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1329,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1330,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1331,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1332,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1333,((((~ (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1334,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1335,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1336,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1337,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1338,((((~ (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1339,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1340,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1341,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1342,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1343,((((~ (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1344,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1345,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1346,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1347,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1348,((((~ (IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1349,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1350,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1351,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1352,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1353,((((~ (IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1354,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1355,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1356,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1357,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1358,((((~ (IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1359,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1360,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1361,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1362,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1363,((((~ (IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1364,((1U & (IData)((0x7ffffffffffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1365,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1366,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1367,((1U & (~ (IData)((0x7ffffffffffffffeULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1368,((((~ (IData)((0x7ffffffffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [1U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1369,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1370,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1371,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1372,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1373,((((~ (IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1374,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1375,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1376,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1377,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1378,((((~ (IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1379,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1380,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1381,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1382,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1383,((((~ (IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1384,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1385,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1386,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1387,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1388,((((~ (IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1389,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1390,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1391,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1392,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1393,((((~ (IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1394,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1395,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1396,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1397,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1398,((((~ (IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1399,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1400,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1401,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1402,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1403,((((~ (IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1404,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1405,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1406,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1407,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1408,((((~ (IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1409,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1410,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1411,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1412,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1413,((((~ (IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1414,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1415,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1416,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1417,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1418,((((~ (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1419,((1U & (IData)((0x3fffffffffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1420,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1421,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1422,((1U & (~ (IData)((0x3fffffffffffffffULL 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1423,((((~ (IData)((0x3fffffffffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [2U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1424,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1425,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1426,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1427,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1428,((((~ (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1429,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1430,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1431,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1432,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1433,((((~ (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1434,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1435,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1436,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1437,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1438,((((~ (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1439,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1440,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1441,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1442,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1443,((((~ (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1444,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1445,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1446,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1447,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1448,((((~ (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1449,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1450,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1451,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1452,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1453,((((~ (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1454,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1455,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1456,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1457,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1458,((((~ (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1459,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1460,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1461,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1462,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1463,((((~ (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1464,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1465,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1466,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1467,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1468,((((~ (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1469,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1470,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1471,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1472,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1473,((((~ (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1474,((1U & (IData)((0x1fffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1475,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1476,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1477,((1U & (~ (IData)((0x1fffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1478,((((~ (IData)((0x1fffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [3U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1479,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1480,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1481,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1482,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1483,((((~ (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1484,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1485,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1486,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1487,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1488,((((~ (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1489,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1490,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1491,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1492,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1493,((((~ (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1494,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1495,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1496,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1497,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1498,((((~ (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1499,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1500,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1501,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1502,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1503,((((~ (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1504,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1505,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1506,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1507,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1508,((((~ (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1509,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1510,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1511,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1512,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1513,((((~ (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1514,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1515,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1516,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1517,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1518,((((~ (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1519,((1U & (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1520,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1521,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1522,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1523,((((~ (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1524,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1525,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1526,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1527,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1528,((((~ (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1529,((1U & (IData)((0xfffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1530,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1531,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1532,((1U & (~ (IData)((0xfffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1533,((((~ (IData)((0xfffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [4U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1534,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1535,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1536,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1537,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1538,((((~ (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1539,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1540,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1541,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1542,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1543,((((~ (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1544,((1U & (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1545,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1546,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1547,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1548,((((~ (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1549,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1550,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1551,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1552,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1553,((((~ (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1554,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1555,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1556,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1557,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1558,((((~ (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1559,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1560,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1561,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1562,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1563,((((~ (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1564,((1U & (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1565,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1566,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1567,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1568,((((~ (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1569,((1U & (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1570,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1571,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1572,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1573,((((~ (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1574,((1U & (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1575,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1576,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1577,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1578,((((~ (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1579,((1U & (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1580,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1581,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1582,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1583,((((~ (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1584,((1U & (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1585,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1586,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1587,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1588,((((~ (IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [5U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1589,((1U & (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1590,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1591,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1592,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1593,((((~ (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1594,((1U & (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1595,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1596,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1597,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1598,((((~ (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1599,((1U & (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1600,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1601,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1602,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1603,((((~ (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1604,((1U & (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1605,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1606,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1607,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1608,((((~ (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU) 
                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x))) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1609,((1U & (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1610,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1611,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1612,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1613,((((~ (IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [6U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1614,((1U & (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1615,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1616,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1617,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1618,((((~ (IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [7U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1619,((1U & (IData)((0xffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1620,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1621,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1622,((1U & (~ (IData)((0xffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1623,((((~ (IData)((0xffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [8U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1624,((1U & (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1625,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1626,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1627,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1628,((((~ (IData)((0x7fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                         [9U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                          [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1629,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 3U)))));
        bufp->chgBit(oldp+1630,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 2U)))));
        bufp->chgCData(oldp+1631,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                 >> 3U)))),3);
        bufp->chgQData(oldp+1632,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                   << 4U)),64);
        bufp->chgQData(oldp+1634,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+1636,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+1637,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+1638,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+1639,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+1640,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U)))));
        bufp->chgBit(oldp+1641,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+1642,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 4U)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+1643,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1644,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1645,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1646,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1647,((((~ (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1648,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1649,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1650,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1651,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1652,((((~ (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1653,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1654,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1655,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1656,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1657,((((~ (IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1658,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1659,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1660,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1661,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1662,((((~ (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1663,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1664,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1665,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1666,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1667,((((~ (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1668,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1669,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1670,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1671,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1672,((((~ (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1673,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1674,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1675,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1676,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1677,((((~ (IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1678,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1679,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1680,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1681,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1682,((((~ (IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1683,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1684,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1685,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1686,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1687,((((~ (IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1688,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1689,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1690,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1691,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1692,((((~ (IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1693,((1U & (IData)((0x7ffffffffffffff8ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+1694,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1695,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1696,((1U & (~ (IData)((0x7ffffffffffffff8ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+1697,((((~ (IData)((0x7ffffffffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [1U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1698,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1699,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1700,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1701,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1702,((((~ (IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1703,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1704,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1705,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1706,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1707,((((~ (IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1708,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1709,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1710,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1711,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1712,((((~ (IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1713,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1714,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1715,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1716,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1717,((((~ (IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1718,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1719,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1720,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1721,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1722,((((~ (IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1723,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1724,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1725,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1726,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1727,((((~ (IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1728,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1729,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1730,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1731,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1732,((((~ (IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1733,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1734,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1735,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1736,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1737,((((~ (IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1738,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1739,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1740,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1741,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1742,((((~ (IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1743,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1744,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1745,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1746,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1747,((((~ (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1748,((1U & (IData)((0x3ffffffffffffffcULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+1749,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1750,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1751,((1U & (~ (IData)((0x3ffffffffffffffcULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+1752,((((~ (IData)((0x3ffffffffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [2U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1753,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1754,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1755,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1756,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1757,((((~ (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1758,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1759,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1760,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1761,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1762,((((~ (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1763,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1764,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1765,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1766,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1767,((((~ (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1768,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1769,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1770,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1771,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1772,((((~ (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1773,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1774,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1775,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1776,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1777,((((~ (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1778,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1779,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1780,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1781,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1782,((((~ (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1783,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1784,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1785,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1786,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1787,((((~ (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1788,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1789,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1790,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1791,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1792,((((~ (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1793,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1794,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1795,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1796,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1797,((((~ (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1798,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1799,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1800,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1801,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1802,((((~ (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1803,((1U & (IData)((0x1ffffffffffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1804,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1805,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1806,((1U & (~ (IData)((0x1ffffffffffffffeULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1807,((((~ (IData)((0x1ffffffffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [3U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1808,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1809,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1810,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1811,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1812,((((~ (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1813,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1814,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1815,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1816,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1817,((((~ (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1818,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1819,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1820,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1821,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1822,((((~ (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1823,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1824,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1825,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1826,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1827,((((~ (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1828,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1829,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1830,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1831,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1832,((((~ (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x28U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1833,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1834,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1835,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1836,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1837,((((~ (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x29U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1838,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1839,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1840,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1841,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1842,((((~ (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1843,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1844,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1845,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1846,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1847,((((~ (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1848,((1U & (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1849,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1850,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1851,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1852,((((~ (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1853,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1854,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1855,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1856,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1857,((((~ (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1858,((1U & (IData)((0xfffffffffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1859,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1860,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1861,((1U & (~ (IData)((0xfffffffffffffffULL 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1862,((((~ (IData)((0xfffffffffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [4U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1863,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1864,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1865,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1866,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1867,((((~ (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1868,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1869,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1870,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1871,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1872,((((~ (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x2fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1873,((1U & (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1874,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1875,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1876,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1877,((((~ (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x30U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1878,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1879,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1880,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1881,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1882,((((~ (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x31U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1883,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1884,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1885,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1886,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1887,((((~ (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x32U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1888,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1889,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1890,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1891,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1892,((((~ (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x33U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1893,((1U & (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1894,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1895,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1896,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1897,((((~ (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x34U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1898,((1U & (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1899,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1900,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1901,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1902,((((~ (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x35U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1903,((1U & (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1904,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1905,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1906,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1907,((((~ (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x36U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1908,((1U & (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1909,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1910,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1911,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1912,((((~ (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x37U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1913,((1U & (IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1914,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1915,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1916,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1917,((((~ (IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [5U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1918,((1U & (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1919,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1920,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1921,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1922,((((~ (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x38U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1923,((1U & (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1924,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1925,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1926,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1927,((((~ (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x39U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1928,((1U & (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1929,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1930,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1931,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1932,((((~ (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1933,((1U & (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1934,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1935,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1936,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1937,((((~ (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x3bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU) 
                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x))) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1938,((1U & (IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1939,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1940,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1941,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1942,((((~ (IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [6U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1943,((1U & (IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1944,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1945,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1946,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1947,((((~ (IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [7U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1948,((1U & (IData)((0xffffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1949,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1950,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1951,((1U & (~ (IData)((0xffffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1952,((((~ (IData)((0xffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [8U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1953,((1U & (IData)((0x7fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1954,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1955,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1956,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1957,((((~ (IData)((0x7fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                         [9U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                          [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1958,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 5U)))));
        bufp->chgBit(oldp+1959,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 4U)))));
        bufp->chgCData(oldp+1960,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                 >> 5U)))),3);
        bufp->chgQData(oldp+1961,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                   << 6U)),64);
        bufp->chgQData(oldp+1963,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+1965,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x) 
                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+1966,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+1967,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+1968,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+1969,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U)))));
        bufp->chgBit(oldp+1970,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+1971,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 6U))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 6U)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+1972,((1U & (IData)((0x3fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1973,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xaU])));
        bufp->chgBit(oldp+1974,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1975,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1976,((((~ (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1977,((1U & (IData)((0x1fffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1978,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xbU])));
        bufp->chgBit(oldp+1979,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1980,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1981,((((~ (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1982,((1U & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1983,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xcU])));
        bufp->chgBit(oldp+1984,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1985,((1U & (~ (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1986,((((~ (IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1987,((1U & (IData)((0x7ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1988,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xdU])));
        bufp->chgBit(oldp+1989,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1990,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1991,((((~ (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1992,((1U & (IData)((0x3ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1993,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xeU])));
        bufp->chgBit(oldp+1994,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1995,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1996,((((~ (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1997,((1U & (IData)((0x1ffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1998,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1999,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+2000,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2001,((((~ (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2002,((1U & (IData)((0xffffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2003,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+2004,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+2005,((1U & (~ (IData)((0xffffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2006,((((~ (IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2007,((1U & (IData)((0x7fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2008,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+2009,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+2010,((1U & (~ (IData)((0x7fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2011,((((~ (IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2012,((1U & (IData)((0x3fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2013,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+2014,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+2015,((1U & (~ (IData)((0x3fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2016,((((~ (IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2017,((1U & (IData)((0x1fffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2018,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+2019,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+2020,((1U & (~ (IData)((0x1fffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2021,((((~ (IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2022,((1U & (IData)((0x7fffffffffffffe0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+2023,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+2024,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+2025,((1U & (~ (IData)((0x7fffffffffffffe0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+2026,((((~ (IData)((0x7fffffffffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [1U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2027,((1U & (IData)((0xfffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2028,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+2029,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+2030,((1U & (~ (IData)((0xfffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2031,((((~ (IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2032,((1U & (IData)((0x7ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2033,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+2034,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+2035,((1U & (~ (IData)((0x7ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2036,((((~ (IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2037,((1U & (IData)((0x3ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2038,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+2039,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+2040,((1U & (~ (IData)((0x3ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2041,((((~ (IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2042,((1U & (IData)((0x1ffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2043,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+2044,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+2045,((1U & (~ (IData)((0x1ffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2046,((((~ (IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2047,((1U & (IData)((0xffffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2048,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+2049,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+2050,((1U & (~ (IData)((0xffffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2051,((((~ (IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2052,((1U & (IData)((0x7fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2053,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+2054,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+2055,((1U & (~ (IData)((0x7fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2056,((((~ (IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2057,((1U & (IData)((0x3fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2058,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+2059,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+2060,((1U & (~ (IData)((0x3fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2061,((((~ (IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2062,((1U & (IData)((0x1fffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2063,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+2064,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+2065,((1U & (~ (IData)((0x1fffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2066,((((~ (IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2067,((1U & (IData)((0xfffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2068,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+2069,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+2070,((1U & (~ (IData)((0xfffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+2071,((((~ (IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2072,((1U & (IData)((0x7ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+2073,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+2074,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+2075,((1U & (~ (IData)((0x7ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+2076,((((~ (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2077,((1U & (IData)((0x3ffffffffffffff0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+2078,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+2079,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+2080,((1U & (~ (IData)((0x3ffffffffffffff0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+2081,((((~ (IData)((0x3ffffffffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [2U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2082,((1U & (IData)((0x3ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+2083,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+2084,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+2085,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+2086,((((~ (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2087,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2088,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+2089,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+2090,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+2091,((((~ (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2092,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+2093,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+2094,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+2095,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+2096,((((~ (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2097,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+2098,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+2099,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+2100,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+2101,((((~ (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2102,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2103,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+2104,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+2105,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+2106,((((~ (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2107,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+2108,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+2109,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+2110,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+2111,((((~ (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                          [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+2112,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+2113,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__CarrySig
                                 [0x24U])));
    }
}
