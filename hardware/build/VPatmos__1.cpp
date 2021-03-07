// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPatmos.h for the primary calling header

#include "VPatmos.h"
#include "VPatmos__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VPatmos::_sequent__TOP__5(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_sequent__TOP__5\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_counter 
        = vlTOPp->__Vdly__Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_counter;
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_tick 
        = vlTOPp->__Vdly__Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_tick;
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg 
        = vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg;
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3 
        = ((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_3))
            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_128
            : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_54);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_269 
        = VL_LTS_III(1,32,32, ((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_2))
                                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_124
                                : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_48), 
                     ((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_3))
                       ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_128
                       : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_54));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
        = ((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_1))
            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_120
            : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_44);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_143 
        = VL_LTS_III(1,32,32, ((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_0))
                                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_116
                                : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_38), 
                     ((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_1))
                       ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_120
                       : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_44));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
        = ((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_0))
            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_116
            : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_38);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
        = ((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_2))
            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_124
            : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_48);
    vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg 
        = vlTOPp->__Vdly__Patmos__DOT__ramCtrl__DOT__transCountReg;
    vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg = vlTOPp->__Vdly__Patmos__DOT__ramCtrl__DOT__stateReg;
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__burstCntReg 
        = vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__burstCntReg;
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg 
        = vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg;
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___T_12 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_counter)));
    vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg = vlTOPp->io_Keys_key;
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT___value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__enq_ptr_value)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__deq_ptr_value));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT___value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__enq_ptr_value)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_34 
        = (0x3ffU & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_enable)
                      ? ((0x2b6U == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_counter))
                          ? 0U : ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_counter)))
                      : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_counter)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___T_36 
        = (7U == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_counter));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___T_40 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_counter)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg2 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg1));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT___value_T_3 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__deq_ptr_value)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__deq_ptr_value));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_63 
        = ((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)) 
           <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg);
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_18 
        = (0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_48 
        = (4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__srcReg 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_0)
            ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_1)
                     ? 1U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_2)
                              ? 2U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_3)
                                       ? 3U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_4)
                                                ? 4U
                                                : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_6)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_7)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_8)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_9)
                                                        ? 9U
                                                        : 
                                                       ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_10)
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_11)
                                                          ? 0xbU
                                                          : 
                                                         ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_12)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_13)
                                                            ? 0xdU
                                                            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_543)))))))))))))));
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocReg = 0U;
    } else {
        if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
            if (vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet) {
                vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocReg 
                    = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_reloc;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg = 0U;
    } else {
        if (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) {
            vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg 
                = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_85;
        }
    }
    vlTOPp->Patmos__DOT__Deadline__DOT__downDone = 
        (0U == vlTOPp->Patmos__DOT__Deadline__DOT__downCountReg);
    vlTOPp->Patmos__DOT__Deadline__DOT___T_4 = (vlTOPp->Patmos__DOT__Deadline__DOT__downCountReg 
                                                - (IData)(1U));
    vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Data 
        = vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data;
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__Timer__DOT__cycleReg = 0ULL;
        vlTOPp->__Vdly__Patmos__DOT__Timer__DOT__usecSubReg = 0U;
    } else {
        vlTOPp->Patmos__DOT__Timer__DOT__cycleReg = vlTOPp->Patmos__DOT__Timer__DOT___T_25;
        vlTOPp->__Vdly__Patmos__DOT__Timer__DOT__usecSubReg 
            = ((0x4fU == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__usecSubReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__Timer__DOT___T_30));
    }
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__Timer__DOT__usecReg = 0ULL;
    } else {
        if ((0x4fU == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__usecSubReg))) {
            vlTOPp->Patmos__DOT__Timer__DOT__usecReg 
                = vlTOPp->Patmos__DOT__Timer__DOT___T_35;
        }
    }
    vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr 
        = (0xfffffffcU & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr);
    vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd 
        = ((0xf002U == (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 0x10U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_72 
        = ((0x10000U & (((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)) 
                         << 0x10U) & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                                      >> 0xfU))) | 
           (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                       >> 0x10U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_14 
        = ((0U != ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Cmd))
                    ? 2U : 0U)) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__REG));
    if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable) 
         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_data 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_data;
    }
    if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable) 
         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_addr 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_0;
    }
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_valid = 0U;
    } else {
        if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable) 
             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in))) {
            vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_valid 
                = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush)) 
                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_0_valid));
        }
    }
    if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable) 
         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_addr 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_valid = 0U;
    } else {
        if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable) 
             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in))) {
            vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_valid 
                = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush)) 
                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_valid));
        }
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_68 
        = ((0x10000U & (((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)) 
                         << 0x10U) & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                      >> 0xfU))) | 
           (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                       >> 0x10U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_130 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
           | vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_108 
        = (0x7ffffffffULL & (((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0)) 
                              << ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                   ? 2U : (0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)))) 
                             + (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data))));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_142 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
           == vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_144 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
           < vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data);
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall 
            = vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140;
    }
    if (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall) {
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_344 
            = ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_0));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_345 
            = ((1U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_1));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_346 
            = ((2U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_2));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_347 
            = ((3U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_3));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_348 
            = ((4U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_4));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_349 
            = ((5U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_5));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_350 
            = ((6U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_6));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_351 
            = ((7U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_7));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_352 
            = ((8U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_8));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_353 
            = ((9U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_9));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_354 
            = ((0xaU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_10));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_355 
            = ((0xbU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_11));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_356 
            = ((0xcU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_12));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_357 
            = ((0xdU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_13));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_358 
            = ((0xeU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_14));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_359 
            = ((0xfU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_15));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_360 
            = ((0x10U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_16));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_361 
            = ((0x11U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_17));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_362 
            = ((0x12U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_18));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_363 
            = ((0x13U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_19));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_364 
            = ((0x14U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_20));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_365 
            = ((0x15U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_21));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_366 
            = ((0x16U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_22));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_367 
            = ((0x17U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_23));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_368 
            = ((0x18U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_24));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_369 
            = ((0x19U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_25));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_370 
            = ((0x1aU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_26));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_371 
            = ((0x1bU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_27));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_372 
            = ((0x1cU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_28));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_373 
            = ((0x1dU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_29));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_374 
            = ((0x1eU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_30));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_375 
            = ((0x1fU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_31));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_344 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_0;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_345 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_1;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_346 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_2;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_347 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_3;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_348 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_4;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_349 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_5;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_350 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_6;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_351 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_7;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_352 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_8;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_353 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_9;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_354 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_10;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_355 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_11;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_356 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_12;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_357 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_13;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_358 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_14;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_359 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_15;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_360 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_16;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_361 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_17;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_362 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_18;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_363 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_19;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_364 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_20;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_365 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_21;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_366 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_22;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_367 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_23;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_368 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_24;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_369 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_25;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_370 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_26;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_371 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_27;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_372 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_28;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_373 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_29;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_374 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_30;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_375 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_31;
    }
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_trap 
            = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
               & (0x16U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                     >> 0x16U))));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_exc 
        = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_trap) 
            | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_illOp)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__illMemReg));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_10 
        = ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall) 
             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_trap)) 
            | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_6) 
                | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xret)) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_nonDelayed))) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_illOp));
    if ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_52 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                    == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                              - (IData)(1U)))) ? 0U
                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg))
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_51 
            = (0xfffU & ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                          ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                              == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                                        - (IData)(1U))))
                              ? ((vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Data 
                                  >> 2U) - (IData)(1U))
                              : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg)));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_56 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                    == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                              - (IData)(1U)))) ? ((3U 
                                                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_19)
                    : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_19)
                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_19);
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_52 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_51 
            = (0xfffU & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_56 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_19;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wEna 
        = ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
           & (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
               <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg)) 
              & (1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))));
    if ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_50 
            = (3U & ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                      ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                          == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                                    - (IData)(1U))))
                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_26)
                          : ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg)))
                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_15)));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                    == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                              - (IData)(1U)))) ? ((3U 
                                                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                                                   ? 
                                                  ((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg)) 
                                                   << 2U)
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_18)
                    : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_18)
                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_18);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_60 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                    == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                              - (IData)(1U)))) ? 2U
                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_20))
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_20));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_53 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                    == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                              - (IData)(1U)))) ? ((3U 
                                                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                                                   ? 2U
                                                   : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_16))
                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_16))
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_16));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_59 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                    == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                              - (IData)(1U)))) ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg
                    : 0U) : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_58 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                    == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                              - (IData)(1U)))) ? (0xfffU 
                                                  & ((vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Data 
                                                      >> 2U) 
                                                     + 
                                                     (1U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Data 
                                                         >> 2U))))
                    : 0U) : 0U);
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_50 
            = (3U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_15));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_18;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_60 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_20;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_53 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_16;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_59 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_58 = 0U;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_out 
        = (((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
             ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                 <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                 ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp)) 
                    & (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                        >= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg)) 
                       & (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))))
                 : (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg)))
             : (1U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))) 
           & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitReg) 
              | ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                 | ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                    | ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                       | ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                          & (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__REG = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ocp_port_M_Cmd)) 
                                              & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT___T_2));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg = 0U;
    } else {
        if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg) 
             & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc) 
                | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___T_198)))) {
            vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))) {
                if ((0U != (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                     >> 2U)))) {
                    vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg 
                        = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_174;
                }
            }
        }
    }
    if ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))) {
        if ((0U != (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                             >> 2U)))) {
            if ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                 >> 2U)))) {
                if ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)) {
                    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg 
                        = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))) {
            if ((0U != (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                 >> 2U)))) {
                if ((1U != (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                     >> 2U)))) {
                    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg 
                        = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_138;
                }
            }
        }
    }
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opOff 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immVal_0;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_target;
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opOff 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target 
            = ((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                               >> 2U)) - vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_reloc);
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_256 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
           | vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_268 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
           == vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_270 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
           < vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__saveRetOff 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_358) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMTS 
            = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
               & ((9U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                   >> 0x16U))) & ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                       >> 4U))) 
                                                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual))));
    }
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func 
            = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                ? 0U : (0xfU & ((0U == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                              >> 0x19U)))
                                 ? (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                          >> 0x16U))
                                 : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__saveND 
        = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_nonDelayed;
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_216 
        = (1U | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7) 
                  << 7U) | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6) 
                             << 6U) | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5) 
                                        << 5U) | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4) 
                                                   << 4U) 
                                                  | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3) 
                                                      << 3U) 
                                                     | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2) 
                                                         << 2U) 
                                                        | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1) 
                                                           << 1U))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_305 
        = (1U & (((7U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr)))
                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7)
                   : ((6U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr)))
                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6)
                       : ((5U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr)))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5)
                           : ((4U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr)))
                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4)
                               : ((3U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr)))
                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3)
                                   : ((2U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr)))
                                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2)
                                       : ((1U != (7U 
                                                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr))) 
                                          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1)))))))) 
                 ^ ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr) 
                    >> 3U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_308 
        = (1U & (((7U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr)))
                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7)
                   : ((6U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr)))
                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6)
                       : ((5U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr)))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5)
                           : ((4U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr)))
                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4)
                               : ((3U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr)))
                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3)
                                   : ((2U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr)))
                                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2)
                                       : ((1U != (7U 
                                                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr))) 
                                          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1)))))))) 
                 ^ ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr) 
                    >> 3U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_179 
        = (1U & (((7U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr)))
                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7)
                   : ((6U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr)))
                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6)
                       : ((5U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr)))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5)
                           : ((4U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr)))
                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4)
                               : ((3U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr)))
                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3)
                                   : ((2U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr)))
                                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2)
                                       : ((1U != (7U 
                                                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr))) 
                                          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1)))))))) 
                 ^ ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr) 
                    >> 3U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_182 
        = (1U & (((7U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr)))
                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7)
                   : ((6U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr)))
                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6)
                       : ((5U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr)))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5)
                           : ((4U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr)))
                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4)
                               : ((3U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr)))
                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3)
                                   : ((2U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr)))
                                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2)
                                       : ((1U != (7U 
                                                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr))) 
                                          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1)))))))) 
                 ^ ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr) 
                    >> 3U)));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_base 
            = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc)
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excBaseReg
                    : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base)
                : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base);
    }
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_relPc 
            = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc)
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excAddrReg
                    : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc)
                : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc);
    }
    vlTOPp->io_SRamCtrl_ramOut_addr = vlTOPp->Patmos__DOT__ramCtrl__DOT__addrReg;
    vlTOPp->io_SRamCtrl_ramOut_doutEna = vlTOPp->Patmos__DOT__ramCtrl__DOT__doutEnaReg;
    vlTOPp->io_SRamCtrl_ramOut_noe = vlTOPp->Patmos__DOT__ramCtrl__DOT__noeReg;
    vlTOPp->io_SRamCtrl_ramOut_nwe = vlTOPp->Patmos__DOT__ramCtrl__DOT__nweReg;
    vlTOPp->io_SRamCtrl_ramOut_nlb = vlTOPp->Patmos__DOT__ramCtrl__DOT__nlbReg;
    vlTOPp->io_SRamCtrl_ramOut_nub = vlTOPp->Patmos__DOT__ramCtrl__DOT__nubReg;
    vlTOPp->Patmos__DOT__ramCtrl__DOT___T_24 = (0xfffffU 
                                                & ((IData)(1U) 
                                                   + vlTOPp->Patmos__DOT__ramCtrl__DOT__mAddrReg));
    if ((1U > (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__waitCountReg))) {
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_139 = 5U;
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_136 
            = (((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__waitCountReg)) 
               & 1U);
    } else {
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_139 = 6U;
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_136 = 0U;
    }
    vlTOPp->Patmos__DOT__ramCtrl__DOT___T_9 = ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                               << 1U);
    vlTOPp->Patmos__DOT__ramCtrl__DOT___T_10 = (1U 
                                                | ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                   << 1U));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_49 = ((3U 
                                                   == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))));
    vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Data = ((
                                                   ((7U 
                                                     == 
                                                     (1U 
                                                      | ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                         << 1U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_7)
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (1U 
                                                       | ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                          << 1U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_6)
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (1U 
                                                        | ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                           << 1U)))
                                                       ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_5)
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (1U 
                                                         | ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                            << 1U)))
                                                        ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_4)
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (1U 
                                                          | ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                             << 1U)))
                                                         ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_3)
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (1U 
                                                           | ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                              << 1U)))
                                                          ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_2)
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (1U 
                                                            | ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                               << 1U)))
                                                           ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_1)
                                                           : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_0)))))))) 
                                                   << 0x10U) 
                                                  | ((7U 
                                                      == 
                                                      ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                       << 1U))
                                                      ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_7)
                                                      : 
                                                     ((6U 
                                                       == 
                                                       ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                        << 1U))
                                                       ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_6)
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                         << 1U))
                                                        ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_5)
                                                        : 
                                                       ((4U 
                                                         == 
                                                         ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                          << 1U))
                                                         ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_4)
                                                         : 
                                                        ((3U 
                                                          == 
                                                          ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                           << 1U))
                                                          ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_3)
                                                          : 
                                                         ((2U 
                                                           == 
                                                           ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                            << 1U))
                                                           ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_2)
                                                           : 
                                                          ((1U 
                                                            == 
                                                            ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg) 
                                                             << 1U))
                                                            ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_1)
                                                            : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_0)))))))));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___T_28 = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg)));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___T_29 = (7U 
                                                == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_162 = (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))))
                                                    ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_7_byteEna)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))))
                                                     ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_6_byteEna)
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))))
                                                      ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_5_byteEna)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))))
                                                       ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_4_byteEna)
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))))
                                                        ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_3_byteEna)
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))))
                                                         ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_2_byteEna)
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))))
                                                          ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_byteEna)
                                                          : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_byteEna))))))));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_134 = (
                                                   (7U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                    ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_7_byteEna)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                     ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_6_byteEna)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                      ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_5_byteEna)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                       ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_4_byteEna)
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                        ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_3_byteEna)
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                         ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_2_byteEna)
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                          ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_byteEna)
                                                          : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_byteEna))))))));
    if ((2U == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))) {
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_36 
            = (0xfffffU & ((IData)(1U) + vlTOPp->Patmos__DOT__ramCtrl__DOT__mAddrReg));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_46 
            = (7U & ((7U == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                      ? 0U : ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))));
    } else {
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_36 
            = (0xfffffU & vlTOPp->Patmos__DOT__ramCtrl__DOT__mAddrReg);
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_46 
            = (7U & (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg));
    }
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_141 = (
                                                   (5U 
                                                    != (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg)) 
                                                   & ((4U 
                                                       != (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg)) 
                                                      | (3U 
                                                         != (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_142 = (
                                                   (5U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                     ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_7_data)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                      ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_6_data)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                       ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_5_data)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                        ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_4_data)
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                         ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_3_data)
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                          ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_2_data)
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                           ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_data)
                                                           : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_data))))))))
                                                    : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_data));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_143 = (
                                                   (5U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg)) 
                                                   | (4U 
                                                      == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg)));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_34 = ((2U 
                                                   != (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg)) 
                                                  & (1U 
                                                     != (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg)));
    vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Resp = ((7U 
                                                   == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                    ? 1U
                                                    : 0U));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___lo_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__burstCntReg)));
    if (((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid)) 
         & (2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd)))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__missIndexReg 
            = (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                     >> 2U));
    }
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__full 
        = ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__maybe_full));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty 
        = ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__maybe_full)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__full 
        = ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__maybe_full));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__empty 
        = ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__maybe_full)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
           & ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp)) 
              & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg) 
                 == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                           - (IData)(1U))))));
    vlTOPp->Patmos__DOT__Timer__DOT__usecSubReg = vlTOPp->__Vdly__Patmos__DOT__Timer__DOT__usecSubReg;
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_226 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isBCpy)
            ? ((vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                & (~ (IData)((0x7fffffffffffffffULL 
                              & (1ULL << (0x1fU & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)))))) 
               | (IData)((0x7fffffffffffffffULL & ((QData)((IData)(
                                                                   (1U 
                                                                    & (((7U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)))
                                                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7)
                                                                         : 
                                                                        ((6U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)))
                                                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6)
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)))
                                                                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5)
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)))
                                                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4)
                                                                            : 
                                                                           ((3U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)))
                                                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3)
                                                                             : 
                                                                            ((2U 
                                                                              == 
                                                                              (7U 
                                                                               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)))
                                                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2)
                                                                              : 
                                                                             ((1U 
                                                                               != 
                                                                               (7U 
                                                                                & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))) 
                                                                              | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1)))))))) 
                                                                       ^ 
                                                                       ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func) 
                                                                        >> 3U))))) 
                                                   << 
                                                   (0x1fU 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)))))
            : (IData)(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_108
                        : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                            ? (QData)((IData)((vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                               - vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)))
                            : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                ? (QData)((IData)((vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                                   ^ vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)))
                                : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                    ? (QData)((IData)(
                                                      (0x7fffffffffffffffULL 
                                                       & ((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0)) 
                                                          << 
                                                          (0x1fU 
                                                           & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)))))
                                    : (((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)) 
                                        | (5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)))
                                        ? (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(33,33,5, 
                                                            (((QData)((IData)(
                                                                              ((5U 
                                                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)) 
                                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                                                                >> 0x1fU)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0))), 
                                                            (0x1fU 
                                                             & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)))
                                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                            ? (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_130))
                                            : ((7U 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                                ? (QData)((IData)(
                                                                  (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                                                   & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)))
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                                    ? (QData)((IData)(
                                                                      (~ vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_130)))
                                                    : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_108))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_428 
        = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_344));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_429 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_345));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_430 
        = ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_346));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_431 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_347));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_432 
        = ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_348));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_433 
        = ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_349));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_434 
        = ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_350));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_435 
        = ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_351));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_436 
        = ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_352));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_437 
        = ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_353));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_438 
        = ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_354));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_439 
        = ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_355));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_440 
        = ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_356));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_441 
        = ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_357));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_442 
        = ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_358));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_443 
        = ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_359));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_444 
        = ((0x10U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_360));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_445 
        = ((0x11U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_361));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_446 
        = ((0x12U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_362));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_447 
        = ((0x13U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_363));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_448 
        = ((0x14U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_364));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_449 
        = ((0x15U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_365));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_450 
        = ((0x16U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_366));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_451 
        = ((0x17U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_367));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_452 
        = ((0x18U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_368));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_453 
        = ((0x19U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_369));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_454 
        = ((0x1aU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_370));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_455 
        = ((0x1bU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_371));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_456 
        = ((0x1cU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_372));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_457 
        = ((0x1dU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_373));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_458 
        = ((0x1eU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_374));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_459 
        = ((0x1fU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_375));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_10) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__illMemReg));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_65 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
            ? ((IData)(1U) + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___T_33)
            : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_56);
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_125 
        = (3U & ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                  ? ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                  : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                      ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                          <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                          ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                              ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                  < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_26)
                                  : ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg)))
                              : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_50))
                          : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                              ? ((IData)(1U) + (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                              : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_50)))
                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_50))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_70 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
            ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_60));
    if ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr 
            = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg)
                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_59);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData 
            = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Data
                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_58))
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_58));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_59;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_58;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_out) 
           & (0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ocp_port_M_Cmd 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
            ? 0U : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                     ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                         <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                         ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                             ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                 < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                 ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                                     ? 2U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_53))
                                 : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_53))
                             : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_53))
                         : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_53))
                     : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_53)));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg 
        = vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg;
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackAboveMem 
        = ((vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg 
            - vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg) 
           < vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opOff);
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopInc 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg 
           + vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opOff);
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_30 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg 
           - vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opOff);
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_43 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg 
           - vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opOff);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_309 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_305) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_308));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_183 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_179) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_182));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excBaseReg 
        = vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__exc__DOT__excBaseReg;
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excAddrReg 
        = vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__exc__DOT__excAddrReg;
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_201 = (
                                                   (7U 
                                                    > (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg)) 
                                                   | (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_143));
    if ((5U == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))) {
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_145 
            = (1U & ((1U <= (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__waitCountReg)) 
                     | (~ ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_134) 
                           >> 1U))));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_146 
            = (1U & ((1U <= (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__waitCountReg)) 
                     | (~ (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_134))));
    } else {
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_145 
            = (1U & ((4U == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                      ? ((3U == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))
                          ? (~ ((IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_byteEna) 
                                >> 1U)) : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_34))
                      : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_34)));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_146 
            = (1U & ((4U == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                      ? ((3U == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))
                          ? (~ (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_byteEna))
                          : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_34))
                      : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_34)));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
        = vlTOPp->__Vdly__Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr;
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_12 
        = (1U & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state)
                  ? (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state)
                  : ((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty)) 
                     | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state))));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_14 
        = ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty)
            ? (0x1ffU & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_buff) 
                         >> 1U)) : (0x100U | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram_io_deq_bits_MPORT_data)));
    if (vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state) {
        vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_11 
            = vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_buff;
        vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_28 
            = (1U & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_tick)
                      ? ((0xaU == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_counter))
                          ? (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty)
                          : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_buff))
                      : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_reg)));
    } else {
        vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_11 
            = ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty)
                ? (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_buff)
                : (0x200U | ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram_io_deq_bits_MPORT_data) 
                             << 1U)));
        vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_28 
            = (1U & (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_reg));
    }
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10 
        = (1U & ((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state)) 
                 & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty))));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___T_42 
        = (((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg2) 
            << 7U) | (0x7fU & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_buff) 
                               >> 1U)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_41 
        = (1U & ((0U == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state))
                  ? ((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg2)) 
                     | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_enable))
                  : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_enable)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue_io_enq_valid 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state)) 
           & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_tick) 
              & (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg2)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_39 
        = ((0U == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state))
            ? ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg2)
                ? (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state)
                : 1U) : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg1 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg0));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_186 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_187 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_188 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_189 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_190 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_191 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_192 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_193 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_178 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_179 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_180 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_181 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_182 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_183 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_184 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_185 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           & (7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg)));
    vlTOPp->Patmos__DOT__Timer__DOT___T_18 = (((QData)((IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Data)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Patmos__DOT__Timer__DOT__cycleLoReg)));
    vlTOPp->Patmos__DOT__Timer__DOT___T_23 = (((QData)((IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Data)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->Patmos__DOT__Timer__DOT__usecLoReg)));
    vlTOPp->Patmos__DOT__Timer__DOT___T_25 = (1ULL 
                                              + vlTOPp->Patmos__DOT__Timer__DOT__cycleReg);
    vlTOPp->Patmos__DOT__Timer__DOT___T_30 = (0x7fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlTOPp->Patmos__DOT__Timer__DOT__usecSubReg)));
    vlTOPp->Patmos__DOT__Timer__DOT___T_35 = (1ULL 
                                              + vlTOPp->Patmos__DOT__Timer__DOT__usecReg);
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_0 
            = vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_0;
    }
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_1 
            = vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_1;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_0_data 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMFS)
            ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_216
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLoReg
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHiReg
                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                            ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg
                            : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg
                                : ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg
                                    : ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg
                                        : ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                                            : ((0xaU 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                                : 0U)))))))))
            : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_226);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_1 
        = (1U & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush)) 
                 & (((7U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1)))
                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7)
                      : ((6U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1)))
                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6)
                          : ((5U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1)))
                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5)
                              : ((4U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1)))
                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4)
                                  : ((3U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1)))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3)
                                      : ((2U == (7U 
                                                 & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1)))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2)
                                          : ((1U != 
                                              (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1))) 
                                             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1)))))))) 
                    ^ ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1) 
                       >> 3U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0 
        = (1U & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush)) 
                 & (((7U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0)))
                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7)
                      : ((6U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0)))
                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6)
                          : ((5U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0)))
                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5)
                              : ((4U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0)))
                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4)
                                  : ((3U == (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0)))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3)
                                      : ((2U == (7U 
                                                 & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0)))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2)
                                          : ((1U != 
                                              (7U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0))) 
                                             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1)))))))) 
                    ^ ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0) 
                       >> 3U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_126 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
            ? 3U : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                     ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                         <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                         ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                             ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                 < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_60)
                                 : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_70))
                             : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_60))
                         : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_70))
                     : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_60)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_101 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__wrPosReg) 
           + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr);
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_memIn_wEven 
        = ((~ vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wEna));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_memIn_wOdd 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wEna));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_85 
        = (0x7ffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg) 
                     + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_146 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_147 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_148 
            = ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_149 
            = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_150 
            = ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_151 
            = ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_152 
            = ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_153 
            = ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_154 
            = ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_155 
            = ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_156 
            = ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_157 
            = ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_158 
            = ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_159 
            = ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_160 
            = ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_161 
            = ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData)
                : 0U);
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_146 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_147 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_148 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_149 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_150 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_151 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_152 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_153 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_154 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_155 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_156 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_157 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_158 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_159 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_160 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_161 = 0U;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_slave_S_Resp 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__REG)
            ? (IData)(vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Resp)
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data 
        = vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data;
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd 
        = ((0xf001U == (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 0x10U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
        = (0xfffffffcU & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr);
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg 
        = ((IData)(vlTOPp->reset) ? 2U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_411));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_234 
        = (0x7ffffffffULL & (((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2)) 
                              << ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                   ? 2U : (0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)))) 
                             + (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3))));
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b = 0U;
    } else {
        if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
            vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_flush)
                    ? 0U : vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_b);
        }
    }
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_nonDelayed 
            = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
               & (((0x19U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                       >> 0x16U))) 
                   | (0x18U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                         >> 0x16U))))
                   ? (0x18U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                         >> 0x16U)))
                   : (((0x15U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                           >> 0x16U))) 
                       | (0x14U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                             >> 0x16U))))
                       ? (0x14U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                             >> 0x16U)))
                       : (((0x13U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                               >> 0x16U))) 
                           | (0x12U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x16U))))
                           ? (0x12U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x16U)))
                           : (((0x11U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x16U))) 
                               | (0x10U == (0x1fU & 
                                            (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                             >> 0x16U)))) 
                              & (0x10U == (0x1fU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                            >> 0x16U))))))));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_322 
        = (1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isCmp)
                  ? ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                      ? (0U != (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
                                & ((IData)(1U) << (0x1fU 
                                                   & vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3))))
                      : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                          ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_270) 
                             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_268))
                          : ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_270)
                              : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                  ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_269) 
                                     | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_268))
                                  : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_269)
                                      : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                          ? (~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_268))
                                          : ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_268))))))))
                  : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_func))
                      ? (~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_309))
                      : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_func))
                          ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_305) 
                             ^ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_308))
                          : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_func))
                              ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_305) 
                                 & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_308))
                              : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_309))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_196 
        = (1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isCmp)
                  ? ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                      ? (0U != (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                & ((IData)(1U) << (0x1fU 
                                                   & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data))))
                      : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                          ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_144) 
                             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_142))
                          : ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_144)
                              : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                  ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_143) 
                                     | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_142))
                                  : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_143)
                                      : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                          ? (~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_142))
                                          : ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_142))))))))
                  : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_func))
                      ? (~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_183))
                      : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_func))
                          ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_179) 
                             ^ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_182))
                          : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_func))
                              ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_179) 
                                 & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_182))
                              : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_183))))));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base 
            = (0x3fffffffU & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__baseReg);
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc 
        = (0U != (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_31) 
                   << 0x1fU) | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_30) 
                                 << 0x1eU) | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_29) 
                                               << 0x1dU) 
                                              | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_28) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_27) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_26) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_25) 
                                                           << 0x19U) 
                                                          | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_24) 
                                                              << 0x18U) 
                                                             | ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_23) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_22) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_21) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_20) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_19) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_16) 
                                                                                << 0x10U)))))))) 
                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_15) 
                                                                    << 0xfU) 
                                                                   | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_14) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_13) 
                                                                          << 0xdU) 
                                                                         | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_12) 
                                                                             << 0xcU) 
                                                                            | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_11) 
                                                                                << 0xbU) 
                                                                               | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_0))))))))))))))))))))))))));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc 
            = (0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg 
                              - (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg)));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd 
        = (((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace)) 
            | (1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___T_48 
        = ((0x3fcU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                      >> 2U)) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__burstCntReg));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagV) 
           & ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG) 
                & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_1) 
                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg)))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_2
                : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__mem
               [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg]) 
              == (0xfffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                              >> 0xcU))));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__do_deq 
        = (1U & (((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state)
                   ? ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_tick)
                       ? ((0xaU == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_counter))
                           ? ((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty)) 
                              | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10))
                           : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10))
                       : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10))
                   : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10)) 
                 & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty))));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__full)) 
           & (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue_io_enq_valid));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_44 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state))
            ? ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_tick)
                ? ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg2)
                    ? 0U : 2U) : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_39))
            : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_39));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_valid 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_wrRd_1) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_1));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_358 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_362 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_0_valid 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_wrRd_0) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
    if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMTS) 
         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_265 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg
                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg
                            : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg
                                : ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0
                                    : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg))))));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_266 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg
                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg
                            : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg
                                : ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg
                                    : ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0
                                        : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg)))))));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_267 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                            : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                                : ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                                    : ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                                        : ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0
                                            : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg))))))));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_268 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                            : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                : ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                    : ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                        : ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                            : ((0xaU 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0
                                                : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg)))))))));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_265 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_266 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_267 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_268 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opData 
        = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMTS) 
            & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_1))
            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2
            : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMTS) 
                & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0
                : 0U));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_load 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_load) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_store 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_store) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exfe_doBranch 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_branch) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_132 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
            ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                ? 4U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_126))
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_126));
    if (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_0 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_146));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_1 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_147));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_2 
            = ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_148));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_3 
            = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_149));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_4 
            = ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_150));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_5 
            = ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_151));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_6 
            = ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_152));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_7 
            = ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_153));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_8 
            = ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_154));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_9 
            = ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_155));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_10 
            = ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_156));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_11 
            = ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_157));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_12 
            = ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_158));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_13 
            = ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_159));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_14 
            = ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_160));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_15 
            = ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_161));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_0 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_146;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_1 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_147;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_2 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_148;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_3 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_149;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_4 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_150;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_5 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_151;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_6 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_152;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_7 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_153;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_8 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_154;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_9 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_155;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_10 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_156;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_11 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_157;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_12 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_158;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_13 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_159;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_14 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_160;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_15 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_161;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_readMaster_S_Resp 
        = ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
            ? 0U : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                     ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_slave_S_Resp)));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
           + vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immVal_0);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_352 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isBCpy)
            ? ((vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
                & (~ (IData)((0x7fffffffffffffffULL 
                              & (1ULL << (0x1fU & vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3)))))) 
               | (IData)((0x7fffffffffffffffULL & ((QData)((IData)(
                                                                   (1U 
                                                                    & (((7U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)))
                                                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7)
                                                                         : 
                                                                        ((6U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)))
                                                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6)
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)))
                                                                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5)
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)))
                                                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4)
                                                                            : 
                                                                           ((3U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)))
                                                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3)
                                                                             : 
                                                                            ((2U 
                                                                              == 
                                                                              (7U 
                                                                               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)))
                                                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2)
                                                                              : 
                                                                             ((1U 
                                                                               != 
                                                                               (7U 
                                                                                & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))) 
                                                                              | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1)))))))) 
                                                                       ^ 
                                                                       ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func) 
                                                                        >> 3U))))) 
                                                   << 
                                                   (0x1fU 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3)))))
            : (IData)(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_234
                        : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                            ? (QData)((IData)((vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
                                               - vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3)))
                            : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                ? (QData)((IData)((vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
                                                   ^ vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3)))
                                : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                    ? (QData)((IData)(
                                                      (0x7fffffffffffffffULL 
                                                       & ((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2)) 
                                                          << 
                                                          (0x1fU 
                                                           & vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3)))))
                                    : (((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)) 
                                        | (5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)))
                                        ? (0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(33,33,5, 
                                                            (((QData)((IData)(
                                                                              ((5U 
                                                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func)) 
                                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
                                                                                >> 0x1fU)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2))), 
                                                            (0x1fU 
                                                             & vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3)))
                                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                            ? (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_256))
                                            : ((7U 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                                ? (QData)((IData)(
                                                                  (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2 
                                                                   & vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3)))
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                                    ? (QData)((IData)(
                                                                      (~ vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_256)))
                                                    : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_234))))))))));
    if ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isCmp) 
          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isPred)) 
         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_198 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_196)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_199 
            = ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_196)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_200 
            = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_196)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_201 
            = ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_196)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_202 
            = ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_196)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_203 
            = ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_196)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_204 
            = ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_196)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_198 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_199 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_200 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_201 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_202 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_203 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_204 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7;
    }
    if (vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_exc) {
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_13 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_441;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_12 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_440;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_11 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_439;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_10 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_438;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_9 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_437;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_8 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_436;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_7 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_435;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_6 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_434;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_5 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_433;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_4 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_432;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_3 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_431;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_2 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_430;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_1 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_429;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_0 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_428;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_31 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_459;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_30 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_458;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_29 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_457;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_28 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_456;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_27 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_455;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_26 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_454;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_25 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_453;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_24 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_452;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_23 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_451;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_22 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_450;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_21 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_449;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_20 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_448;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_19 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_447;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_18 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_446;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_17 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_445;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_16 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_444;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_15 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_443;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_14 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_442;
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_13 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_357;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_12 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_356;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_11 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_355;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_10 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_354;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_9 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_353;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_8 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_352;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_7 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_351;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_6 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_350;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_5 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_349;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_4 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_348;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_3 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_347;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_2 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_346;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_1 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_345;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_0 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_344;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_31 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_375;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_30 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_374;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_29 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_373;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_28 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_372;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_27 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_371;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_26 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_370;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_25 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_369;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_24 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_368;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_23 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_367;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_22 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_366;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_21 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_365;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_20 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_364;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_19 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_363;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_18 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_362;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_17 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_361;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_16 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_360;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_15 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_359;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_14 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_358;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace 
        = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_typ))
            ? 0U : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_typ))
                     ? 2U : 3U));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_48 
        = ((2U == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state))
            ? ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_tick)
                ? ((7U == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_counter))
                    ? 3U : 2U) : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_44))
            : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_44));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg0 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->io_UartCmp_rx));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_92 
        = ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_15)
            : ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_14)
                : ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_13)
                    : ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_12)
                        : ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_11)
                            : ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_10)
                                : ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_9)
                                    : ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_8)
                                        : ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_7)
                                            : ((6U 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_6)
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_5)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_4)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_3)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_2)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg))
                                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_1)
                                                        : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_0))))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_78 
        = ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_15)
            : ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_14)
                : ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_13)
                    : ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_12)
                        : ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_11)
                            : ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_10)
                                : ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_9)
                                    : ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_8)
                                        : ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_7)
                                            : ((6U 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_6)
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_5)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_4)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_3)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_2)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_1)
                                                        : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_0))))))))))))))));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__REG_1) {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_master_S_Resp 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_readMaster_S_Resp;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp = 0U;
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_master_S_Resp = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_readMaster_S_Resp;
    }
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Addr 
        = (0xfffffffcU & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr);
    vlTOPp->Patmos__DOT___T_38 = ((0U == (0xfU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                  >> 0x1cU))) 
                                  & (~ (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                        >> 0x10U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
        = ((0xfffffffcU & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr) 
           + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg);
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_hword) {
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_57 
            = (0xffU & ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)
                         ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                            >> 0x10U) : vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data));
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_58 
            = (0xffU & ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)
                         ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                            >> 0x18U) : (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                                         >> 8U)));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_57 
            = (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                        >> 0x10U));
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_58 
            = (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                        >> 0x18U));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_60 
        = (0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data);
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_hword) {
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61 
            = (0xffU & ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)
                         ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)
                             ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                                >> 8U) : (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                                          >> 8U)) : 
                        (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                         >> 8U)));
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_59 
            = ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)
                ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)
                    ? 3U : 0xfU) : 0xcU);
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61 
            = (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                        >> 8U));
        vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_59 = 0xfU;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_13 
        = ((0xdU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                              >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_13)
            : ((0xcU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                  >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_12)
                : ((0xbU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                      >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_11)
                    : ((0xaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                          >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_10)
                        : ((9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                            >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_9)
                            : ((8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_8)
                                : ((7U == (0xffU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                            >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_7)
                                    : ((6U == (0xffU 
                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                  >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_6)
                                        : ((5U == (0xffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                      >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_5)
                                            : ((4U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_4)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_1)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_0))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_227 
        = (1U & ((vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                  >> 7U) & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg 
                            >> 1U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_174 
        = (1U & ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                  >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg)
                  : ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                      >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg)
                      : ((2U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                          >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg)
                          : ((4U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                              >> 2U)))
                              ? ((vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg 
                                  >> 1U) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg))
                              : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_138 
        = (1U & ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                  >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg)
                  : ((2U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                      >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg)
                      : ((4U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                          >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg)
                          : ((5U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                              >> 2U)))
                              ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                  ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg) 
                                     ^ (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data 
                                        >> 0x1fU)) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg))
                              : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg))))));
    if ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_235 
            = ((0U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sourceReg
                : ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                    >> 2U))) ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sourceReg
                    : ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                        >> 2U))) ? 
                       ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                         ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data
                         : vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sourceReg)
                        : vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sourceReg)));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_233 
            = ((0U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data
                                             : vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                : vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg);
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_252 
            = ((0U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16)
                : ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                    >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16)
                    : ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                        >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16)
                        : ((2U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                            >> 2U)))
                            ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16) 
                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data 
                                      >> 0x10U)) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16))
                            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16)))));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_253 
            = ((0U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17)
                : ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                    >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17)
                    : ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                        >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17)
                        : ((2U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                            >> 2U)))
                            ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17) 
                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data 
                                      >> 0x11U)) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17))
                            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17)))));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_254 
            = ((0U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18)
                : ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                    >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18)
                    : ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                        >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18)
                        : ((2U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                            >> 2U)))
                            ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18) 
                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data 
                                      >> 0x12U)) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18))
                            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18)))));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_255 
            = ((0U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19)
                : ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                    >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19)
                    : ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                        >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19)
                        : ((2U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                            >> 2U)))
                            ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19) 
                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data 
                                      >> 0x13U)) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19))
                            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19)))));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_256 
            = ((0U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20)
                : ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                    >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20)
                    : ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                        >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20)
                        : ((2U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                            >> 2U)))
                            ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20) 
                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data 
                                      >> 0x14U)) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20))
                            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20)))));
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_257 
            = ((0U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21)
                : ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                    >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21)
                    : ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                        >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21)
                        : ((2U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                            >> 2U)))
                            ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21) 
                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data 
                                      >> 0x15U)) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21))
                            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21)))));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_235 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sourceReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_233 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_252 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_253 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_254 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_255 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_256 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20;
        vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_257 
            = vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_typ))
            ? ((IData)(vlTOPp->Patmos__DOT__REG_10)
                ? 0U : ((IData)(vlTOPp->Patmos__DOT__REG_9)
                         ? ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__mem
                             [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__rdAddrReg] 
                             << 0x18U) | ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__mem
                                           [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__rdAddrReg] 
                                           << 0x10U) 
                                          | ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__mem
                                              [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__rdAddrReg] 
                                              << 8U) 
                                             | vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__mem
                                             [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__rdAddrReg])))
                         : ((IData)(vlTOPp->Patmos__DOT__REG_8)
                             ? (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rdDataReg)
                             : ((IData)(vlTOPp->Patmos__DOT__REG_7)
                                 ? 0U : ((IData)(vlTOPp->Patmos__DOT__REG_6)
                                          ? ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))
                                              ? ((0x80U 
                                                  & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr)
                                                  ? 
                                                 vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec
                                                 [(0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                      >> 2U))]
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                       >> 2U)))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                        >> 2U)))
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                         >> 2U)))
                                                     ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sourceReg
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                          >> 2U)))
                                                      ? 
                                                     (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21) 
                                                       << 0x15U) 
                                                      | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20) 
                                                          << 0x14U) 
                                                         | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19) 
                                                             << 0x13U) 
                                                            | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18) 
                                                                << 0x12U) 
                                                               | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17) 
                                                                   << 0x11U) 
                                                                  | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16) 
                                                                     << 0x10U))))))
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                           >> 2U)))
                                                       ? 
                                                      ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg) 
                                                       << 0x1fU)
                                                       : 0U))))))
                                              : 0U)
                                          : ((IData)(vlTOPp->Patmos__DOT__REG_5)
                                              ? ((0x8000U 
                                                  & vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr)
                                                  ? 
                                                 ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                       >> 2U)))
                                                   ? 0x700U
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (0xfU 
                                                     & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                        >> 2U)))
                                                    ? 0x6f8U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0xfU 
                                                      & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                         >> 2U)))
                                                     ? 0x6f0U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0xfU 
                                                       & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                          >> 2U)))
                                                      ? 0x6bcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfU 
                                                        & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                           >> 2U)))
                                                       ? 0x70cU
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0xfU 
                                                         & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                            >> 2U)))
                                                        ? 0x40cU
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0xfU 
                                                          & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                             >> 2U)))
                                                         ? 0x20000U
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (0xfU 
                                                           & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 0xf0008024U))))))))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0xfU 
                                                    & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                       >> 2U)))
                                                   ? 0U
                                                   : vlTOPp->Patmos__DOT__CpuInfo__DOT___GEN_13))
                                              : ((IData)(vlTOPp->Patmos__DOT__REG_4)
                                                  ? vlTOPp->Patmos__DOT__Deadline__DOT__downCountReg
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__REG_3)
                                                   ? 
                                                  ((2U 
                                                    == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd))
                                                    ? 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr 
                                                         >> 2U)))
                                                     ? vlTOPp->Patmos__DOT__Timer__DOT__usecHiReg
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr 
                                                          >> 2U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__Timer__DOT__usecReg)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & (vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr 
                                                           >> 2U)))
                                                       ? vlTOPp->Patmos__DOT__Timer__DOT__cycleHiReg
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (3U 
                                                         & (vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr 
                                                            >> 2U)))
                                                        ? (IData)(vlTOPp->Patmos__DOT__Timer__DOT__cycleReg)
                                                        : 0U))))
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__REG_2)
                                                    ? (IData)(vlTOPp->Patmos__DOT__Keys__DOT__keyReg)
                                                    : 
                                                   ((IData)(vlTOPp->Patmos__DOT__REG_1)
                                                     ? (IData)(vlTOPp->Patmos__DOT__Leds__DOT__ledReg)
                                                     : 0U))))))))))
            : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selSCReg)
                ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                    << 0x18U) | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1)
                : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selDCReg)
                    ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Data
                        : (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG) 
                              & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1) 
                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg)))
                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2)
                              : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem
                             [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg]) 
                            << 0x18U) | (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG) 
                                            & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_1) 
                                               == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_2)
                                            : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__mem
                                           [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg]) 
                                          << 0x10U) 
                                         | (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG) 
                                               & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_1) 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg)))
                                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_2)
                                               : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem
                                              [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg]) 
                                             << 8U) 
                                            | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG) 
                                                & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1) 
                                                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2)
                                                : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem
                                               [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg])))))
                    : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Data
                        : 0U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_139 
        = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intr) 
            & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg) 
           & (0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__inDelaySlot)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate 
        = (((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd)) 
            & ((0U != (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) & ((1U != 
                                             (0x3fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                 >> 2U))) 
                                            & ((3U 
                                                != 
                                                (0x3fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                    >> 2U))) 
                                               & ((2U 
                                                   != 
                                                   (0x3fU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                       >> 2U))) 
                                                  & ((4U 
                                                      != 
                                                      (0x3fU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                          >> 2U))) 
                                                     & ((5U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                             >> 2U))) 
                                                        & ((vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg 
                                                            & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data) 
                                                           >> 1U)))))))) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_illMem));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_179 
        = ((0U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                            >> 2U))) ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                         ? 1U : 3U)
            : ((1U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                >> 2U))) ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                             ? 1U : 3U)
                : ((3U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                    >> 2U))) ? ((2U 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                                 ? 1U
                                                 : 3U)
                    : ((2U == (0x3fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                        >> 2U))) ? 
                       ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                         ? 1U : 3U) : ((4U == (0x3fU 
                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                  >> 2U)))
                                        ? ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                            ? 0U : 3U)
                                        : ((5U == (0x3fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                      >> 2U)))
                                            ? ((2U 
                                                & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                                ? 1U
                                                : 3U)
                                            : 1U))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___T_198 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intr) 
           & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg);
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_data 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMFS)
            ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_216
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLoReg
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHiReg
                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                            ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg
                            : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg
                                : ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg
                                    : ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg
                                        : ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                            ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                                            : ((0xaU 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                                : 0U)))))))))
            : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_352);
    if ((8U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                         >> 0x16U)))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_135 
            = ((0U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                             >> 4U))) | ((1U == (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                         | ((2U == 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                               >> 4U))) 
                                            | ((3U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                               | ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                       >> 4U))) 
                                                  | ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                          >> 4U))) 
                                                     | ((5U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                             >> 4U))) 
                                                        | (0U 
                                                           == 
                                                           (3U 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                               >> 0x19U))))))))));
        vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_139 
            = ((0U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                             >> 4U))) ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)
                : ((1U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                 >> 4U))) ? (0xfffU 
                                             & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)
                    : ((2U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                     >> 4U))) ? (0xfffU 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)
                        : ((3U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                         >> 4U))) ? 
                           (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)
                            : ((6U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                             >> 4U)))
                                ? (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                            >> 7U))
                                : ((4U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 4U)))
                                    ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)
                                    : ((5U == (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                >> 4U)))
                                        ? (0x1fU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                            >> 7U))
                                        : (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b))))))));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_135 
            = (0U == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                            >> 0x19U)));
        vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_139 
            = (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b);
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_brflush 
        = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_nonDelayed) 
            & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_branch)) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a = 0U;
    } else {
        if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
            vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_flush)
                    ? 0U : vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a);
        }
    }
    if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMTS) 
         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_255 
            = (1U & ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                      ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                         >> 1U) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_198)));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_256 
            = (1U & ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                      ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                         >> 2U) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_199)));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_257 
            = (1U & ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                      ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                         >> 3U) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_200)));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_258 
            = (1U & ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                      ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                         >> 4U) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_201)));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_259 
            = (1U & ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                      ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                         >> 5U) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_202)));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_260 
            = (1U & ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                      ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                         >> 6U) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_203)));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_261 
            = (1U & ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                      ? (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                         >> 7U) : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_204)));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_255 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_198));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_256 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_199));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_257 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_200));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_258 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_201));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_259 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_202));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_260 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_203));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_261 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_204));
    }
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__baseReg = 0U;
    } else {
        if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
            vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__baseReg 
                = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseReg;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg = 1U;
    } else {
        if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
            if (vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet) {
                vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg 
                    = (0x7ffU & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg = 1U;
    } else {
        if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) 
             & (~ (IData)(vlTOPp->reset)))) {
            vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg 
                = vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcNext;
        }
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem_io_wrEna 
        = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid)) 
           & (2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_777 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
            ? 2U : (((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid)) 
                     & (2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd)))
                     ? 2U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg)));
    if (((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid)) 
         & (2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd)))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_514 
            = ((0U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_0));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_515 
            = ((1U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_1));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_516 
            = ((2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_2));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_517 
            = ((3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_3));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_518 
            = ((4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_4));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_519 
            = ((5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_5));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_520 
            = ((6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_6));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_521 
            = ((7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_7));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_522 
            = ((8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_8));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_523 
            = ((9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_9));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_524 
            = ((0xaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                  >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_10));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_525 
            = ((0xbU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                  >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_11));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_526 
            = ((0xcU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                  >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_12));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_527 
            = ((0xdU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                  >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_13));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_528 
            = ((0xeU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                  >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_14));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_529 
            = ((0xfU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                  >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_15));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_530 
            = ((0x10U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_16));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_531 
            = ((0x11U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_17));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_532 
            = ((0x12U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_18));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_533 
            = ((0x13U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_19));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_534 
            = ((0x14U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_20));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_535 
            = ((0x15U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_21));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_536 
            = ((0x16U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_22));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_537 
            = ((0x17U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_23));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_538 
            = ((0x18U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_24));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_539 
            = ((0x19U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_25));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_540 
            = ((0x1aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_26));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_541 
            = ((0x1bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_27));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_542 
            = ((0x1cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_28));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_543 
            = ((0x1dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_29));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_544 
            = ((0x1eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_30));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_545 
            = ((0x1fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_31));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_546 
            = ((0x20U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_32));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_547 
            = ((0x21U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_33));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_548 
            = ((0x22U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_34));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_549 
            = ((0x23U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_35));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_550 
            = ((0x24U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_36));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_551 
            = ((0x25U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_37));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_552 
            = ((0x26U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_38));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_553 
            = ((0x27U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_39));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_554 
            = ((0x28U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_40));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_555 
            = ((0x29U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_41));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_556 
            = ((0x2aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_42));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_557 
            = ((0x2bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_43));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_558 
            = ((0x2cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_44));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_559 
            = ((0x2dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_45));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_560 
            = ((0x2eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_46));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_561 
            = ((0x2fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_47));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_562 
            = ((0x30U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_48));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_563 
            = ((0x31U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_49));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_564 
            = ((0x32U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_50));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_565 
            = ((0x33U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_51));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_566 
            = ((0x34U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_52));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_567 
            = ((0x35U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_53));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_568 
            = ((0x36U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_54));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_569 
            = ((0x37U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_55));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_570 
            = ((0x38U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_56));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_571 
            = ((0x39U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_57));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_572 
            = ((0x3aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_58));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_573 
            = ((0x3bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_59));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_574 
            = ((0x3cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_60));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_575 
            = ((0x3dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_61));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_576 
            = ((0x3eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_62));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_577 
            = ((0x3fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_63));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_578 
            = ((0x40U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_64));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_579 
            = ((0x41U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_65));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_580 
            = ((0x42U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_66));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_581 
            = ((0x43U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_67));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_582 
            = ((0x44U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_68));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_583 
            = ((0x45U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_69));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_584 
            = ((0x46U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_70));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_585 
            = ((0x47U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_71));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_586 
            = ((0x48U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_72));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_587 
            = ((0x49U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_73));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_588 
            = ((0x4aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_74));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_589 
            = ((0x4bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_75));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_590 
            = ((0x4cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_76));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_591 
            = ((0x4dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_77));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_592 
            = ((0x4eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_78));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_593 
            = ((0x4fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_79));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_594 
            = ((0x50U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_80));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_595 
            = ((0x51U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_81));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_596 
            = ((0x52U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_82));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_597 
            = ((0x53U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_83));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_598 
            = ((0x54U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_84));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_599 
            = ((0x55U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_85));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_600 
            = ((0x56U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_86));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_601 
            = ((0x57U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_87));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_602 
            = ((0x58U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_88));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_603 
            = ((0x59U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_89));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_604 
            = ((0x5aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_90));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_605 
            = ((0x5bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_91));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_606 
            = ((0x5cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_92));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_607 
            = ((0x5dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_93));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_608 
            = ((0x5eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_94));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_609 
            = ((0x5fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_95));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_610 
            = ((0x60U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_96));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_611 
            = ((0x61U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_97));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_612 
            = ((0x62U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_98));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_613 
            = ((0x63U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_99));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_614 
            = ((0x64U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_100));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_615 
            = ((0x65U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_101));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_616 
            = ((0x66U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_102));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_617 
            = ((0x67U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_103));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_618 
            = ((0x68U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_104));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_619 
            = ((0x69U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_105));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_620 
            = ((0x6aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_106));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_621 
            = ((0x6bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_107));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_622 
            = ((0x6cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_108));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_623 
            = ((0x6dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_109));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_624 
            = ((0x6eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_110));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_625 
            = ((0x6fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_111));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_626 
            = ((0x70U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_112));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_627 
            = ((0x71U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_113));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_628 
            = ((0x72U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_114));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_629 
            = ((0x73U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_115));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_630 
            = ((0x74U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_116));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_631 
            = ((0x75U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_117));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_632 
            = ((0x76U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_118));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_633 
            = ((0x77U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_119));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_634 
            = ((0x78U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_120));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_635 
            = ((0x79U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_121));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_636 
            = ((0x7aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_122));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_637 
            = ((0x7bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_123));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_638 
            = ((0x7cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_124));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_639 
            = ((0x7dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_125));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_640 
            = ((0x7eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_126));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_641 
            = ((0x7fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_127));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_642 
            = ((0x80U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_128));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_643 
            = ((0x81U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_129));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_644 
            = ((0x82U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_130));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_645 
            = ((0x83U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_131));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_646 
            = ((0x84U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_132));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_647 
            = ((0x85U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_133));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_648 
            = ((0x86U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_134));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_649 
            = ((0x87U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_135));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_650 
            = ((0x88U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_136));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_651 
            = ((0x89U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_137));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_652 
            = ((0x8aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_138));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_653 
            = ((0x8bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_139));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_654 
            = ((0x8cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_140));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_655 
            = ((0x8dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_141));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_656 
            = ((0x8eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_142));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_657 
            = ((0x8fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_143));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_658 
            = ((0x90U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_144));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_659 
            = ((0x91U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_145));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_660 
            = ((0x92U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_146));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_661 
            = ((0x93U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_147));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_662 
            = ((0x94U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_148));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_663 
            = ((0x95U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_149));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_664 
            = ((0x96U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_150));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_665 
            = ((0x97U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_151));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_666 
            = ((0x98U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_152));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_667 
            = ((0x99U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_153));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_668 
            = ((0x9aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_154));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_669 
            = ((0x9bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_155));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_670 
            = ((0x9cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_156));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_671 
            = ((0x9dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_157));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_672 
            = ((0x9eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_158));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_673 
            = ((0x9fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_159));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_674 
            = ((0xa0U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_160));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_675 
            = ((0xa1U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_161));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_676 
            = ((0xa2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_162));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_677 
            = ((0xa3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_163));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_678 
            = ((0xa4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_164));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_679 
            = ((0xa5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_165));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_680 
            = ((0xa6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_166));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_681 
            = ((0xa7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_167));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_682 
            = ((0xa8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_168));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_683 
            = ((0xa9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_169));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_684 
            = ((0xaaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_170));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_685 
            = ((0xabU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_171));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_686 
            = ((0xacU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_172));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_687 
            = ((0xadU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_173));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_688 
            = ((0xaeU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_174));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_689 
            = ((0xafU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_175));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_690 
            = ((0xb0U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_176));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_691 
            = ((0xb1U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_177));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_692 
            = ((0xb2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_178));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_693 
            = ((0xb3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_179));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_694 
            = ((0xb4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_180));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_695 
            = ((0xb5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_181));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_696 
            = ((0xb6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_182));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_697 
            = ((0xb7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_183));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_698 
            = ((0xb8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_184));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_699 
            = ((0xb9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_185));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_700 
            = ((0xbaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_186));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_701 
            = ((0xbbU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_187));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_702 
            = ((0xbcU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_188));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_703 
            = ((0xbdU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_189));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_704 
            = ((0xbeU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_190));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_705 
            = ((0xbfU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_191));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_706 
            = ((0xc0U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_192));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_707 
            = ((0xc1U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_193));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_708 
            = ((0xc2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_194));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_709 
            = ((0xc3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_195));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_710 
            = ((0xc4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_196));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_711 
            = ((0xc5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_197));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_712 
            = ((0xc6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_198));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_713 
            = ((0xc7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_199));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_714 
            = ((0xc8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_200));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_715 
            = ((0xc9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_201));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_716 
            = ((0xcaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_202));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_717 
            = ((0xcbU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_203));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_718 
            = ((0xccU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_204));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_719 
            = ((0xcdU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_205));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_720 
            = ((0xceU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_206));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_721 
            = ((0xcfU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_207));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_722 
            = ((0xd0U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_208));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_723 
            = ((0xd1U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_209));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_724 
            = ((0xd2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_210));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_725 
            = ((0xd3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_211));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_726 
            = ((0xd4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_212));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_727 
            = ((0xd5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_213));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_728 
            = ((0xd6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_214));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_729 
            = ((0xd7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_215));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_730 
            = ((0xd8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_216));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_731 
            = ((0xd9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_217));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_732 
            = ((0xdaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_218));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_733 
            = ((0xdbU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_219));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_734 
            = ((0xdcU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_220));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_735 
            = ((0xddU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_221));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_736 
            = ((0xdeU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_222));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_737 
            = ((0xdfU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_223));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_738 
            = ((0xe0U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_224));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_739 
            = ((0xe1U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_225));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_740 
            = ((0xe2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_226));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_741 
            = ((0xe3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_227));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_742 
            = ((0xe4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_228));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_743 
            = ((0xe5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_229));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_744 
            = ((0xe6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_230));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_745 
            = ((0xe7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_231));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_746 
            = ((0xe8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_232));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_747 
            = ((0xe9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_233));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_748 
            = ((0xeaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_234));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_749 
            = ((0xebU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_235));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_750 
            = ((0xecU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_236));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_751 
            = ((0xedU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_237));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_752 
            = ((0xeeU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_238));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_753 
            = ((0xefU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_239));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_754 
            = ((0xf0U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_240));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_755 
            = ((0xf1U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_241));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_756 
            = ((0xf2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_242));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_757 
            = ((0xf3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_243));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_758 
            = ((0xf4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_244));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_759 
            = ((0xf5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_245));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_760 
            = ((0xf6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_246));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_761 
            = ((0xf7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_247));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_762 
            = ((0xf8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_248));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_763 
            = ((0xf9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_249));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_764 
            = ((0xfaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_250));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_765 
            = ((0xfbU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_251));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_766 
            = ((0xfcU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_252));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_767 
            = ((0xfdU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_253));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_768 
            = ((0xfeU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_254));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_769 
            = ((0xffU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                   >> 4U))) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_255));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_514 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_0;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_515 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_1;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_516 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_2;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_517 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_3;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_518 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_4;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_519 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_5;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_520 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_6;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_521 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_7;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_522 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_8;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_523 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_9;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_524 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_10;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_525 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_11;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_526 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_12;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_527 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_13;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_528 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_14;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_529 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_15;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_530 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_16;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_531 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_17;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_532 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_18;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_533 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_19;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_534 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_20;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_535 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_21;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_536 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_22;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_537 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_23;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_538 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_24;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_539 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_25;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_540 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_26;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_541 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_27;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_542 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_28;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_543 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_29;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_544 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_30;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_545 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_31;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_546 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_32;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_547 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_33;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_548 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_34;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_549 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_35;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_550 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_36;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_551 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_37;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_552 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_38;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_553 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_39;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_554 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_40;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_555 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_41;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_556 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_42;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_557 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_43;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_558 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_44;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_559 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_45;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_560 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_46;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_561 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_47;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_562 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_48;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_563 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_49;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_564 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_50;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_565 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_51;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_566 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_52;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_567 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_53;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_568 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_54;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_569 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_55;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_570 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_56;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_571 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_57;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_572 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_58;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_573 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_59;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_574 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_60;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_575 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_61;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_576 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_62;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_577 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_63;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_578 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_64;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_579 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_65;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_580 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_66;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_581 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_67;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_582 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_68;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_583 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_69;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_584 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_70;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_585 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_71;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_586 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_72;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_587 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_73;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_588 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_74;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_589 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_75;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_590 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_76;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_591 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_77;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_592 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_78;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_593 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_79;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_594 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_80;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_595 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_81;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_596 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_82;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_597 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_83;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_598 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_84;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_599 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_85;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_600 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_86;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_601 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_87;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_602 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_88;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_603 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_89;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_604 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_90;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_605 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_91;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_606 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_92;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_607 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_93;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_608 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_94;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_609 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_95;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_610 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_96;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_611 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_97;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_612 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_98;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_613 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_99;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_614 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_100;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_615 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_101;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_616 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_102;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_617 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_103;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_618 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_104;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_619 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_105;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_620 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_106;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_621 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_107;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_622 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_108;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_623 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_109;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_624 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_110;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_625 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_111;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_626 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_112;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_627 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_113;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_628 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_114;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_629 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_115;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_630 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_116;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_631 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_117;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_632 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_118;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_633 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_119;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_634 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_120;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_635 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_121;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_636 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_122;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_637 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_123;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_638 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_124;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_639 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_125;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_640 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_126;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_641 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_127;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_642 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_128;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_643 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_129;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_644 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_130;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_645 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_131;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_646 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_132;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_647 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_133;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_648 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_134;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_649 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_135;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_650 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_136;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_651 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_137;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_652 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_138;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_653 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_139;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_654 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_140;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_655 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_141;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_656 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_142;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_657 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_143;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_658 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_144;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_659 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_145;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_660 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_146;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_661 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_147;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_662 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_148;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_663 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_149;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_664 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_150;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_665 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_151;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_666 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_152;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_667 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_153;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_668 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_154;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_669 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_155;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_670 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_156;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_671 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_157;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_672 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_158;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_673 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_159;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_674 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_160;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_675 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_161;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_676 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_162;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_677 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_163;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_678 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_164;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_679 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_165;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_680 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_166;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_681 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_167;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_682 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_168;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_683 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_169;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_684 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_170;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_685 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_171;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_686 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_172;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_687 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_173;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_688 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_174;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_689 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_175;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_690 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_176;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_691 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_177;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_692 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_178;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_693 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_179;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_694 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_180;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_695 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_181;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_696 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_182;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_697 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_183;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_698 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_184;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_699 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_185;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_700 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_186;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_701 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_187;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_702 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_188;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_703 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_189;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_704 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_190;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_705 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_191;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_706 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_192;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_707 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_193;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_708 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_194;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_709 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_195;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_710 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_196;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_711 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_197;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_712 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_198;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_713 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_199;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_714 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_200;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_715 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_201;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_716 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_202;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_717 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_203;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_718 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_204;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_719 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_205;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_720 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_206;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_721 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_207;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_722 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_208;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_723 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_209;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_724 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_210;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_725 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_211;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_726 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_212;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_727 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_213;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_728 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_214;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_729 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_215;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_730 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_216;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_731 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_217;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_732 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_218;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_733 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_219;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_734 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_220;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_735 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_221;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_736 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_222;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_737 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_223;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_738 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_224;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_739 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_225;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_740 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_226;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_741 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_227;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_742 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_228;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_743 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_229;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_744 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_230;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_745 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_231;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_746 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_232;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_747 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_233;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_748 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_234;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_749 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_235;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_750 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_236;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_751 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_237;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_752 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_238;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_753 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_239;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_754 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_240;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_755 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_241;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_756 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_242;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_757 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_243;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_758 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_244;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_759 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_245;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_760 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_246;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_761 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_247;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_762 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_248;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_763 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_249;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_764 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_250;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_765 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_251;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_766 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_252;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_767 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_253;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_768 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_254;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_769 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_255;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stmsk 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_ByteEn)
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_M_Cmd 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
            ? 2U : (((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid)) 
                     & (2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd)))
                     ? 2U : 0U));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_master_S_Resp 
        = (((((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Resp)
               : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid) 
                   & (2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd)))
                   ? 1U : 0U)) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__responseToCPUReg)) 
            | ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Resp)
                : 0U)) | ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_slave_S_Resp)
                           : 0U));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_95 
        = (0x1fffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg) 
                      + ((0x1000U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_92) 
                                     << 1U)) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_92))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_81 
        = (0x1fffU & (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg) 
                       - ((0x1000U & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData 
                                      << 1U)) | (0xfffU 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData))) 
                      + ((0x1000U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_78) 
                                     << 1U)) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_78))));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__REG) {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_S_Resp = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp_io_slave_S_Resp 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_master_S_Resp;
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_S_Resp 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_master_S_Resp;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp_io_slave_S_Resp = 0U;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_88 
        = (0x1ffffffffULL & ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                              ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg
                              : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                  ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg
                                  : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                      ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                                          ? (4ULL + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg)
                                          : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                                              ? (4ULL 
                                                 + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg)
                                              : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg))
                                      : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                          ? ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                                              ? (4ULL 
                                                 + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg)
                                              : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg)
                                          : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg)))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_92 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
            ? ((3U == (3U & (IData)((vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                     >> 2U)))) ? 5U
                : 3U) : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                          ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                              ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_63)
                                  ? 0U : 4U) : ((3U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                                                 ? 0U
                                                 : 5U))
                          : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                              ? 2U : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                       ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                                           ? 6U : (
                                                   (1U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                                                    ? 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                                 >> 2U))))
                                                     ? 
                                                    ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_7)
                                                      ? 0U
                                                      : 1U)
                                                     : 2U)
                                                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)))
                                       : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                           ? ((3U == 
                                               (3U 
                                                & (IData)(
                                                          (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                           >> 2U))))
                                               ? 0U
                                               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                           : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_81 
        = ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
            ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_63)
                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
                    ? ((IData)(0x800U) + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg)
                    : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg)
                : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)
            : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                    ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                        ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_7)
                            ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg
                            : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)
                        : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)
                    : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_illMem 
        = ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
           & ((4U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
              & ((3U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                 & ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                     ? (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                     : ((1U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                        & ((2U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                           & ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                              & (3U == (3U & (IData)(
                                                     (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                      >> 2U)))))))))));
    if ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_111 
            = (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                         >> 2U));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_102 
            = (0x1ffU & (IData)((0x7fffffffULL & ((4ULL 
                                                   + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                                  >> 2U))));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_111 
            = (0x1ffU & ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                          ? (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                             >> 2U) : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                        ? (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                           >> 2U) : 
                                       ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                         ? (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                            >> 2U) : 
                                        ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                          ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                                              ? (IData)(
                                                        (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                         >> 2U))
                                              : (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                                 >> 2U))
                                          : (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                             >> 2U))))));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_102 
            = (0x1ffU & ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                          ? (IData)((0x7fffffffULL 
                                     & ((4ULL + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                        >> 2U))) : 
                         ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__rdAddrReg)
                           : (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                              >> 2U))));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hi_1 
        = ((0xff00U & (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                         ? ((0U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                             ? vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data
                             : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_58))
                         : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_58)) 
                       << 8U)) | (0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_57)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data
                                                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_57)))
                                            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_57))));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__lo 
        = ((0xff00U & (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                         ? ((0U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61)
                             : ((1U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61)
                                 : ((2U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                     ? vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data
                                     : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61))))
                         : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61)) 
                       << 8U)) | (0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_60)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_60)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_60)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (3U 
                                                       & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_60)))))
                                            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_60))));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_72 
        = ((0U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
            ? 8U : ((1U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                     ? 4U : ((2U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                              ? 2U : ((3U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                       ? 1U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_59)))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_26 
        = ((0x1aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_26)
            : ((0x19U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_25)
                : ((0x18U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_24)
                    : ((0x17U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_23)
                        : ((0x16U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_22)
                            : ((0x15U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_21)
                                : ((0x14U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_20)
                                    : ((0x13U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_19)
                                        : ((0x12U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_18)
                                            : ((0x11U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_17)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_16)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_15)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_14)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_13))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_16 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall)
               ? ((0x10U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_252))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_252)));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_17 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_1) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall)
               ? ((0x11U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_253))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_253)));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_18 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_2) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall)
               ? ((0x12U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_254))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_254)));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_19 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_3) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall)
               ? ((0x13U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_255))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_255)));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_20 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_4) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall)
               ? ((0x14U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_256))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_256)));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_21 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_5) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall)
               ? ((0x15U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src)) 
                  & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_257))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_257)));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__bval 
        = (0xffU & ((3U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_addr))
                     ? vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63
                     : ((2U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_addr))
                         ? (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                            >> 8U) : ((1U == (3U & vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_addr))
                                       ? (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                          >> 0x10U)
                                       : (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                          >> 0x18U)))));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hval 
        = (0xffffU & ((2U & vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_addr)
                       ? vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63
                       : (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                          >> 0x10U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_139));
    vlTOPp->Patmos__DOT__cores_0_io_memInOut_S_Resp 
        = ((IData)(vlTOPp->Patmos__DOT__REG_11) | (
                                                   (((((((((IData)(vlTOPp->Patmos__DOT__Leds__DOT__respReg) 
                                                           | (IData)(vlTOPp->Patmos__DOT__Keys__DOT__respReg)) 
                                                          | ((1U 
                                                              == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd))
                                                              ? 1U
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd))
                                                               ? 1U
                                                               : 0U))) 
                                                         | (IData)(vlTOPp->Patmos__DOT__Deadline__DOT__respReg)) 
                                                        | ((2U 
                                                            == (IData)(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Cmd))
                                                            ? 1U
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Cmd))
                                                             ? 1U
                                                             : 0U))) 
                                                       | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg) 
                                                           & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc) 
                                                              | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___T_198)))
                                                           ? 1U
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))
                                                            ? 
                                                           ((0x80U 
                                                             & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr)
                                                             ? 
                                                            ((2U 
                                                              & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_179)
                                                              : 3U)
                                                             : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_179))
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))
                                                             ? 1U
                                                             : 0U)))) 
                                                      | ((IData)(vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqReg)
                                                          ? 1U
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__REG)
                                                         ? (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__respReg)
                                                         : 0U)) 
                                                    | (((1U 
                                                         == (IData)(vlTOPp->Patmos__DOT__Spm__DOT__cmdReg)) 
                                                        | (2U 
                                                           == (IData)(vlTOPp->Patmos__DOT__Spm__DOT__cmdReg)))
                                                        ? 1U
                                                        : 0U)) 
                                                   | (IData)(vlTOPp->Patmos__DOT__REG)));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_154 
        = (((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_brflush)) 
            & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_stackOp)
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_flush 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_brflush));
    if ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isCmp) 
          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isPred)) 
         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_1))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_321 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_322)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_255));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_322 
            = ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_322)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_256));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_323 
            = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_322)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_257));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_324 
            = ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_322)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_258));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_325 
            = ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_322)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_259));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_326 
            = ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_322)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_260));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_327 
            = ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_322)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_261));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_321 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_255;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_322 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_256;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_323 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_257;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_324 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_258;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_325 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_259;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_326 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_260;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_327 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_261;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet 
        = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_6) 
            | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xret));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_781 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__burstCntReg))
            ? 3U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_777));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_788 
        = ((0U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_514));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_789 
        = ((1U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_515));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_790 
        = ((2U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_516));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_791 
        = ((3U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_517));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_792 
        = ((4U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_518));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_793 
        = ((5U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_519));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_794 
        = ((6U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_520));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_795 
        = ((7U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_521));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_796 
        = ((8U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_522));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_797 
        = ((9U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                            >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_523));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_798 
        = ((0xaU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                              >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_524));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_799 
        = ((0xbU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                              >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_525));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_800 
        = ((0xcU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                              >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_526));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_801 
        = ((0xdU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                              >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_527));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_802 
        = ((0xeU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                              >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_528));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_803 
        = ((0xfU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                              >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_529));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_804 
        = ((0x10U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_530));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_805 
        = ((0x11U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_531));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_806 
        = ((0x12U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_532));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_807 
        = ((0x13U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_533));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_808 
        = ((0x14U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_534));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_809 
        = ((0x15U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_535));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_810 
        = ((0x16U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_536));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_811 
        = ((0x17U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_537));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_812 
        = ((0x18U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_538));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_813 
        = ((0x19U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_539));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_814 
        = ((0x1aU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_540));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_815 
        = ((0x1bU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_541));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_816 
        = ((0x1cU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_542));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_817 
        = ((0x1dU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_543));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_818 
        = ((0x1eU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_544));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_819 
        = ((0x1fU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_545));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_820 
        = ((0x20U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_546));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_821 
        = ((0x21U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_547));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_822 
        = ((0x22U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_548));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_823 
        = ((0x23U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_549));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_824 
        = ((0x24U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_550));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_825 
        = ((0x25U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_551));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_826 
        = ((0x26U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_552));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_827 
        = ((0x27U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_553));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_828 
        = ((0x28U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_554));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_829 
        = ((0x29U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_555));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_830 
        = ((0x2aU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_556));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_831 
        = ((0x2bU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_557));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_832 
        = ((0x2cU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_558));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_833 
        = ((0x2dU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_559));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_834 
        = ((0x2eU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_560));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_835 
        = ((0x2fU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_561));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_836 
        = ((0x30U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_562));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_837 
        = ((0x31U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_563));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_838 
        = ((0x32U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_564));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_839 
        = ((0x33U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_565));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_840 
        = ((0x34U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_566));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_841 
        = ((0x35U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_567));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_842 
        = ((0x36U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_568));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_843 
        = ((0x37U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_569));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_844 
        = ((0x38U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_570));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_845 
        = ((0x39U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_571));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_846 
        = ((0x3aU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_572));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_847 
        = ((0x3bU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_573));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_848 
        = ((0x3cU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_574));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_849 
        = ((0x3dU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_575));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_850 
        = ((0x3eU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_576));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_851 
        = ((0x3fU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_577));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_852 
        = ((0x40U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_578));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_853 
        = ((0x41U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_579));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_854 
        = ((0x42U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_580));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_855 
        = ((0x43U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_581));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_856 
        = ((0x44U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_582));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_857 
        = ((0x45U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_583));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_858 
        = ((0x46U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_584));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_859 
        = ((0x47U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_585));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_860 
        = ((0x48U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_586));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_861 
        = ((0x49U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_587));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_862 
        = ((0x4aU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_588));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_863 
        = ((0x4bU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_589));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_864 
        = ((0x4cU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_590));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_865 
        = ((0x4dU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_591));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_866 
        = ((0x4eU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_592));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_867 
        = ((0x4fU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_593));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_868 
        = ((0x50U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_594));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_869 
        = ((0x51U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_595));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_870 
        = ((0x52U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_596));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_871 
        = ((0x53U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_597));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_872 
        = ((0x54U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_598));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_873 
        = ((0x55U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_599));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_874 
        = ((0x56U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_600));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_875 
        = ((0x57U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_601));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_876 
        = ((0x58U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_602));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_877 
        = ((0x59U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_603));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_878 
        = ((0x5aU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_604));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_879 
        = ((0x5bU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_605));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_880 
        = ((0x5cU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_606));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_881 
        = ((0x5dU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_607));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_882 
        = ((0x5eU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_608));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_883 
        = ((0x5fU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_609));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_884 
        = ((0x60U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_610));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_885 
        = ((0x61U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_611));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_886 
        = ((0x62U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_612));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_887 
        = ((0x63U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_613));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_888 
        = ((0x64U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_614));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_889 
        = ((0x65U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_615));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_890 
        = ((0x66U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_616));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_891 
        = ((0x67U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_617));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_892 
        = ((0x68U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_618));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_893 
        = ((0x69U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_619));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_894 
        = ((0x6aU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_620));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_895 
        = ((0x6bU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_621));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_896 
        = ((0x6cU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_622));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_897 
        = ((0x6dU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_623));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_898 
        = ((0x6eU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_624));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_899 
        = ((0x6fU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_625));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_900 
        = ((0x70U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_626));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_901 
        = ((0x71U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_627));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_902 
        = ((0x72U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_628));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_903 
        = ((0x73U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_629));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_904 
        = ((0x74U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_630));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_905 
        = ((0x75U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_631));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_906 
        = ((0x76U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_632));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_907 
        = ((0x77U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_633));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_908 
        = ((0x78U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_634));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_909 
        = ((0x79U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_635));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_910 
        = ((0x7aU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_636));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_911 
        = ((0x7bU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_637));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_912 
        = ((0x7cU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_638));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_913 
        = ((0x7dU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_639));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_914 
        = ((0x7eU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_640));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_915 
        = ((0x7fU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_641));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_916 
        = ((0x80U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_642));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_917 
        = ((0x81U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_643));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_918 
        = ((0x82U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_644));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_919 
        = ((0x83U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_645));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_920 
        = ((0x84U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_646));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_921 
        = ((0x85U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_647));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_922 
        = ((0x86U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_648));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_923 
        = ((0x87U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_649));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_924 
        = ((0x88U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_650));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_925 
        = ((0x89U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_651));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_926 
        = ((0x8aU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_652));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_927 
        = ((0x8bU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_653));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_928 
        = ((0x8cU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_654));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_929 
        = ((0x8dU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_655));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_930 
        = ((0x8eU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_656));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_931 
        = ((0x8fU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_657));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_932 
        = ((0x90U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_658));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_933 
        = ((0x91U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_659));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_934 
        = ((0x92U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_660));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_935 
        = ((0x93U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_661));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_936 
        = ((0x94U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_662));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_937 
        = ((0x95U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_663));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_938 
        = ((0x96U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_664));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_939 
        = ((0x97U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_665));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_940 
        = ((0x98U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_666));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_941 
        = ((0x99U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_667));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_942 
        = ((0x9aU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_668));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_943 
        = ((0x9bU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_669));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_944 
        = ((0x9cU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_670));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_945 
        = ((0x9dU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_671));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_946 
        = ((0x9eU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_672));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_947 
        = ((0x9fU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_673));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_948 
        = ((0xa0U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_674));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_949 
        = ((0xa1U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_675));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_950 
        = ((0xa2U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_676));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_951 
        = ((0xa3U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_677));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_952 
        = ((0xa4U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_678));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_953 
        = ((0xa5U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_679));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_954 
        = ((0xa6U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_680));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_955 
        = ((0xa7U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_681));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_956 
        = ((0xa8U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_682));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_957 
        = ((0xa9U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_683));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_958 
        = ((0xaaU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_684));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_959 
        = ((0xabU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_685));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_960 
        = ((0xacU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_686));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_961 
        = ((0xadU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_687));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_962 
        = ((0xaeU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_688));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_963 
        = ((0xafU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_689));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_964 
        = ((0xb0U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_690));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_965 
        = ((0xb1U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_691));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_966 
        = ((0xb2U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_692));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_967 
        = ((0xb3U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_693));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_968 
        = ((0xb4U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_694));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_969 
        = ((0xb5U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_695));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_970 
        = ((0xb6U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_696));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_971 
        = ((0xb7U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_697));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_972 
        = ((0xb8U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_698));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_973 
        = ((0xb9U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_699));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_974 
        = ((0xbaU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_700));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_975 
        = ((0xbbU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_701));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_976 
        = ((0xbcU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_702));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_977 
        = ((0xbdU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_703));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_978 
        = ((0xbeU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_704));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_979 
        = ((0xbfU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_705));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_980 
        = ((0xc0U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_706));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_981 
        = ((0xc1U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_707));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_982 
        = ((0xc2U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_708));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_983 
        = ((0xc3U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_709));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_984 
        = ((0xc4U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_710));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_985 
        = ((0xc5U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_711));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_986 
        = ((0xc6U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_712));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_987 
        = ((0xc7U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_713));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_988 
        = ((0xc8U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_714));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_989 
        = ((0xc9U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_715));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_990 
        = ((0xcaU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_716));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_991 
        = ((0xcbU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_717));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_992 
        = ((0xccU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_718));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_993 
        = ((0xcdU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_719));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_994 
        = ((0xceU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_720));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_995 
        = ((0xcfU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_721));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_996 
        = ((0xd0U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_722));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_997 
        = ((0xd1U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_723));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_998 
        = ((0xd2U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_724));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_999 
        = ((0xd3U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_725));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1000 
        = ((0xd4U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_726));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1001 
        = ((0xd5U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_727));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1002 
        = ((0xd6U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_728));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1003 
        = ((0xd7U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_729));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1004 
        = ((0xd8U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_730));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1005 
        = ((0xd9U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_731));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1006 
        = ((0xdaU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_732));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1007 
        = ((0xdbU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_733));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1008 
        = ((0xdcU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_734));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1009 
        = ((0xddU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_735));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1010 
        = ((0xdeU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_736));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1011 
        = ((0xdfU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_737));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1012 
        = ((0xe0U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_738));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1013 
        = ((0xe1U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_739));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1014 
        = ((0xe2U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_740));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1015 
        = ((0xe3U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_741));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1016 
        = ((0xe4U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_742));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1017 
        = ((0xe5U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_743));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1018 
        = ((0xe6U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_744));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1019 
        = ((0xe7U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_745));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1020 
        = ((0xe8U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_746));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1021 
        = ((0xe9U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_747));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1022 
        = ((0xeaU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_748));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1023 
        = ((0xebU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_749));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1024 
        = ((0xecU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_750));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1025 
        = ((0xedU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_751));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1026 
        = ((0xeeU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_752));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1027 
        = ((0xefU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_753));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1028 
        = ((0xf0U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_754));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1029 
        = ((0xf1U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_755));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1030 
        = ((0xf2U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_756));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1031 
        = ((0xf3U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_757));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1032 
        = ((0xf4U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_758));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1033 
        = ((0xf5U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_759));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1034 
        = ((0xf6U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_760));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1035 
        = ((0xf7U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_761));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1036 
        = ((0xf8U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_762));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1037 
        = ((0xf9U != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_763));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1038 
        = ((0xfaU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_764));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1039 
        = ((0xfbU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_765));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1040 
        = ((0xfcU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_766));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1041 
        = ((0xfdU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_767));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1042 
        = ((0xfeU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_768));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1043 
        = ((0xffU != (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                               >> 4U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_769));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_io_wrEna 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__fillReg) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid) 
              & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stmsk)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1_io_wrEna 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__fillReg) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid) 
              & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stmsk) 
                 >> 1U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2_io_wrEna 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__fillReg) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid) 
              & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stmsk) 
                 >> 2U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3_io_wrEna 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__fillReg) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid) 
              & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stmsk) 
                 >> 3U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_slave_M_Cmd 
        = (((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Cmd))
             ? 2U : 0U) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_M_Cmd));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT___GEN_16 
        = ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
            ? 0U : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                     ? ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp_io_slave_S_Resp))
                         ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__burstCntReg))
                             ? 2U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                         : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                     : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data 
        = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hi_1) 
            << 0x10U) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__lo));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_ByteEn 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_72)
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_59));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_39 
        = ((0x27U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_39)
            : ((0x26U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_38)
                : ((0x25U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_37)
                    : ((0x24U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_36)
                        : ((0x23U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_35)
                            : ((0x22U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_34)
                                : ((0x21U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_33)
                                    : ((0x20U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_32)
                                        : ((0x1fU == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_31)
                                            : ((0x1eU 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_30)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_29)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_28)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_27)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_26))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_543 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_14)
            ? 0xeU : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_15)
                       ? 0xfU : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_16)
                                  ? 0x10U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_17)
                                              ? 0x11U
                                              : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_18)
                                                  ? 0x12U
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_19)
                                                   ? 0x13U
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_20)
                                                    ? 0x14U
                                                    : 
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_21)
                                                     ? 0x15U
                                                     : 
                                                    ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_22)
                                                      ? 0x16U
                                                      : 
                                                     ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_23)
                                                       ? 0x17U
                                                       : 
                                                      ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_24)
                                                        ? 0x18U
                                                        : 
                                                       ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_25)
                                                         ? 0x19U
                                                         : 
                                                        ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_26)
                                                          ? 0x1aU
                                                          : 
                                                         ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_27)
                                                           ? 0x1bU
                                                           : 
                                                          ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_28)
                                                            ? 0x1cU
                                                            : 
                                                           ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_29)
                                                             ? 0x1dU
                                                             : 
                                                            ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_30)
                                                              ? 0x1eU
                                                              : 
                                                             ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_31)
                                                               ? 0x1fU
                                                               : 
                                                              (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_16) 
                                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg 
                                                                   >> 0x10U))
                                                                ? 0x10U
                                                                : 
                                                               (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_17) 
                                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg 
                                                                    >> 0x11U))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_18) 
                                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg 
                                                                     >> 0x12U))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_19) 
                                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg 
                                                                      >> 0x13U))
                                                                   ? 0x13U
                                                                   : 
                                                                  (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_20) 
                                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg 
                                                                       >> 0x14U))
                                                                    ? 0x14U
                                                                    : 
                                                                   (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_21) 
                                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg 
                                                                        >> 0x15U))
                                                                     ? 0x15U
                                                                     : 0U))))))))))))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memwb_rd_0_data 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_load)
            ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_hword)
                ? ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_zext)
                      ? 0U : ((0x8000U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hval))
                               ? 0xffffU : 0U)) << 0x10U) 
                   | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hval))
                : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_byte)
                    ? ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_zext)
                          ? 0U : ((0x80U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__bval))
                                   ? 0xffffffU : 0U)) 
                        << 8U) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__bval))
                    : vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63))
            : vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_data);
    if (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140) {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_2 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_3 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_1 = 0U;
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_2 
            = (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                        >> 0xcU));
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_3 
            = (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                        >> 7U));
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_1 
            = (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                        >> 0x11U));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_3 
        = (((3U == (IData)(vlTOPp->Patmos__DOT__cores_0_io_memInOut_S_Resp)) 
            | (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_master_S_Resp))) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_illMem));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_13 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0_io_memInOut_S_Resp)) 
           | (1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_master_S_Resp)));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_264 
        = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMTS) 
            & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))
            ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_154)
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_154)
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_154)
                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                            ? 1U : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                                     ? 2U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_154))))))
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_154));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_67 
        = ((8U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                            >> 0x16U))) ? ((0U == (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U)))
                                            ? (0xfffU 
                                               & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 4U)))
                                                ? (0xfffU 
                                                   & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 4U)))
                                                    ? 
                                                   (0xfffU 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 4U)))
                                                     ? 
                                                    (0xfffU 
                                                     & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                          >> 4U)))
                                                      ? 
                                                     (0x1fU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 7U))
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                           >> 4U)))
                                                       ? 
                                                      (0xfffU 
                                                       & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                            >> 4U)))
                                                        ? 
                                                       (0x1fU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                           >> 7U))
                                                        : 
                                                       (0xfffU 
                                                        & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))))))))
            : (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isSTC 
        = ((0xcU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                              >> 0x16U))) & ((0U == 
                                              (0xfU 
                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                  >> 0x12U))) 
                                             | ((4U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x12U))) 
                                                | ((5U 
                                                    == 
                                                    (0xfU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 0x12U))) 
                                                   | ((8U 
                                                       == 
                                                       (0xfU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                           >> 0x12U))) 
                                                      | ((0xcU 
                                                          == 
                                                          (0xfU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                              >> 0x12U))) 
                                                         | (0xdU 
                                                            == 
                                                            (0xfU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                                >> 0x12U)))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247 
        = ((0xaU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                              >> 0x16U))) & ((0U != 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 9U))) 
                                             & ((1U 
                                                 != 
                                                 (7U 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 9U))) 
                                                & ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 9U))) 
                                                   | ((3U 
                                                       != 
                                                       (7U 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                           >> 9U))) 
                                                      & (4U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                             >> 9U))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isMem 
        = ((0xbU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                              >> 0x16U))) | (0xaU == 
                                             (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x16U))));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140) {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_0 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_1 = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_0 = 0U;
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_0 
            = (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                        >> 0xcU));
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_1 
            = (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                        >> 7U));
        vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_0 
            = (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                        >> 0x11U));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_ret 
        = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
           & (((0x19U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                   >> 0x16U))) | (0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))) 
              & (0U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_xret 
        = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
           & (((0x19U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                   >> 0x16U))) | (0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))) 
              & ((0U != (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)) 
                 & (1U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_250 
        = ((0xaU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                              >> 0x16U))) & (0U == 
                                             (3U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                               >> 7U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_aluOp_0_isMul 
        = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
           & ((8U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                               >> 0x16U))) & ((0U != 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 4U))) 
                                              & ((1U 
                                                  != 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U))) 
                                                 & (2U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 4U)))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_81 
        = ((0x11U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                               >> 0x16U))) | (0x10U 
                                              == (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_85 
        = ((0x13U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                               >> 0x16U))) | (0x12U 
                                              == (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_89 
        = ((0x15U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                               >> 0x16U))) | (0x14U 
                                              == (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_234 
        = ((1U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                         >> 9U))) | ((2U != (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 9U))) 
                                     & (3U == (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 9U)))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm 
        = ((0x1fU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                               >> 0x16U))) & (0U == 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 4U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual 
        = ((vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
            >> 0x1fU) & (0x1fU != (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                            >> 0x16U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_13 
        = ((5U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                         >> 4U))) | (0U == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                  >> 0x19U))));
    if (vlTOPp->reset) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseReg = 1U;
    } else {
        if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exicache_doCallRet) 
             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_in))) {
            vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseReg 
                = (0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                                  >> 2U));
        }
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc 
        = (0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg 
                          - (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__instr_a_ispm 
        = ((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
            ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__mem_MPORT_1_data
            : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__mem_MPORT_1_data);
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_20 
        = ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_slave_M_Cmd)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__REG_1));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Data 
        = vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data;
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData 
        = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
            ? vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data
            : ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data
                : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data
                    : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data
                        : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                            ? vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data
                            : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                                    ? vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Data
                                    : vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data)
                                : vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_52 
        = ((0x34U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_52)
            : ((0x33U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_51)
                : ((0x32U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_50)
                    : ((0x31U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_49)
                        : ((0x30U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_48)
                            : ((0x2fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_47)
                                : ((0x2eU == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_46)
                                    : ((0x2dU == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_45)
                                        : ((0x2cU == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_44)
                                            : ((0x2bU 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_43)
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_42)
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_41)
                                                     : 
                                                    ((0x28U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_40)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_39))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable 
        = (1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_13) 
                 | (~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__mayStallReg))));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op 
        = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMTS) 
            & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_1))
            ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_264)
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_264)
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_264)
                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                            ? 1U : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func))
                                     ? 2U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_264))))))
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_264));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isStack 
        = ((0xbU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                              >> 0x16U))) ? ((0U == 
                                              (3U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 0x11U))) 
                                             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_250))
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_250));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_155 
        = (3U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_aluOp_0_isMul)
                  ? ((1U < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__inDelaySlot))
                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__inDelaySlot) 
                         - (IData)(1U)) : 1U) : ((0U 
                                                  != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__inDelaySlot))
                                                  ? 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__inDelaySlot) 
                                                  - (IData)(1U))
                                                  : 0U)));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_call 
        = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
           & (((0x19U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                   >> 0x16U))) | (0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U))))
               ? ((0U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))
                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_81)
                   : ((1U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))
                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_81)
                       : ((4U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)) 
                          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_81))))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_81)));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_jmpOp_branch 
        = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
           & (((0x19U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                   >> 0x16U))) | (0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U))))
               ? ((0U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))
                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_85)
                   : ((1U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))
                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_85)
                       : ((4U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_85)
                           : ((5U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)) 
                              | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_85)))))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_85)));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_brcf 
        = ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
           & (((0x19U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                   >> 0x16U))) | (0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U))))
               ? ((0U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))
                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_89)
                   : ((1U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))
                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_89)
                       : ((4U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_89)
                           : ((5U == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))
                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_89)
                               : ((0xaU == (0xfU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)) 
                                  | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_89))))))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_89)));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_246 
        = ((0xaU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                              >> 0x16U))) & ((0U != 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 9U))) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_234)));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_245 
        = ((0xaU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                              >> 0x16U))) ? ((0U == 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 9U)))
                                              ? 2U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_234))
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82 
        = ((0U == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                         >> 0x19U))) & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_20 
        = ((4U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                         >> 4U))) ? (0U == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                  >> 0x19U)))
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_13));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_63 
        = ((8U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                            >> 0x16U))) ? ((0U == (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U))) 
                                           | ((1U == 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 4U))) 
                                              | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 4U))) 
                                                    | ((6U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                            >> 4U))) 
                                                       | ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                               >> 4U))) 
                                                          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_13)))))))
            : (0U == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                            >> 0x19U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exicache_doCallRet 
        = ((((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call) 
               | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_ret)) 
              | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf)) 
             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall)) 
            | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret)) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
    vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
        = ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call) 
             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall)) 
            | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf))
            ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0)
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_callAddr
                : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0)
            : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret)
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg
                : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_65 
        = ((0x41U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_65)
            : ((0x40U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_64)
                : ((0x3fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_63)
                    : ((0x3eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_62)
                        : ((0x3dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_61)
                            : ((0x3cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_60)
                                : ((0x3bU == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_59)
                                    : ((0x3aU == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_58)
                                        : ((0x39U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_57)
                                            : ((0x38U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_56)
                                                : (
                                                   (0x37U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_55)
                                                    : 
                                                   ((0x36U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_54)
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_53)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_52))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_41 
        = ((~ ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_3) 
               | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_illMem))) 
           & (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in))
               ? ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush)) 
                  & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_load) 
                     | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_store)))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__mayStallReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_in 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable) 
           & (0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__cmd 
        = ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable) 
             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in)) 
            & (~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush)))
            ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_load) 
                << 1U) | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_store))
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_scIO_ena_in 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_out));
    if ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_24 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_20 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopInc;
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_24 
            = ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
                : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op)) 
                   | ((6U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op)) 
                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg))));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_20 
            = ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg
                : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg
                    : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_43
                        : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg)));
    }
    if ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_30 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_26 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opData;
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_27 
            = vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg;
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_30 
            = ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg
                : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopInc
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_30
                        : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg)));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_26 
            = ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg
                : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                    ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackAboveMem)
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopInc
                        : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)
                    : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg));
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_27 
            = ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                ? (QData)((IData)((0xfffffff0U & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)))
                : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                        ? (QData)((IData)((0xfffffff0U 
                                           & ((IData)(0x800U) 
                                              + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_30))))
                        : ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                            ? (QData)((IData)((0xfffffff0U 
                                               & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_43)))
                            : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg))));
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_46 
        = (0x1ffU & ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                      ? (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                         >> 2U) : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                                    ? (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                       >> 2U) : ((2U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                                                  ? 
                                                 (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                                  >> 2U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                                                   ? 
                                                  (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                                   >> 2U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                                                    ? 
                                                   (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                                    >> 2U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                                                     ? 
                                                    (0x1fcU 
                                                     & (((IData)(0x800U) 
                                                         + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_30) 
                                                        >> 2U))
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op))
                                                      ? 
                                                     (0x1fcU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_43 
                                                         >> 2U))
                                                      : 
                                                     (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                                      >> 2U)))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__shamt 
        = ((0xbU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                              >> 0x16U))) ? ((0U == 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 0x13U)))
                                              ? 2U : 
                                             ((1U == 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x13U)))
                                               ? 1U
                                               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_245)))
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_245));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_92 
        = ((4U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                         >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)
            : ((5U == (7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                             >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)
                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_62 
        = ((8U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                            >> 0x16U))) ? ((0U == (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U))) 
                                           | ((1U == 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 4U))) 
                                              | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U)))
                                                  ? 
                                                 (0U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x19U)))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 4U)))
                                                   ? 
                                                  (0U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x19U)))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 4U)))
                                                    ? 
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 0x19U)))
                                                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_20))))))
            : (0U == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                            >> 0x19U))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_154 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm) 
           | ((8U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                               >> 0x16U))) ? ((0U == 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 4U)))
                                               ? (0U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x19U)))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 4U)))
                                                   ? 
                                                  (0U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x19U)))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 4U)))
                                                    ? 
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 0x19U)))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 4U)))
                                                     ? 
                                                    (0U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 0x19U)))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                          >> 4U))) 
                                                     | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_20))))))
               : (0U == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                               >> 0x19U)))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_157 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm) 
           | ((9U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                               >> 0x16U))) ? ((2U == 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 4U))) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U))) 
                                                 | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_63)))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_63)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseNext 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exicache_doCallRet)
            ? (0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                              >> 2U)) : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg);
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_8 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((8U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_186))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_186))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_9 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((9U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_187))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_187))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_10 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((0xaU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_188))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_188))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_11 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((0xbU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_189))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_189))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_12 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((0xcU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_190))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_190))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_13 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((0xdU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_191))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_191))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_14 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((0xeU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_192))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_192))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_15 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((0xfU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_193))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_193))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_0 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_178))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_178))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_1 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((1U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_179))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_179))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_2 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((2U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_180))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_180))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_3 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((3U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_181))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_181))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_4 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((4U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_182))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_182))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_5 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((5U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_183))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_183))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_6 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((6U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_184))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_184))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_7 
        = (((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                            >> 2U)) == ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)) 
           & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
              & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                  ? ((7U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                     & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_185))
                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_185))));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheReg) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_reloc 
            = (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseReg 
               - (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__posReg));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase 
            = (0x3fffU & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__posReg));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_reloc 
            = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmReg)
                ? 0x4000U : 0U);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase 
            = (0x3fffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseReg);
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_78 
        = ((0x4eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_78)
            : ((0x4dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_77)
                : ((0x4cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_76)
                    : ((0x4bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_75)
                        : ((0x4aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_74)
                            : ((0x49U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_73)
                                : ((0x48U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_72)
                                    : ((0x47U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_71)
                                        : ((0x46U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_70)
                                            : ((0x45U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_69)
                                                : (
                                                   (0x44U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_68)
                                                    : 
                                                   ((0x43U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_67)
                                                     : 
                                                    ((0x42U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_66)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_65))))))))))))));
    if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exicache_doCallRet) 
         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_in))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseNext 
            = (0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                              >> 2U));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmNext 
            = (1U == (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                                 >> 0x10U)));
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheNext 
            = (1U <= (0x7fffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                                 >> 0x11U)));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseNext 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmNext 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheNext 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheReg;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd 
        = ((1U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_typ))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__cmd)
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_typ))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__cmd)
            : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__exc_io_ena = 
        ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_scIO_ena_in) 
         & (0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_scIO_ena_in) {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_M_Cmd 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                ? 0U : ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                         ? 1U : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                  ? 0U : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                           ? 0U : (
                                                   (1U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                                    ? 2U
                                                    : 0U)))));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
               & 1U);
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_M_Cmd = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena = 0U;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_io_rdAddr 
        = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_46)
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_102));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__addrImm 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__shamt))
            ? (0xfeU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                        << 1U)) : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__shamt))
                                    ? (0x1fcU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 << 2U))
                                    : (0x7fU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_134 
        = ((8U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                            >> 0x16U))) ? ((0U == (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                      >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_92))))))
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_immOp_0 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140) 
           | (((0x15U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                   >> 0x16U))) | (0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))) 
              | (((0x13U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                      >> 0x16U))) | 
                  (0x12U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                      >> 0x16U)))) 
                 | (((0x11U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                         >> 0x16U))) 
                     | (0x10U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                           >> 0x16U)))) 
                    | ((0xcU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                          >> 0x16U)))
                        ? ((0U == (0xfU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                           >> 0x12U))) 
                           | ((4U == (0xfU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                              >> 0x12U))) 
                              | ((5U == (0xfU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x12U)))
                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_154)
                                  : ((8U == (0xfU & 
                                             (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                              >> 0x12U))) 
                                     | ((0xcU == (0xfU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x12U))) 
                                        | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_154))))))
                        : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_154))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_199 
        = (((0x15U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                >> 0x16U))) | (0x14U 
                                               == (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))) 
           | (((0x13U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                   >> 0x16U))) | (0x12U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))) 
              | (((0x11U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                      >> 0x16U))) | 
                  (0x10U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                      >> 0x16U)))) 
                 | ((0x16U == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                        >> 0x16U))) 
                    | ((0xcU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                          >> 0x16U)))
                        ? ((0U == (0xfU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                           >> 0x12U))) 
                           | ((4U == (0xfU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                              >> 0x12U))) 
                              | ((5U == (0xfU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x12U))) 
                                 | ((8U == (0xfU & 
                                            (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                             >> 0x12U))) 
                                    | ((0xcU == (0xfU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x12U))) 
                                       | ((0xdU == 
                                           (0xfU & 
                                            (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                             >> 0x12U))) 
                                          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_157)))))))
                        : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_157))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hit 
        = ((((((((((((((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_0) 
                         | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_1)) 
                        | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_2)) 
                       | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_3)) 
                      | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_4)) 
                     | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_5)) 
                    | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_6)) 
                   | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_7)) 
                  | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_8)) 
                 | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_9)) 
                | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_10)) 
               | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_11)) 
              | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_12)) 
             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_13)) 
            | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_14)) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_15));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_54 
        = (((((((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_0)
                   ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                       ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                           : 0U) : 0U) : 0U) | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_1)
                                                 ? 
                                                ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)) 
                | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_2)
                    ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                        ? ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                            : 0U) : 0U) : 0U)) | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_3)
                                                   ? 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)) 
              | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_4)
                  ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                      ? ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                          : 0U) : 0U) : 0U)) | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_5)
                                                 ? 
                                                ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                                  ? 
                                                 ((5U 
                                                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)) 
            | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_6)
                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                    ? ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                        : 0U) : 0U) : 0U)) | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_7)
                                               ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                    : 0U)
                                                   : 0U)
                                               : 0U));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc 
        = (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callAddrReg 
           + (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_91 
        = ((0x5bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_91)
            : ((0x5aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_90)
                : ((0x59U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_89)
                    : ((0x58U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_88)
                        : ((0x57U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_87)
                            : ((0x56U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_86)
                                : ((0x55U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_85)
                                    : ((0x54U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_84)
                                        : ((0x53U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_83)
                                            : ((0x52U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_82)
                                                : (
                                                   (0x51U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_81)
                                                    : 
                                                   ((0x50U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_80)
                                                     : 
                                                    ((0x4fU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_79)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_78))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_fromCPU_M_Cmd 
        = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)
            : 0U);
    vlTOPp->Patmos__DOT__Leds_io_ocp_M_Cmd = ((0xf009U 
                                               == (0xffffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                      >> 0x10U)))
                                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                               : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___T_2 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)) 
           & (1U == (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                >> 0x10U))));
    vlTOPp->Patmos__DOT__HardlockOCPWrapper_io_cores_0_M_Cmd 
        = ((0xe801U == (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 0x10U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
            : 0U);
    vlTOPp->Patmos__DOT__Deadline_io_ocp_M_Cmd = ((0xf003U 
                                                   == 
                                                   (0xffffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                       >> 0x10U)))
                                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                                   : 0U);
    vlTOPp->Patmos__DOT__Spm_io_M_Cmd = ((IData)(vlTOPp->Patmos__DOT___T_38)
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                          : 0U);
    vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd = 
        ((0xf008U == (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                 >> 0x10U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
          : 0U);
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_409 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall)
            ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc_io_ena)
                ? (2ULL | ((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)) 
                           << 2U)) : (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_233)))
            : (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_233)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21 
        = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_M_Cmd)) 
           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_20));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Cmd 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_slave_M_Cmd) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_M_Cmd));
    if (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) {
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpmNext 
            = (1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_memSel) 
                     >> 1U));
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCacheNext 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_memSel));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_151 
            = (0x3ffffffffULL & VL_MULS_QQQ(34,34,34, 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_68)), 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_72))));
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseNext 
            = (0x7ffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet)
                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase)
                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg)));
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocNext 
            = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet)
                ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_reloc
                : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocReg);
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_152 
            = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulPipeReg)
                ? (IData)((vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_96 
                           >> 0x20U)) : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHiReg);
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_153 
            = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulPipeReg)
                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___T_96)
                : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLoReg);
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpmNext 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpm));
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCacheNext 
            = (1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCache));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_151 
            = (0x3ffffffffULL & (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHHReg)));
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseNext 
            = (0x7ffU & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg));
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocNext 
            = vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_152 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHiReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_153 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLoReg;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decoded_0 
        = ((0xbU == (0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                              >> 0x16U))) | ((0xaU 
                                              == (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U))) 
                                             | (((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U))) 
                                                 | (0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 0x16U))))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0xfU 
                                                   & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)) 
                                                 | ((1U 
                                                     == 
                                                     (0xfU 
                                                      & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)) 
                                                    | ((4U 
                                                        == 
                                                        (0xfU 
                                                         & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)) 
                                                       | ((5U 
                                                           == 
                                                           (0xfU 
                                                            & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)) 
                                                          | ((0xaU 
                                                              == 
                                                              (0xfU 
                                                               & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)) 
                                                             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_199))))))
                                                 : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_199))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitNext 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag) 
           | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exicache_doCallRet) 
               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_in))
               ? ((1U <= (0x7fffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                                     >> 0x11U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hit)
                   : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitReg))
               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitReg)));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_62 
        = (((((((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_54) 
                  | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_8)
                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                          ? ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                              : 0U) : 0U) : 0U)) | 
                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_9)
                   ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                       ? ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                           : 0U) : 0U) : 0U)) | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_10)
                                                  ? 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                                   ? 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)) 
               | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_11)
                   ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                       ? ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                           : 0U) : 0U) : 0U)) | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_12)
                                                  ? 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                                   ? 
                                                  ((0xcU 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)) 
             | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_13)
                 ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                     ? ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                         : 0U) : 0U) : 0U)) | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_14)
                                                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                                    ? 
                                                   ((0xeU 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                     : 0U)
                                                    : 0U)
                                                : 0U)) 
           | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_15)
               ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                   ? ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                       : 0U) : 0U) : 0U));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_104 
        = ((0x68U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_104)
            : ((0x67U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_103)
                : ((0x66U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_102)
                    : ((0x65U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_101)
                        : ((0x64U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_100)
                            : ((0x63U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_99)
                                : ((0x62U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_98)
                                    : ((0x61U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_97)
                                        : ((0x60U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_96)
                                            : ((0x5fU 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_95)
                                                : (
                                                   (0x5eU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_94)
                                                    : 
                                                   ((0x5dU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_93)
                                                     : 
                                                    ((0x5cU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_92)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_91))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_fromCPU_M_Cmd))
            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_ByteEn)
            : ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                ? 0U : ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                         ? 0U : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                  ? 0U : ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                           ? 0U : (
                                                   (1U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                                     ? 
                                                    ((1U 
                                                      == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp))
                                                      ? 
                                                     (((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_7)) 
                                                       & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_63))
                                                       ? 0xfU
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)))))));
    vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqBools_0 
        = ((0U != (IData)(vlTOPp->Patmos__DOT__HardlockOCPWrapper_io_cores_0_M_Cmd)) 
           | ((~ (IData)(vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqReg)) 
              & (IData)(vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqReg)));
    vlTOPp->Patmos__DOT__Deadline__DOT___GEN_3 = ((
                                                   (2U 
                                                    == (IData)(vlTOPp->Patmos__DOT__Deadline_io_ocp_M_Cmd)) 
                                                   & (0U 
                                                      != vlTOPp->Patmos__DOT__Deadline__DOT__downCountReg)) 
                                                  | (IData)(vlTOPp->Patmos__DOT__Deadline__DOT__stallReg));
    vlTOPp->Patmos__DOT__Spm__DOT___T_5 = ((1U == (IData)(vlTOPp->Patmos__DOT__Spm_io_M_Cmd))
                                            ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_72)
                                                : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_59))
                                            : 0U);
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Cmd 
        = vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd;
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__full)) 
           & (1U == (IData)(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd)));
    vlTOPp->Patmos__DOT__UartCmp__DOT___GEN_1 = ((0U 
                                                  != (IData)(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd)) 
                                                 | ((1U 
                                                     != (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__respReg)) 
                                                    & (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__REG)));
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue_io_enq_bits 
        = (0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data);
}
