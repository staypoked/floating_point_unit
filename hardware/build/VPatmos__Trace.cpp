// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPatmos__Syms.h"


void VPatmos::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VPatmos__Syms* __restrict vlSymsp = static_cast<VPatmos__Syms*>(userp);
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VPatmos::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VPatmos__Syms* __restrict vlSymsp = static_cast<VPatmos__Syms*>(userp);
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((1ULL + vlTOPp->Patmos__DOT__Timer__DOT__cycleReg) 
                                    == vlTOPp->Patmos__DOT__Timer__DOT__cycleIntrReg)));
            tracep->chgBit(oldp+1,(((0x4fU == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__usecSubReg)) 
                                    & ((1ULL + vlTOPp->Patmos__DOT__Timer__DOT__usecReg) 
                                       == vlTOPp->Patmos__DOT__Timer__DOT__usecIntrReg))));
            tracep->chgBit(oldp+2,((1U & ((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keyReg) 
                                          & (~ (IData)(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg))))));
            tracep->chgBit(oldp+3,((1U & (((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keyReg) 
                                           >> 1U) & 
                                          (~ ((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg) 
                                              >> 1U))))));
            tracep->chgBit(oldp+4,((1U & (((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keyReg) 
                                           >> 2U) & 
                                          (~ ((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg) 
                                              >> 2U))))));
            tracep->chgBit(oldp+5,((1U & (((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keyReg) 
                                           >> 3U) & 
                                          (~ ((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg) 
                                              >> 3U))))));
            tracep->chgCData(oldp+6,(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd),3);
            tracep->chgIData(oldp+7,((0x1fffffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT___T_3)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg))
                                                      ? 
                                                     (0xfffffff0U 
                                                      & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr)
                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)
                                                    : (IData)(
                                                              ((2U 
                                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                                                ? 
                                                               (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                                 <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                                 ? 
                                                                ((1U 
                                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                                                  ? 
                                                                 (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                                   < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                                   ? 
                                                                  ((3U 
                                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                                                                    ? 
                                                                   ((QData)((IData)(
                                                                                ((IData)(1U) 
                                                                                + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___T_33))) 
                                                                    << 2U)
                                                                    : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                                  : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                                 : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55))))),21);
            tracep->chgIData(oldp+8,(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Data),32);
            tracep->chgBit(oldp+9,(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataValid));
            tracep->chgCData(oldp+10,(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataByteEn),4);
            tracep->chgCData(oldp+11,(vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Resp),2);
            tracep->chgIData(oldp+12,(vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Data),32);
            tracep->chgCData(oldp+13,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd),3);
            tracep->chgIData(oldp+14,((0xfffffffcU 
                                       & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)),32);
            tracep->chgIData(oldp+15,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data),32);
            tracep->chgCData(oldp+16,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_72)
                                        : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_59))),4);
            tracep->chgCData(oldp+17,(vlTOPp->Patmos__DOT__cores_0_io_memInOut_S_Resp),2);
            tracep->chgIData(oldp+18,(((IData)(vlTOPp->Patmos__DOT__REG_10)
                                        ? 0U : ((IData)(vlTOPp->Patmos__DOT__REG_9)
                                                 ? 
                                                ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__mem
                                                  [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__rdAddrReg] 
                                                  << 0x18U) 
                                                 | ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__mem
                                                     [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__rdAddrReg] 
                                                     << 0x10U) 
                                                    | ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__mem
                                                        [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__rdAddrReg] 
                                                        << 8U) 
                                                       | vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__mem
                                                       [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__rdAddrReg])))
                                                 : 
                                                ((IData)(vlTOPp->Patmos__DOT__REG_8)
                                                  ? (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rdDataReg)
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__REG_7)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__REG_6)
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))
                                                     ? 
                                                    ((0x80U 
                                                      & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr)
                                                      ? 
                                                     vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec
                                                     [
                                                     (0x1fU 
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
                                                    : 
                                                   ((IData)(vlTOPp->Patmos__DOT__REG_5)
                                                     ? 
                                                    ((0x8000U 
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
                                                     : 
                                                    ((IData)(vlTOPp->Patmos__DOT__REG_4)
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
                                                         : 0U))))))))))),32);
            tracep->chgCData(oldp+19,(((0xf001U == 
                                        (0xffffU & 
                                         (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                          >> 0x10U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                        : 0U)),3);
            tracep->chgCData(oldp+20,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg) 
                                        & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc) 
                                           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___T_198)))
                                        ? 1U : ((1U 
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
                                                  : 0U)))),2);
            tracep->chgIData(oldp+21,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))
                                        ? ((0x80U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr)
                                            ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec
                                           [(0x1fU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                >> 2U))]
                                            : ((0U 
                                                == 
                                                (0x3fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                    >> 2U)))
                                                ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg
                                                : (
                                                   (1U 
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
                                        : 0U)),32);
            tracep->chgCData(oldp+22,(vlTOPp->Patmos__DOT__HardlockOCPWrapper_io_cores_0_M_Cmd),3);
            tracep->chgCData(oldp+23,(((IData)(vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqReg)
                                        ? 1U : 0U)),2);
            tracep->chgCData(oldp+24,(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd),3);
            tracep->chgCData(oldp+25,(((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__REG)
                                        ? (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__respReg)
                                        : 0U)),2);
            tracep->chgIData(oldp+26,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rdDataReg),32);
            tracep->chgBit(oldp+27,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_reg));
            tracep->chgCData(oldp+28,(((0xf000U == 
                                        (0xffffU & 
                                         (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                          >> 0x10U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                        : 0U)),3);
            tracep->chgCData(oldp+29,(((2U == (IData)(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Cmd))
                                        ? 1U : ((1U 
                                                 == (IData)(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Cmd))
                                                 ? 1U
                                                 : 0U))),2);
            tracep->chgIData(oldp+30,(((0x8000U & vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr)
                                        ? ((8U == (0xfU 
                                                   & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                      >> 2U)))
                                            ? 0x700U
                                            : ((7U 
                                                == 
                                                (0xfU 
                                                 & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                    >> 2U)))
                                                ? 0x6f8U
                                                : (
                                                   (6U 
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
                                        : ((0U == (0xfU 
                                                   & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                      >> 2U)))
                                            ? 0U : vlTOPp->Patmos__DOT__CpuInfo__DOT___GEN_13))),32);
            tracep->chgCData(oldp+31,(vlTOPp->Patmos__DOT__Leds_io_ocp_M_Cmd),3);
            tracep->chgCData(oldp+32,(vlTOPp->Patmos__DOT__Leds__DOT__respReg),2);
            tracep->chgIData(oldp+33,(vlTOPp->Patmos__DOT__Leds__DOT__ledReg),32);
            tracep->chgSData(oldp+34,(vlTOPp->Patmos__DOT__Leds__DOT__REG),9);
            tracep->chgCData(oldp+35,(((0xf00aU == 
                                        (0xffffU & 
                                         (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                          >> 0x10U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                        : 0U)),3);
            tracep->chgCData(oldp+36,(vlTOPp->Patmos__DOT__Keys__DOT__respReg),2);
            tracep->chgIData(oldp+37,(vlTOPp->Patmos__DOT__Keys__DOT__keyReg),32);
            tracep->chgCData(oldp+38,(((0xf002U == 
                                        (0xffffU & 
                                         (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                          >> 0x10U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                        : 0U)),3);
            tracep->chgCData(oldp+39,(((1U == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd))
                                        ? 1U : ((2U 
                                                 == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd))
                                                 ? 1U
                                                 : 0U))),2);
            tracep->chgIData(oldp+40,(((2U == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd))
                                        ? ((2U == (3U 
                                                   & (vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr 
                                                      >> 2U)))
                                            ? vlTOPp->Patmos__DOT__Timer__DOT__usecHiReg
                                            : ((3U 
                                                == 
                                                (3U 
                                                 & (vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr 
                                                    >> 2U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__Timer__DOT__usecReg)
                                                : (
                                                   (0U 
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
                                        : 0U)),32);
            tracep->chgCData(oldp+41,(vlTOPp->Patmos__DOT__Deadline_io_ocp_M_Cmd),3);
            tracep->chgCData(oldp+42,(vlTOPp->Patmos__DOT__Deadline__DOT__respReg),2);
            tracep->chgIData(oldp+43,(vlTOPp->Patmos__DOT__Deadline__DOT__downCountReg),32);
            tracep->chgCData(oldp+44,(vlTOPp->Patmos__DOT__Spm_io_M_Cmd),3);
            tracep->chgSData(oldp+45,((0x7fcU & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)),11);
            tracep->chgCData(oldp+46,((((1U == (IData)(vlTOPp->Patmos__DOT__Spm__DOT__cmdReg)) 
                                        | (2U == (IData)(vlTOPp->Patmos__DOT__Spm__DOT__cmdReg)))
                                        ? 1U : 0U)),2);
            tracep->chgIData(oldp+47,(((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__mem
                                        [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__rdAddrReg] 
                                        << 0x18U) | 
                                       ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__mem
                                         [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__rdAddrReg] 
                                         << 0x10U) 
                                        | ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__mem
                                            [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__rdAddrReg] 
                                            << 8U) 
                                           | vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__mem
                                           [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__rdAddrReg])))),32);
            tracep->chgIData(oldp+48,(vlTOPp->Patmos__DOT__ramCtrl__DOT__addrReg),20);
            tracep->chgBit(oldp+49,(vlTOPp->Patmos__DOT__ramCtrl__DOT__doutEnaReg));
            tracep->chgSData(oldp+50,((0xffffU & vlTOPp->Patmos__DOT__ramCtrl__DOT__doutReg)),16);
            tracep->chgBit(oldp+51,(vlTOPp->Patmos__DOT__ramCtrl__DOT__noeReg));
            tracep->chgBit(oldp+52,(vlTOPp->Patmos__DOT__ramCtrl__DOT__nweReg));
            tracep->chgBit(oldp+53,(vlTOPp->Patmos__DOT__ramCtrl__DOT__nlbReg));
            tracep->chgBit(oldp+54,(vlTOPp->Patmos__DOT__ramCtrl__DOT__nubReg));
            tracep->chgCData(oldp+55,(vlTOPp->Patmos__DOT__REG),2);
            tracep->chgBit(oldp+56,(vlTOPp->Patmos__DOT__REG_1));
            tracep->chgBit(oldp+57,(vlTOPp->Patmos__DOT__REG_2));
            tracep->chgBit(oldp+58,(vlTOPp->Patmos__DOT__REG_3));
            tracep->chgBit(oldp+59,(vlTOPp->Patmos__DOT__REG_4));
            tracep->chgBit(oldp+60,(vlTOPp->Patmos__DOT__REG_5));
            tracep->chgBit(oldp+61,(vlTOPp->Patmos__DOT__REG_6));
            tracep->chgBit(oldp+62,(vlTOPp->Patmos__DOT__REG_7));
            tracep->chgBit(oldp+63,(vlTOPp->Patmos__DOT__REG_8));
            tracep->chgBit(oldp+64,(vlTOPp->Patmos__DOT__REG_9));
            tracep->chgBit(oldp+65,(vlTOPp->Patmos__DOT__REG_10));
            tracep->chgCData(oldp+66,(vlTOPp->Patmos__DOT__REG_11),2);
            tracep->chgBit(oldp+67,(vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_out));
            tracep->chgBit(oldp+68,(vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_in));
            tracep->chgBit(oldp+69,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd)) 
                                     & ((0U != (0x3fU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                   >> 2U))) 
                                        & ((1U != (0x3fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                      >> 2U))) 
                                           & ((3U != 
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
                                                          >> 1U))))))))));
            tracep->chgBit(oldp+70,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exicache_doCallRet));
            tracep->chgIData(oldp+71,((0x3fffffffU 
                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                                          >> 2U))),32);
            tracep->chgIData(oldp+72,((0x3fffffffU 
                                       & ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call) 
                                            | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall))
                                            ? 0U : 
                                           ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf)
                                             ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0)
                                                 ? 0U
                                                 : vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)
                                             : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret)
                                                 ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                                 : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg))) 
                                          >> 2U))),32);
            tracep->chgIData(oldp+73,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseReg),32);
            tracep->chgSData(oldp+74,((0x7ffU & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase))),11);
            tracep->chgSData(oldp+75,((0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc)),12);
            tracep->chgIData(oldp+76,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_reloc),32);
            tracep->chgCData(oldp+77,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_memSel),2);
            tracep->chgCData(oldp+78,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ocp_port_M_Cmd),3);
            tracep->chgIData(oldp+79,((IData)(((2U 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                                ? (
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                    <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                                     ? 
                                                    (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                      < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                      ? 
                                                     ((3U 
                                                       == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       ((IData)(1U) 
                                                                        + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___T_33))) 
                                                       << 2U)
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                    : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55))),32);
            tracep->chgCData(oldp+80,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__REG)
                                        ? 0U : (IData)(vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Resp))),2);
            tracep->chgBit(oldp+81,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_illMem));
            tracep->chgBit(oldp+82,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena));
            tracep->chgIData(oldp+83,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg),30);
            tracep->chgIData(oldp+84,((0x3fffffffU 
                                       & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__baseReg)),30);
            tracep->chgIData(oldp+85,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocReg),32);
            tracep->chgIData(oldp+86,((0x3fffffffU 
                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg 
                                          - (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg)))),30);
            tracep->chgBit(oldp+87,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exfe_doBranch));
            tracep->chgIData(oldp+88,((0x3fffffffU 
                                       & vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target)),30);
            tracep->chgBit(oldp+89,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet));
            tracep->chgBit(oldp+90,((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd))));
            tracep->chgIData(oldp+91,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr),32);
            tracep->chgBit(oldp+92,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_flush));
            tracep->chgIData(oldp+93,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                        ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc)
                                            ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excBaseReg
                                            : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base)
                                        : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base)),30);
            tracep->chgIData(oldp+94,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                        ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc)
                                            ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excAddrReg
                                            : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc)
                                        : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc)),30);
            tracep->chgCData(oldp+95,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                        ? 0U : (0xfU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x1bU)))),4);
            tracep->chgCData(oldp+96,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                        ? 8U : (0xfU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                   >> 0x1bU)))),4);
            tracep->chgCData(oldp+97,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                        ? 0U : (0xfU 
                                                & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm)
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 0x19U)))
                                                     ? 
                                                    (7U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 0x16U))
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))))),4);
            tracep->chgBit(oldp+98,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_aluOp_0_isMul));
            tracep->chgBit(oldp+99,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                     & ((8U == (0x1fU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x16U))) 
                                        & ((0U != (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U))) 
                                           & ((1U != 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 4U))) 
                                              & ((2U 
                                                  != 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U))) 
                                                 & ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 4U))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                           >> 4U)))))))))));
            tracep->chgBit(oldp+100,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((8U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x16U))) 
                                         & ((0U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                               >> 4U))) 
                                            & ((1U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 4U))) 
                                               & ((2U 
                                                   != 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 4U))) 
                                                  & ((3U 
                                                      != 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                          >> 4U))) 
                                                     & ((6U 
                                                         != 
                                                         (7U 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                             >> 4U))) 
                                                        & (4U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                               >> 4U))))))))))));
            tracep->chgBit(oldp+101,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((8U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x16U))) 
                                         & ((0U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                               >> 4U))) 
                                            & ((1U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 4U))) 
                                               & ((2U 
                                                   != 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 4U))) 
                                                  & ((3U 
                                                      != 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                          >> 4U))) 
                                                     & ((6U 
                                                         != 
                                                         (7U 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                             >> 4U))) 
                                                        & ((4U 
                                                            != 
                                                            (7U 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                                >> 4U))) 
                                                           & (5U 
                                                              == 
                                                              (7U 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                                  >> 4U)))))))))))));
            tracep->chgBit(oldp+102,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((9U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x16U))) 
                                         & (2U == (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U)))))));
            tracep->chgBit(oldp+103,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((9U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x16U))) 
                                         & ((2U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                               >> 4U))) 
                                            & (3U == 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 4U))))))));
            tracep->chgCData(oldp+104,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (0xfU 
                                                 & ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                         >> 0x19U)))
                                                     ? 
                                                    (7U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                        >> 0x16U))
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)))),4);
            tracep->chgBit(oldp+105,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((8U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 0x16U))) 
                                         & ((0U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                               >> 4U))) 
                                            & ((1U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                               & ((2U 
                                                   != 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                       >> 4U))) 
                                                  & ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                           >> 4U))) 
                                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual))))))))));
            tracep->chgBit(oldp+106,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((8U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 0x16U))) 
                                         & ((0U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                               >> 4U))) 
                                            & ((1U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                               & ((2U 
                                                   != 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                       >> 4U))) 
                                                  & ((3U 
                                                      != 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                          >> 4U))) 
                                                     & ((6U 
                                                         != 
                                                         (7U 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                             >> 4U))) 
                                                        & ((4U 
                                                            == 
                                                            (7U 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                                >> 4U))) 
                                                           & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)))))))))));
            tracep->chgBit(oldp+107,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((8U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 0x16U))) 
                                         & ((0U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                               >> 4U))) 
                                            & ((1U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                               & ((2U 
                                                   != 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                       >> 4U))) 
                                                  & ((3U 
                                                      != 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                          >> 4U))) 
                                                     & ((6U 
                                                         != 
                                                         (7U 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                             >> 4U))) 
                                                        & ((4U 
                                                            != 
                                                            (7U 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                                >> 4U))) 
                                                           & ((5U 
                                                               == 
                                                               (7U 
                                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                                   >> 4U))) 
                                                              & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual))))))))))));
            tracep->chgBit(oldp+108,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((9U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 0x16U))) 
                                         & ((2U == 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                               >> 4U))) 
                                            & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual))))));
            tracep->chgBit(oldp+109,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((9U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 0x16U))) 
                                         & ((2U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                               >> 4U))) 
                                            & ((3U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)))))));
            tracep->chgCData(oldp+110,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : ((2U 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)))),2);
            tracep->chgCData(oldp+111,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x11U)))),3);
            tracep->chgCData(oldp+112,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (0xfU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0xcU)))),4);
            tracep->chgCData(oldp+113,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (0xfU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 7U)))),4);
            tracep->chgCData(oldp+114,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : ((2U 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)))),2);
            tracep->chgCData(oldp+115,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 0x11U)))),3);
            tracep->chgCData(oldp+116,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (0xfU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 0xcU)))),4);
            tracep->chgCData(oldp+117,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (0xfU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 7U)))),4);
            tracep->chgBit(oldp+118,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_jmpOp_branch));
            tracep->chgIData(oldp+119,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (0x3fffffffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_pc 
                                                    + 
                                                    ((((0x200000U 
                                                        & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x16U) 
                                                     | (0x3fffffU 
                                                        & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)))))),30);
            tracep->chgIData(oldp+120,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_reloc)),32);
            tracep->chgBit(oldp+121,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & (0xaU == (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U))))));
            tracep->chgBit(oldp+122,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & (0xbU == (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U))))));
            tracep->chgBit(oldp+123,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((0xbU == (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))
                                          ? ((0U == 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 0x13U)))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_246)
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x13U))) 
                                                 | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_246)))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_246)))));
            tracep->chgBit(oldp+124,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((0xbU == (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))
                                          ? ((0U == 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 0x13U)))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247)
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x13U)))
                                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x13U))) 
                                                  | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247))))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247)))));
            tracep->chgBit(oldp+125,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((0xaU == (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U))) 
                                         & ((0U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                               >> 9U))) 
                                            & ((1U 
                                                != 
                                                (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 9U))) 
                                               & ((2U 
                                                   != 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 9U))) 
                                                  & ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                          >> 9U))) 
                                                     | (4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                            >> 9U)))))))))));
            tracep->chgCData(oldp+126,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (3U 
                                                 & ((0xbU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 0x16U)))
                                                     ? 
                                                    (((2U 
                                                       == 
                                                       (3U 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                           >> 0x11U))) 
                                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg))
                                                      ? 1U
                                                      : 
                                                     (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x11U))
                                                     : 
                                                    ((0xaU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                          >> 0x16U)))
                                                      ? 
                                                     (((2U 
                                                        == 
                                                        (3U 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                            >> 7U))) 
                                                       & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg))
                                                       ? 1U
                                                       : 
                                                      (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 7U))
                                                      : 0U))))),2);
            tracep->chgCData(oldp+127,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0xfU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x12U)))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 0x12U)))
                                                    ? 4U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0xfU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 0x12U)))
                                                     ? 4U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                          >> 0x12U)))
                                                      ? 5U
                                                      : 
                                                     ((0xcU 
                                                       == 
                                                       (0xfU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                           >> 0x12U)))
                                                       ? 6U
                                                       : 
                                                      ((0xdU 
                                                        == 
                                                        (0xfU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                            >> 0x12U)))
                                                        ? 6U
                                                        : 0U))))))
                                                  : 0U))),3);
            tracep->chgCData(oldp+128,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_0),5);
            tracep->chgCData(oldp+129,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_1),5);
            tracep->chgCData(oldp+130,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_2),5);
            tracep->chgCData(oldp+131,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_3),5);
            tracep->chgIData(oldp+132,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : ((0U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_1)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_0)
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0]))))),32);
            tracep->chgIData(oldp+133,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : ((0U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_1)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_0)
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1]))))),32);
            tracep->chgIData(oldp+134,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : ((0U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_1)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_0)
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2]))))),32);
            tracep->chgIData(oldp+135,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : ((0U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_1)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_0)
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3]))))),32);
            tracep->chgCData(oldp+136,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_0),5);
            tracep->chgCData(oldp+137,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_1),5);
            tracep->chgIData(oldp+138,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (((
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isSTC) 
                                                    | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isStack)) 
                                                   | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isMem)) 
                                                  | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm))
                                                  ? 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isSTC)
                                                   ? 
                                                  (0xffffcU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      << 2U))
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isStack)
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__addrImm)
                                                    : 
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isMem)
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__addrImm)
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)))
                                                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_67)))),32);
            tracep->chgIData(oldp+139,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_139))),32);
            tracep->chgBit(oldp+140,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_immOp_0));
            tracep->chgBit(oldp+141,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((8U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 0x16U)))
                                          ? ((0U == 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                >> 4U)))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                      >> 4U)))
                                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)
                                                  : 
                                                 ((2U 
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
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)
                                                     : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_92))))))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)))));
            tracep->chgBit(oldp+142,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_0)) 
                                         & ((0xaU == 
                                             (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x16U))) 
                                            | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm) 
                                               | ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x16U)))
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_62)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 4U))) 
                                                    | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_62)))
                                                   : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_62))))))));
            tracep->chgBit(oldp+143,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_1)) 
                                         & ((9U == 
                                             (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 0x16U)))
                                             ? ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                     >> 4U)))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_134)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                      >> 4U)))
                                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)
                                                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_134)))
                                             : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_134))))));
            tracep->chgIData(oldp+144,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__srcReg]
                                         : (0xfffffcU 
                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                               << 2U)))),32);
            tracep->chgBit(oldp+145,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_call));
            tracep->chgBit(oldp+146,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_ret));
            tracep->chgBit(oldp+147,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_brcf));
            tracep->chgBit(oldp+148,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & (0x16U == (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U))))));
            tracep->chgBit(oldp+149,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140));
            tracep->chgBit(oldp+150,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_xret));
            tracep->chgCData(oldp+151,((0x1fU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__srcReg)
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x16U)))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a
                                                   : 0U)))),5);
            tracep->chgBit(oldp+152,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                      & (((0x19U == 
                                           (0x1fU & 
                                            (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                             >> 0x16U))) 
                                          | (0x18U 
                                             == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x16U))))
                                          ? (0x18U 
                                             == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x16U)))
                                          : (((0x15U 
                                               == (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U))) 
                                              | (0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U))))
                                              ? (0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U)))
                                              : (((0x13U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x16U))) 
                                                  | (0x12U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 0x16U))))
                                                  ? 
                                                 (0x12U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))
                                                  : 
                                                 (((0x11U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                        >> 0x16U))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                          >> 0x16U)))) 
                                                  & (0x10U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 0x16U))))))))));
            tracep->chgBit(oldp+153,((1U & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                            & (~ ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)
                                                   ? 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decoded_0) 
                                                   & ((9U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                           >> 0x16U)))
                                                       ? 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                            >> 4U))) 
                                                       | ((3U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                               >> 4U))) 
                                                          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_135)))
                                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_135)))
                                                   : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decoded_0)))))));
            tracep->chgCData(oldp+154,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_addr),5);
            tracep->chgIData(oldp+155,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memwb_rd_0_data),32);
            tracep->chgBit(oldp+156,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_valid));
            tracep->chgCData(oldp+157,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_addr),5);
            tracep->chgIData(oldp+158,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_data),32);
            tracep->chgBit(oldp+159,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_valid));
            tracep->chgBit(oldp+160,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc));
            tracep->chgIData(oldp+161,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excBaseReg),30);
            tracep->chgIData(oldp+162,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excAddrReg),30);
            tracep->chgBit(oldp+163,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intr) 
                                      & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)));
            tracep->chgIData(oldp+164,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup
                                       [vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__srcReg]),32);
            tracep->chgCData(oldp+165,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__srcReg),5);
            tracep->chgBit(oldp+166,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg));
            tracep->chgBit(oldp+167,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush));
            tracep->chgBit(oldp+168,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_brflush));
            tracep->chgCData(oldp+169,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_0),5);
            tracep->chgIData(oldp+170,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_0_data),32);
            tracep->chgBit(oldp+171,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_0_valid));
            tracep->chgCData(oldp+172,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_1),5);
            tracep->chgIData(oldp+173,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_data),32);
            tracep->chgBit(oldp+174,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_valid));
            tracep->chgBit(oldp+175,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_load));
            tracep->chgBit(oldp+176,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_store));
            tracep->chgBit(oldp+177,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_hword));
            tracep->chgBit(oldp+178,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte));
            tracep->chgBit(oldp+179,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_zext));
            tracep->chgCData(oldp+180,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_typ),2);
            tracep->chgIData(oldp+181,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data),32);
            tracep->chgBit(oldp+182,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call) 
                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
            tracep->chgBit(oldp+183,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_ret) 
                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
            tracep->chgBit(oldp+184,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf) 
                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
            tracep->chgBit(oldp+185,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_trap) 
                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
            tracep->chgBit(oldp+186,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall) 
                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
            tracep->chgBit(oldp+187,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret) 
                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
            tracep->chgCData(oldp+188,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xsrc),5);
            tracep->chgBit(oldp+189,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_illOp));
            tracep->chgBit(oldp+190,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_nonDelayed));
            tracep->chgIData(oldp+191,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_base),30);
            tracep->chgIData(oldp+192,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_relPc),30);
            tracep->chgCData(oldp+193,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op),3);
            tracep->chgIData(oldp+194,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opData),32);
            tracep->chgIData(oldp+195,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opOff),32);
            tracep->chgIData(oldp+196,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg),32);
            tracep->chgIData(oldp+197,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg),32);
            tracep->chgBit(oldp+198,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable));
            tracep->chgBit(oldp+199,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in));
            tracep->chgCData(oldp+200,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd),3);
            tracep->chgCData(oldp+201,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_ByteEn),4);
            tracep->chgCData(oldp+202,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace),2);
            tracep->chgCData(oldp+203,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_master_S_Resp),2);
            tracep->chgIData(oldp+204,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selSCReg)
                                         ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                                             << 0x18U) 
                                            | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1)
                                         : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selDCReg)
                                             ? ((3U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
                                                 ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Data
                                                 : 
                                                (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG) 
                                                    & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1) 
                                                       == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2)
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg]) 
                                                  << 0x18U) 
                                                 | (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG) 
                                                       & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_1) 
                                                          == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg)))
                                                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_2)
                                                       : 
                                                      vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__mem
                                                      [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg]) 
                                                     << 0x10U) 
                                                    | (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG) 
                                                          & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_1) 
                                                             == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg)))
                                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_2)
                                                          : 
                                                         vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem
                                                         [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg]) 
                                                        << 8U) 
                                                       | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG) 
                                                           & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1) 
                                                              == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg)))
                                                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2)
                                                           : 
                                                          vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem
                                                          [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg])))))
                                             : ((2U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                                                 ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Data
                                                 : 0U)))),32);
            tracep->chgBit(oldp+205,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_illMem));
            tracep->chgBit(oldp+206,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall));
            tracep->chgBit(oldp+207,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xret));
            tracep->chgCData(oldp+208,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src),5);
            tracep->chgBit(oldp+209,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_exc));
            tracep->chgIData(oldp+210,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_base),30);
            tracep->chgIData(oldp+211,((0x3fffffffU 
                                        & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_trap)
                                            ? ((IData)(1U) 
                                               + vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_relPc)
                                            : vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_relPc))),30);
            tracep->chgBit(oldp+212,(vlTOPp->Patmos__DOT__cores_0__DOT__exc_io_ena));
            tracep->chgBit(oldp+213,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd)) 
                                      & ((0U != (0x3fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                    >> 2U))) 
                                         & ((1U != 
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
                                                            >> 1U) 
                                                           & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data))))))))));
            tracep->chgCData(oldp+214,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_slave_M_Cmd),3);
            tracep->chgIData(oldp+215,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                         ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg))
                                             ? (0xfffffff0U 
                                                & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr)
                                             : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)),32);
            tracep->chgIData(oldp+216,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Data
                                         : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                                             ? 0U : 
                                            (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                                              << 0x18U) 
                                             | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1)))),32);
            tracep->chgBit(oldp+217,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state)) 
                                      | ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)) 
                                         & ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                            & ((4U 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                               | (3U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))))))));
            tracep->chgCData(oldp+218,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                         ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg) 
                                             == (3U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr 
                                                    >> 2U)))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_ByteEn)
                                             : 0U) : 
                                        ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                                          ? 0U : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((IData)(0x800U) 
                                                                      + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg))) 
                                                     <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                       < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg))))
                                                    : 
                                                   (((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg)) 
                                                     <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                       < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)))))
                                                   ? 0xfU
                                                   : 0U)))),4);
            tracep->chgCData(oldp+219,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_slave_S_Resp),2);
            tracep->chgBit(oldp+220,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_scIO_ena_in));
            tracep->chgBit(oldp+221,((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))));
            tracep->chgIData(oldp+222,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT___T_3)
                                         ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                             ? ((0U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg))
                                                 ? 
                                                (0xfffffff0U 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr)
                                                 : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)
                                             : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)
                                         : (IData)(
                                                   ((2U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                                     ? 
                                                    (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                      <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                                       ? 
                                                      (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                        < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                        ? 
                                                       ((3U 
                                                         == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
                                                         ? 
                                                        ((QData)((IData)(
                                                                         ((IData)(1U) 
                                                                          + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___T_33))) 
                                                         << 2U)
                                                         : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55)))),32);
            tracep->chgBit(oldp+223,(vlTOPp->Patmos__DOT__cores_0__DOT__REG));
            tracep->chgBit(oldp+224,(vlTOPp->Patmos__DOT__cores_0__DOT__enableReg));
            tracep->chgBit(oldp+225,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                       ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                           <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                           ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp)) 
                                              & (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                  >= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg)) 
                                                 & (3U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))))
                                           : (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg)))
                                       : (1U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)))));
            tracep->chgBit(oldp+226,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wEna));
            tracep->chgIData(oldp+227,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData),32);
            tracep->chgIData(oldp+228,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr),32);
            tracep->chgBit(oldp+229,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag));
            tracep->chgBit(oldp+230,((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))));
            tracep->chgBit(oldp+231,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitReg));
            tracep->chgBit(oldp+232,(((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                                      | ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                                         | ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                                            | ((3U 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                                               & (3U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))))))));
            tracep->chgBit(oldp+233,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate));
            tracep->chgBit(oldp+234,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_memIn_wEven));
            tracep->chgBit(oldp+235,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_memIn_wOdd));
            tracep->chgSData(oldp+236,((0x3ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_101 
                                                  >> 1U))),10);
            tracep->chgCData(oldp+237,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg),3);
            tracep->chgCData(oldp+238,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpCmdReg),3);
            tracep->chgIData(oldp+239,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpAddrReg),32);
            tracep->chgSData(oldp+240,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg),11);
            tracep->chgSData(oldp+241,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg),11);
            tracep->chgCData(oldp+242,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg),2);
            tracep->chgIData(oldp+243,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg),32);
            tracep->chgIData(oldp+244,((vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                                        - (IData)(1U))),32);
            tracep->chgIData(oldp+245,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrEvenReg),32);
            tracep->chgIData(oldp+246,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrOddReg),32);
            tracep->chgCData(oldp+247,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp),2);
            tracep->chgIData(oldp+248,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Data),32);
            tracep->chgIData(oldp+249,((0x3fffffffU 
                                        & ((vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                                            - (IData)(1U)) 
                                           >> 2U))),30);
            tracep->chgIData(oldp+250,(((IData)(1U) 
                                        + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___T_33)),32);
            tracep->chgCData(oldp+251,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg),4);
            tracep->chgCData(oldp+252,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg),4);
            tracep->chgSData(oldp+253,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg),11);
            tracep->chgSData(oldp+254,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg),13);
            tracep->chgSData(oldp+255,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__posReg),11);
            tracep->chgSData(oldp+256,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__wrPosReg),11);
            tracep->chgIData(oldp+257,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callAddrReg),32);
            tracep->chgBit(oldp+258,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmReg));
            tracep->chgBit(oldp+259,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheReg));
            tracep->chgIData(oldp+260,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+261,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_178))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_178)))));
            tracep->chgBit(oldp+262,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_0));
            tracep->chgSData(oldp+263,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+264,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_0)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((0U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+265,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+266,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((1U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_179))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_179)))));
            tracep->chgBit(oldp+267,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_1));
            tracep->chgSData(oldp+268,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+269,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_1)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((1U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+270,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+271,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((2U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_180))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_180)))));
            tracep->chgBit(oldp+272,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_2));
            tracep->chgSData(oldp+273,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+274,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_2)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((2U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+275,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+276,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((3U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_181))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_181)))));
            tracep->chgBit(oldp+277,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_3));
            tracep->chgSData(oldp+278,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+279,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_3)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((3U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+280,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+281,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((4U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_182))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_182)))));
            tracep->chgBit(oldp+282,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_4));
            tracep->chgSData(oldp+283,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+284,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_4)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((4U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+285,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+286,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((5U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_183))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_183)))));
            tracep->chgBit(oldp+287,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_5));
            tracep->chgSData(oldp+288,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+289,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_5)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((5U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+290,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+291,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((6U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_184))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_184)))));
            tracep->chgBit(oldp+292,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_6));
            tracep->chgSData(oldp+293,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+294,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_6)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((6U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+295,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+296,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((7U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_185))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_185)))));
            tracep->chgBit(oldp+297,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_7));
            tracep->chgSData(oldp+298,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+299,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_7)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((7U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+300,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+301,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((8U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_186))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_186)))));
            tracep->chgBit(oldp+302,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_8));
            tracep->chgSData(oldp+303,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+304,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_8)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((8U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+305,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+306,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((9U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_187))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_187)))));
            tracep->chgBit(oldp+307,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_9));
            tracep->chgSData(oldp+308,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+309,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_9)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((9U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+310,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+311,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((0xaU 
                                              != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_188))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_188)))));
            tracep->chgBit(oldp+312,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_10));
            tracep->chgSData(oldp+313,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+314,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_10)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((0xaU 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+315,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+316,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((0xbU 
                                              != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_189))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_189)))));
            tracep->chgBit(oldp+317,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_11));
            tracep->chgSData(oldp+318,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+319,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_11)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((0xbU 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+320,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+321,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((0xcU 
                                              != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_190))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_190)))));
            tracep->chgBit(oldp+322,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_12));
            tracep->chgSData(oldp+323,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+324,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_12)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((0xcU 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+325,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+326,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((0xdU 
                                              != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_191))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_191)))));
            tracep->chgBit(oldp+327,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_13));
            tracep->chgSData(oldp+328,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+329,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_13)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((0xdU 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+330,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+331,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((0xeU 
                                              != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_192))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_192)))));
            tracep->chgBit(oldp+332,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_14));
            tracep->chgSData(oldp+333,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+334,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_14)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((0xeU 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgIData(oldp+335,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+336,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                      & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                          ? ((0xfU 
                                              != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_193))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_193)))));
            tracep->chgBit(oldp+337,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_15));
            tracep->chgSData(oldp+338,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                         ? ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                             ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                             : 0U) : 0U)),11);
            tracep->chgSData(oldp+339,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_15)
                                         ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                             ? ((0xfU 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                                 ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                                 : 0U)
                                             : 0U) : 0U)),11);
            tracep->chgBit(oldp+340,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hit));
            tracep->chgSData(oldp+341,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase),14);
            tracep->chgIData(oldp+342,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc),32);
            tracep->chgSData(oldp+343,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_0),12);
            tracep->chgSData(oldp+344,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_1),12);
            tracep->chgSData(oldp+345,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_2),12);
            tracep->chgSData(oldp+346,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_3),12);
            tracep->chgSData(oldp+347,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_4),12);
            tracep->chgSData(oldp+348,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_5),12);
            tracep->chgSData(oldp+349,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_6),12);
            tracep->chgSData(oldp+350,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_7),12);
            tracep->chgSData(oldp+351,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_8),12);
            tracep->chgSData(oldp+352,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_9),12);
            tracep->chgSData(oldp+353,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_10),12);
            tracep->chgSData(oldp+354,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_11),12);
            tracep->chgSData(oldp+355,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_12),12);
            tracep->chgSData(oldp+356,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_13),12);
            tracep->chgSData(oldp+357,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_14),12);
            tracep->chgSData(oldp+358,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_15),12);
            tracep->chgBit(oldp+359,((1U & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr)));
            tracep->chgIData(oldp+360,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__instrEvenReg),32);
            tracep->chgIData(oldp+361,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__instrOddReg),32);
            tracep->chgSData(oldp+362,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg),10);
            tracep->chgBit(oldp+363,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG));
            tracep->chgSData(oldp+364,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_1),10);
            tracep->chgIData(oldp+365,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_2),32);
            tracep->chgSData(oldp+366,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg),10);
            tracep->chgBit(oldp+367,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG));
            tracep->chgSData(oldp+368,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_1),10);
            tracep->chgIData(oldp+369,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_2),32);
            tracep->chgIData(oldp+370,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__mem_MPORT_1_data),32);
            tracep->chgCData(oldp+371,((0x7fU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 3U))),7);
            tracep->chgBit(oldp+372,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___T_2) 
                                      & (~ (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                            >> 2U)))));
            tracep->chgIData(oldp+373,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__mem_MPORT_1_data),32);
            tracep->chgBit(oldp+374,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___T_2) 
                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                         >> 2U))));
            tracep->chgIData(oldp+375,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEvenReg),30);
            tracep->chgIData(oldp+376,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOddReg),30);
            tracep->chgBit(oldp+377,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpm));
            tracep->chgIData(oldp+378,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__instr_a_ispm),32);
            tracep->chgBit(oldp+379,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCache));
            tracep->chgIData(oldp+380,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_even),32);
            tracep->chgIData(oldp+381,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_odd),32);
            tracep->chgIData(oldp+382,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_odd
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_even)),32);
            tracep->chgIData(oldp+383,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__mem_MPORT_1_data
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__mem_MPORT_1_data)),32);
            tracep->chgIData(oldp+384,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__baseReg),32);
            tracep->chgSData(oldp+385,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg),11);
            tracep->chgIData(oldp+386,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_even
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_odd)),32);
            tracep->chgIData(oldp+387,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc),30);
            tracep->chgCData(oldp+388,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__rdAddrReg),7);
            tracep->chgCData(oldp+389,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__rdAddrReg),7);
            tracep->chgIData(oldp+390,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0))
                                         ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_1)
                                                  ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_0)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                   : 
                                                  vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0])))),32);
            tracep->chgIData(oldp+391,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1))
                                         ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_1)
                                                  ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_0)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                   : 
                                                  vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1])))),32);
            tracep->chgIData(oldp+392,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2))
                                         ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_1)
                                                  ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_0)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                   : 
                                                  vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2])))),32);
            tracep->chgIData(oldp+393,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3))
                                         ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_1)
                                                  ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_0)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                   : 
                                                  vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3])))),32);
            tracep->chgIData(oldp+394,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a),32);
            tracep->chgIData(oldp+395,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b),32);
            tracep->chgIData(oldp+396,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_pc),30);
            tracep->chgIData(oldp+397,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base),30);
            tracep->chgIData(oldp+398,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_reloc),32);
            tracep->chgIData(oldp+399,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc),30);
            tracep->chgBit(oldp+400,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual));
            tracep->chgSData(oldp+401,((0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)),12);
            tracep->chgCData(oldp+402,((7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+403,((1U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                            >> 3U))));
            tracep->chgBit(oldp+404,((1U & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)));
            tracep->chgSData(oldp+405,((0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)),12);
            tracep->chgCData(oldp+406,((7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+407,(((9U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 0x16U)))
                                       ? ((2U == (7U 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                     >> 4U))) 
                                          | ((3U == 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                >> 4U))) 
                                             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_135)))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_135))));
            tracep->chgBit(oldp+408,((1U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                            >> 3U))));
            tracep->chgBit(oldp+409,((1U & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)));
            tracep->chgCData(oldp+410,((7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                              >> 9U))),3);
            tracep->chgCData(oldp+411,((3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                              >> 7U))),2);
            tracep->chgCData(oldp+412,((7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                              >> 0x13U))),3);
            tracep->chgCData(oldp+413,((3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                              >> 0x11U))),2);
            tracep->chgCData(oldp+414,((0xfU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 0x12U))),4);
            tracep->chgIData(oldp+415,((0x3ffffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)),18);
            tracep->chgIData(oldp+416,((0xffffcU & 
                                        (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                         << 2U))),21);
            tracep->chgBit(oldp+417,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm));
            tracep->chgBit(oldp+418,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isSTC));
            tracep->chgBit(oldp+419,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isMem));
            tracep->chgCData(oldp+420,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__shamt),2);
            tracep->chgBit(oldp+421,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isStack));
            tracep->chgBit(oldp+422,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decoded_0));
            tracep->chgCData(oldp+423,((0x7fU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)),7);
            tracep->chgSData(oldp+424,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__addrImm),10);
            tracep->chgIData(oldp+425,((0x3fffffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)),22);
            tracep->chgCData(oldp+426,(((0x200000U 
                                         & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)
                                         ? 0xffU : 0U)),8);
            tracep->chgCData(oldp+427,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__inDelaySlot),2);
            tracep->chgIData(oldp+428,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[0]),32);
            tracep->chgIData(oldp+429,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[1]),32);
            tracep->chgIData(oldp+430,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[2]),32);
            tracep->chgIData(oldp+431,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[3]),32);
            tracep->chgIData(oldp+432,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[4]),32);
            tracep->chgIData(oldp+433,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[5]),32);
            tracep->chgIData(oldp+434,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[6]),32);
            tracep->chgIData(oldp+435,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[7]),32);
            tracep->chgIData(oldp+436,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[8]),32);
            tracep->chgIData(oldp+437,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[9]),32);
            tracep->chgIData(oldp+438,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[10]),32);
            tracep->chgIData(oldp+439,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[11]),32);
            tracep->chgIData(oldp+440,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[12]),32);
            tracep->chgIData(oldp+441,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[13]),32);
            tracep->chgIData(oldp+442,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[14]),32);
            tracep->chgIData(oldp+443,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[15]),32);
            tracep->chgIData(oldp+444,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[16]),32);
            tracep->chgIData(oldp+445,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[17]),32);
            tracep->chgIData(oldp+446,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[18]),32);
            tracep->chgIData(oldp+447,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[19]),32);
            tracep->chgIData(oldp+448,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[20]),32);
            tracep->chgIData(oldp+449,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[21]),32);
            tracep->chgIData(oldp+450,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[22]),32);
            tracep->chgIData(oldp+451,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[23]),32);
            tracep->chgIData(oldp+452,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[24]),32);
            tracep->chgIData(oldp+453,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[25]),32);
            tracep->chgIData(oldp+454,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[26]),32);
            tracep->chgIData(oldp+455,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[27]),32);
            tracep->chgIData(oldp+456,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[28]),32);
            tracep->chgIData(oldp+457,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[29]),32);
            tracep->chgIData(oldp+458,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[30]),32);
            tracep->chgIData(oldp+459,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[31]),32);
            tracep->chgIData(oldp+460,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                       [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0]),32);
            tracep->chgCData(oldp+461,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0),5);
            tracep->chgIData(oldp+462,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                       [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1]),32);
            tracep->chgCData(oldp+463,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1),5);
            tracep->chgIData(oldp+464,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                       [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2]),32);
            tracep->chgCData(oldp+465,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2),5);
            tracep->chgIData(oldp+466,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                       [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3]),32);
            tracep->chgCData(oldp+467,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3),5);
            tracep->chgIData(oldp+468,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data),32);
            tracep->chgIData(oldp+469,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data),32);
            tracep->chgBit(oldp+470,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_0));
            tracep->chgBit(oldp+471,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_1));
            tracep->chgBit(oldp+472,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_0));
            tracep->chgBit(oldp+473,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_1));
            tracep->chgBit(oldp+474,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_0));
            tracep->chgBit(oldp+475,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_1));
            tracep->chgBit(oldp+476,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_0));
            tracep->chgBit(oldp+477,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_1));
            tracep->chgCData(oldp+478,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0),4);
            tracep->chgCData(oldp+479,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1),4);
            tracep->chgCData(oldp+480,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func),4);
            tracep->chgBit(oldp+481,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMul));
            tracep->chgBit(oldp+482,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isCmp));
            tracep->chgBit(oldp+483,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isPred));
            tracep->chgBit(oldp+484,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isBCpy));
            tracep->chgBit(oldp+485,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMTS));
            tracep->chgBit(oldp+486,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMFS));
            tracep->chgCData(oldp+487,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func),4);
            tracep->chgBit(oldp+488,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isCmp));
            tracep->chgBit(oldp+489,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isPred));
            tracep->chgBit(oldp+490,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isBCpy));
            tracep->chgBit(oldp+491,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMTS));
            tracep->chgBit(oldp+492,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMFS));
            tracep->chgCData(oldp+493,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_func),2);
            tracep->chgCData(oldp+494,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest),3);
            tracep->chgCData(oldp+495,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr),4);
            tracep->chgCData(oldp+496,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr),4);
            tracep->chgCData(oldp+497,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_func),2);
            tracep->chgCData(oldp+498,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest),3);
            tracep->chgCData(oldp+499,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr),4);
            tracep->chgCData(oldp+500,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr),4);
            tracep->chgBit(oldp+501,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_branch));
            tracep->chgIData(oldp+502,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_target),30);
            tracep->chgIData(oldp+503,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_reloc),32);
            tracep->chgBit(oldp+504,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_load));
            tracep->chgBit(oldp+505,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_store));
            tracep->chgCData(oldp+506,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_stackOp),3);
            tracep->chgIData(oldp+507,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_0),32);
            tracep->chgIData(oldp+508,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_1),32);
            tracep->chgIData(oldp+509,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_2),32);
            tracep->chgIData(oldp+510,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_3),32);
            tracep->chgIData(oldp+511,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immVal_0),32);
            tracep->chgIData(oldp+512,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immVal_1),32);
            tracep->chgBit(oldp+513,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0));
            tracep->chgBit(oldp+514,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_wrRd_0));
            tracep->chgBit(oldp+515,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_wrRd_1));
            tracep->chgIData(oldp+516,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_callAddr),32);
            tracep->chgBit(oldp+517,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call));
            tracep->chgBit(oldp+518,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_ret));
            tracep->chgBit(oldp+519,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf));
            tracep->chgBit(oldp+520,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_trap));
            tracep->chgBit(oldp+521,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall));
            tracep->chgBit(oldp+522,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret));
            tracep->chgCData(oldp+523,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_0),3);
            tracep->chgCData(oldp+524,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_1),3);
            tracep->chgCData(oldp+525,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_2),3);
            tracep->chgCData(oldp+526,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_3),3);
            tracep->chgBit(oldp+527,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_0));
            tracep->chgBit(oldp+528,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_1));
            tracep->chgBit(oldp+529,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_2));
            tracep->chgBit(oldp+530,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_3));
            tracep->chgIData(oldp+531,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__memResultDataReg_0),32);
            tracep->chgIData(oldp+532,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__memResultDataReg_1),32);
            tracep->chgIData(oldp+533,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exResultDataReg_0),32);
            tracep->chgIData(oldp+534,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exResultDataReg_1),32);
            tracep->chgIData(oldp+535,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0),32);
            tracep->chgIData(oldp+536,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2),32);
            tracep->chgIData(oldp+537,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3),32);
            tracep->chgBit(oldp+538,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1));
            tracep->chgBit(oldp+539,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2));
            tracep->chgBit(oldp+540,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3));
            tracep->chgBit(oldp+541,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4));
            tracep->chgBit(oldp+542,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5));
            tracep->chgBit(oldp+543,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6));
            tracep->chgBit(oldp+544,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7));
            tracep->chgBit(oldp+545,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
            tracep->chgBit(oldp+546,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_1));
            tracep->chgIData(oldp+547,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg),32);
            tracep->chgIData(oldp+548,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg),32);
            tracep->chgBit(oldp+549,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__saveRetOff));
            tracep->chgBit(oldp+550,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__saveND));
            tracep->chgIData(oldp+551,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg),32);
            tracep->chgIData(oldp+552,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg),32);
            tracep->chgIData(oldp+553,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLoReg),32);
            tracep->chgIData(oldp+554,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHiReg),32);
            tracep->chgIData(oldp+555,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLLReg),32);
            tracep->chgQData(oldp+556,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLHReg),33);
            tracep->chgQData(oldp+558,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHLReg),33);
            tracep->chgIData(oldp+560,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHHReg),32);
            tracep->chgBit(oldp+561,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulPipeReg));
            tracep->chgBit(oldp+562,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)) 
                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                         >> 0x1fU))));
            tracep->chgSData(oldp+563,((0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                                   >> 0x10U))),16);
            tracep->chgBit(oldp+564,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)) 
                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                                         >> 0x1fU))));
            tracep->chgSData(oldp+565,((0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                                                   >> 0x10U))),16);
            tracep->chgIData(oldp+566,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0)
                                         ? 0U : vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)),32);
            tracep->chgIData(oldp+567,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call) 
                                         | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall))
                                         ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf)
                                                  ? 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0)
                                                   ? 0U
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)
                                                  : 
                                                 ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg)))),32);
            tracep->chgIData(oldp+568,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0)
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_callAddr
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0)),32);
            tracep->chgIData(oldp+569,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase),32);
            tracep->chgIData(oldp+570,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target),32);
            tracep->chgIData(oldp+571,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_data),32);
            tracep->chgBit(oldp+572,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_load));
            tracep->chgBit(oldp+573,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_hword));
            tracep->chgBit(oldp+574,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_byte));
            tracep->chgBit(oldp+575,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_zext));
            tracep->chgCData(oldp+576,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_typ),2);
            tracep->chgIData(oldp+577,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_addr),32);
            tracep->chgBit(oldp+578,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_call));
            tracep->chgBit(oldp+579,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_ret));
            tracep->chgBit(oldp+580,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_brcf));
            tracep->chgBit(oldp+581,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_trap));
            tracep->chgCData(oldp+582,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xsrc),5);
            tracep->chgBit(oldp+583,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_illOp));
            tracep->chgBit(oldp+584,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_nonDelayed));
            tracep->chgIData(oldp+585,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_relPc),30);
            tracep->chgBit(oldp+586,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_3) 
                                      | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_illMem))));
            tracep->chgBit(oldp+587,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__illMemReg));
            tracep->chgBit(oldp+588,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__mayStallReg));
            tracep->chgCData(oldp+589,((0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data
                                                   : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_58))
                                                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_58)))),8);
            tracep->chgCData(oldp+590,((0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_57)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data
                                                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_57)))
                                                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_57)))),8);
            tracep->chgCData(oldp+591,((0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                     ? vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data
                                                     : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61))))
                                                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61)))),8);
            tracep->chgCData(oldp+592,((0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_60)
                                                   : 
                                                  ((1U 
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
                                                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_60)))),8);
            tracep->chgCData(oldp+593,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__cmd),3);
            tracep->chgIData(oldp+594,((0x3fffffffU 
                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 2U))),30);
            tracep->chgSData(oldp+595,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__lo),16);
            tracep->chgSData(oldp+596,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hi_1),16);
            tracep->chgCData(oldp+597,((0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63)),8);
            tracep->chgCData(oldp+598,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+599,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+600,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                                 >> 0x18U))),8);
            tracep->chgSData(oldp+601,((0xffffU & vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63)),16);
            tracep->chgSData(oldp+602,((0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                                   >> 0x10U))),16);
            tracep->chgCData(oldp+603,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__bval),8);
            tracep->chgSData(oldp+604,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hval),16);
            tracep->chgIData(oldp+605,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_hword)
                                         ? ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_zext)
                                               ? 0U
                                               : ((0x8000U 
                                                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hval))
                                                   ? 0xffffU
                                                   : 0U)) 
                                             << 0x10U) 
                                            | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hval))
                                         : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_byte)
                                             ? ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_zext)
                                                   ? 0U
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__bval))
                                                    ? 0xffffffU
                                                    : 0U)) 
                                                 << 8U) 
                                                | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__bval))
                                             : vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63))),32);
            tracep->chgIData(oldp+606,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[0]),32);
            tracep->chgIData(oldp+607,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[1]),32);
            tracep->chgIData(oldp+608,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[2]),32);
            tracep->chgIData(oldp+609,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[3]),32);
            tracep->chgIData(oldp+610,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[4]),32);
            tracep->chgIData(oldp+611,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[5]),32);
            tracep->chgIData(oldp+612,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[6]),32);
            tracep->chgIData(oldp+613,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[7]),32);
            tracep->chgIData(oldp+614,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[8]),32);
            tracep->chgIData(oldp+615,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[9]),32);
            tracep->chgIData(oldp+616,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[10]),32);
            tracep->chgIData(oldp+617,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[11]),32);
            tracep->chgIData(oldp+618,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[12]),32);
            tracep->chgIData(oldp+619,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[13]),32);
            tracep->chgIData(oldp+620,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[14]),32);
            tracep->chgIData(oldp+621,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[15]),32);
            tracep->chgIData(oldp+622,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[16]),32);
            tracep->chgIData(oldp+623,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[17]),32);
            tracep->chgIData(oldp+624,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[18]),32);
            tracep->chgIData(oldp+625,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[19]),32);
            tracep->chgIData(oldp+626,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[20]),32);
            tracep->chgIData(oldp+627,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[21]),32);
            tracep->chgIData(oldp+628,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[22]),32);
            tracep->chgIData(oldp+629,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[23]),32);
            tracep->chgIData(oldp+630,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[24]),32);
            tracep->chgIData(oldp+631,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[25]),32);
            tracep->chgIData(oldp+632,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[26]),32);
            tracep->chgIData(oldp+633,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[27]),32);
            tracep->chgIData(oldp+634,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[28]),32);
            tracep->chgIData(oldp+635,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[29]),32);
            tracep->chgIData(oldp+636,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[30]),32);
            tracep->chgIData(oldp+637,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[31]),32);
            tracep->chgIData(oldp+638,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec
                                       [(0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                  >> 2U))]),32);
            tracep->chgCData(oldp+639,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                 >> 2U))),5);
            tracep->chgIData(oldp+640,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data),32);
            tracep->chgBit(oldp+641,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd)) 
                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_227))));
            tracep->chgIData(oldp+642,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[0]),32);
            tracep->chgIData(oldp+643,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[1]),32);
            tracep->chgIData(oldp+644,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[2]),32);
            tracep->chgIData(oldp+645,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[3]),32);
            tracep->chgIData(oldp+646,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[4]),32);
            tracep->chgIData(oldp+647,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[5]),32);
            tracep->chgIData(oldp+648,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[6]),32);
            tracep->chgIData(oldp+649,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[7]),32);
            tracep->chgIData(oldp+650,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[8]),32);
            tracep->chgIData(oldp+651,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[9]),32);
            tracep->chgIData(oldp+652,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[10]),32);
            tracep->chgIData(oldp+653,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[11]),32);
            tracep->chgIData(oldp+654,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[12]),32);
            tracep->chgIData(oldp+655,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[13]),32);
            tracep->chgIData(oldp+656,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[14]),32);
            tracep->chgIData(oldp+657,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[15]),32);
            tracep->chgIData(oldp+658,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[16]),32);
            tracep->chgIData(oldp+659,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[17]),32);
            tracep->chgIData(oldp+660,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[18]),32);
            tracep->chgIData(oldp+661,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[19]),32);
            tracep->chgIData(oldp+662,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[20]),32);
            tracep->chgIData(oldp+663,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[21]),32);
            tracep->chgIData(oldp+664,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[22]),32);
            tracep->chgIData(oldp+665,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[23]),32);
            tracep->chgIData(oldp+666,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[24]),32);
            tracep->chgIData(oldp+667,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[25]),32);
            tracep->chgIData(oldp+668,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[26]),32);
            tracep->chgIData(oldp+669,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[27]),32);
            tracep->chgIData(oldp+670,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[28]),32);
            tracep->chgIData(oldp+671,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[29]),32);
            tracep->chgIData(oldp+672,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[30]),32);
            tracep->chgIData(oldp+673,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[31]),32);
            tracep->chgCData(oldp+674,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd),3);
            tracep->chgIData(oldp+675,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr),32);
            tracep->chgIData(oldp+676,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg),32);
            tracep->chgIData(oldp+677,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg),32);
            tracep->chgIData(oldp+678,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sourceReg),32);
            tracep->chgBit(oldp+679,((1U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)));
            tracep->chgBit(oldp+680,((1U & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg 
                                            >> 1U))));
            tracep->chgBit(oldp+681,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg));
            tracep->chgBit(oldp+682,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_0));
            tracep->chgBit(oldp+683,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_1));
            tracep->chgBit(oldp+684,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_2));
            tracep->chgBit(oldp+685,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_3));
            tracep->chgBit(oldp+686,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_4));
            tracep->chgBit(oldp+687,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_5));
            tracep->chgBit(oldp+688,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_6));
            tracep->chgBit(oldp+689,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_7));
            tracep->chgBit(oldp+690,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_8));
            tracep->chgBit(oldp+691,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_9));
            tracep->chgBit(oldp+692,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_10));
            tracep->chgBit(oldp+693,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_11));
            tracep->chgBit(oldp+694,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_12));
            tracep->chgBit(oldp+695,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_13));
            tracep->chgBit(oldp+696,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_14));
            tracep->chgBit(oldp+697,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_15));
            tracep->chgBit(oldp+698,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_16));
            tracep->chgBit(oldp+699,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_17));
            tracep->chgBit(oldp+700,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_18));
            tracep->chgBit(oldp+701,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_19));
            tracep->chgBit(oldp+702,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_20));
            tracep->chgBit(oldp+703,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_21));
            tracep->chgBit(oldp+704,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_22));
            tracep->chgBit(oldp+705,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_23));
            tracep->chgBit(oldp+706,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_24));
            tracep->chgBit(oldp+707,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_25));
            tracep->chgBit(oldp+708,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_26));
            tracep->chgBit(oldp+709,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_27));
            tracep->chgBit(oldp+710,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_28));
            tracep->chgBit(oldp+711,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_29));
            tracep->chgBit(oldp+712,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_30));
            tracep->chgBit(oldp+713,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_31));
            tracep->chgBit(oldp+714,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16));
            tracep->chgBit(oldp+715,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17));
            tracep->chgBit(oldp+716,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18));
            tracep->chgBit(oldp+717,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19));
            tracep->chgBit(oldp+718,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20));
            tracep->chgBit(oldp+719,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21));
            tracep->chgBit(oldp+720,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG));
            tracep->chgBit(oldp+721,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_16));
            tracep->chgBit(oldp+722,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_1));
            tracep->chgBit(oldp+723,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_17));
            tracep->chgBit(oldp+724,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_2));
            tracep->chgBit(oldp+725,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_18));
            tracep->chgBit(oldp+726,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_3));
            tracep->chgBit(oldp+727,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_19));
            tracep->chgBit(oldp+728,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_4));
            tracep->chgBit(oldp+729,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_20));
            tracep->chgBit(oldp+730,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_5));
            tracep->chgBit(oldp+731,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_21));
            tracep->chgBit(oldp+732,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_0));
            tracep->chgBit(oldp+733,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_1));
            tracep->chgBit(oldp+734,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_2));
            tracep->chgBit(oldp+735,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_3));
            tracep->chgBit(oldp+736,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_4));
            tracep->chgBit(oldp+737,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_5));
            tracep->chgBit(oldp+738,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_6));
            tracep->chgBit(oldp+739,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_7));
            tracep->chgBit(oldp+740,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_8));
            tracep->chgBit(oldp+741,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_9));
            tracep->chgBit(oldp+742,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_10));
            tracep->chgBit(oldp+743,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_11));
            tracep->chgBit(oldp+744,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_12));
            tracep->chgBit(oldp+745,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_13));
            tracep->chgBit(oldp+746,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_14));
            tracep->chgBit(oldp+747,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_15));
            tracep->chgBit(oldp+748,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_16));
            tracep->chgBit(oldp+749,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_17));
            tracep->chgBit(oldp+750,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_18));
            tracep->chgBit(oldp+751,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_19));
            tracep->chgBit(oldp+752,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_20));
            tracep->chgBit(oldp+753,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_21));
            tracep->chgBit(oldp+754,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_22));
            tracep->chgBit(oldp+755,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_23));
            tracep->chgBit(oldp+756,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_24));
            tracep->chgBit(oldp+757,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_25));
            tracep->chgBit(oldp+758,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_26));
            tracep->chgBit(oldp+759,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_27));
            tracep->chgBit(oldp+760,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_28));
            tracep->chgBit(oldp+761,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_29));
            tracep->chgBit(oldp+762,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_30));
            tracep->chgBit(oldp+763,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_31));
            tracep->chgCData(oldp+764,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_7) 
                                         << 7U) | (
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_6) 
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
                                                                  | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_0))))))))),8);
            tracep->chgSData(oldp+765,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_15) 
                                         << 0xfU) | 
                                        (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_14) 
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
                                                                                | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_0))))))))))))))))),16);
            tracep->chgCData(oldp+766,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_23) 
                                         << 7U) | (
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_22) 
                                                    << 6U) 
                                                   | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_21) 
                                                       << 5U) 
                                                      | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_20) 
                                                          << 4U) 
                                                         | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_19) 
                                                             << 3U) 
                                                            | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_18) 
                                                                << 2U) 
                                                               | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_17) 
                                                                   << 1U) 
                                                                  | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_16))))))))),8);
            tracep->chgBit(oldp+767,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intr));
            tracep->chgCData(oldp+768,((((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace)) 
                                         | (1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)
                                         : 0U)),3);
            tracep->chgCData(oldp+769,(((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Resp)
                                         : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid) 
                                             & (2U 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd)))
                                             ? 1U : 0U))),2);
            tracep->chgIData(oldp+770,(((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Data
                                         : (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG) 
                                               & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1) 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg)))
                                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2)
                                               : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem
                                              [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg]) 
                                             << 0x18U) 
                                            | (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG) 
                                                  & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_1) 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg)))
                                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_2)
                                                  : 
                                                 vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__mem
                                                 [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg]) 
                                                << 0x10U) 
                                               | (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG) 
                                                     & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_1) 
                                                        == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_2)
                                                     : 
                                                    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem
                                                    [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg]) 
                                                   << 8U) 
                                                  | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG) 
                                                      & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1) 
                                                         == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2)
                                                      : 
                                                     vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem
                                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg])))))),32);
            tracep->chgCData(oldp+771,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_M_Cmd),3);
            tracep->chgIData(oldp+772,((0xfffffff0U 
                                        & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr)),32);
            tracep->chgCData(oldp+773,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_S_Resp),2);
            tracep->chgCData(oldp+774,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_fromCPU_M_Cmd),3);
            tracep->chgCData(oldp+775,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__responseToCPUReg),2);
            tracep->chgIData(oldp+776,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                                         << 0x18U) 
                                        | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1)),32);
            tracep->chgCData(oldp+777,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_M_Cmd),3);
            tracep->chgIData(oldp+778,((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg)),32);
            tracep->chgBit(oldp+779,(((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                      & ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                         | (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))))));
            tracep->chgCData(oldp+780,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
                                          ? (((QData)((IData)(
                                                              ((IData)(0x800U) 
                                                               + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg))) 
                                              <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg))))
                                          : (((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg)) 
                                              <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)))))
                                         ? 0xfU : 0U)),4);
            tracep->chgCData(oldp+781,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp),2);
            tracep->chgCData(oldp+782,((((2U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace)) 
                                         & (0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace)))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)
                                         : 0U)),3);
            tracep->chgCData(oldp+783,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Resp)
                                         : 0U)),2);
            tracep->chgIData(oldp+784,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Data
                                         : 0U)),32);
            tracep->chgCData(oldp+785,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Cmd))
                                         ? 2U : 0U)),3);
            tracep->chgIData(oldp+786,((0xfffffff0U 
                                        & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr)),32);
            tracep->chgCData(oldp+787,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp_io_slave_S_Resp),2);
            tracep->chgCData(oldp+788,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_slave_M_Cmd),3);
            tracep->chgIData(oldp+789,((((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_M_Cmd)) 
                                         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_14))
                                         ? (0xfffffff0U 
                                            & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr)
                                         : (0xfffffff0U 
                                            & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr))),32);
            tracep->chgCData(oldp+790,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_master_S_Resp),2);
            tracep->chgCData(oldp+791,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Cmd),3);
            tracep->chgIData(oldp+792,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr),32);
            tracep->chgIData(oldp+793,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                                         ? 0U : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                                                  << 0x18U) 
                                                 | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1))),32);
            tracep->chgBit(oldp+794,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)) 
                                      & ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                         & ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                            | (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)))))));
            tracep->chgCData(oldp+795,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                                         ? 0U : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((IData)(0x800U) 
                                                                     + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg))) 
                                                    <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                      < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg))))
                                                   : 
                                                  (((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg)) 
                                                    <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                      < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)))))
                                                  ? 0xfU
                                                  : 0U))),4);
            tracep->chgCData(oldp+796,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_readMaster_S_Resp),2);
            tracep->chgCData(oldp+797,(((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)
                                         : 0U)),3);
            tracep->chgCData(oldp+798,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_slave_S_Resp)
                                         : 0U)),2);
            tracep->chgBit(oldp+799,((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace))));
            tracep->chgBit(oldp+800,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selDCReg));
            tracep->chgBit(oldp+801,((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace))));
            tracep->chgBit(oldp+802,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selSCReg));
            tracep->chgBit(oldp+803,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__REG));
            tracep->chgBit(oldp+804,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__REG_1));
            tracep->chgCData(oldp+805,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U))),8);
            tracep->chgIData(oldp+806,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG) 
                                         & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_1) 
                                            == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg)))
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_2
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg])),20);
            tracep->chgCData(oldp+807,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                                 >> 4U))),8);
            tracep->chgBit(oldp+808,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem_io_wrEna));
            tracep->chgIData(oldp+809,((0xfffffU & 
                                        (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                         >> 0xcU))),20);
            tracep->chgSData(oldp+810,((0x3ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                  >> 2U))),10);
            tracep->chgCData(oldp+811,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG) 
                                         & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1) 
                                            == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg)))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2)
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg])),8);
            tracep->chgSData(oldp+812,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrAddrReg),10);
            tracep->chgBit(oldp+813,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_io_wrEna));
            tracep->chgCData(oldp+814,((0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg)),8);
            tracep->chgCData(oldp+815,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG) 
                                         & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_1) 
                                            == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg)))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_2)
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg])),8);
            tracep->chgBit(oldp+816,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1_io_wrEna));
            tracep->chgCData(oldp+817,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+818,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG) 
                                         & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_1) 
                                            == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg)))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_2)
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg])),8);
            tracep->chgBit(oldp+819,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2_io_wrEna));
            tracep->chgCData(oldp+820,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+821,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG) 
                                         & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1) 
                                            == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg)))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2)
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg])),8);
            tracep->chgBit(oldp+822,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3_io_wrEna));
            tracep->chgCData(oldp+823,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg 
                                                 >> 0x18U))),8);
            tracep->chgCData(oldp+824,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd),3);
            tracep->chgIData(oldp+825,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr),32);
            tracep->chgCData(oldp+826,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_ByteEn),4);
            tracep->chgBit(oldp+827,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_0));
            tracep->chgBit(oldp+828,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_1));
            tracep->chgBit(oldp+829,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_2));
            tracep->chgBit(oldp+830,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_3));
            tracep->chgBit(oldp+831,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_4));
            tracep->chgBit(oldp+832,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_5));
            tracep->chgBit(oldp+833,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_6));
            tracep->chgBit(oldp+834,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_7));
            tracep->chgBit(oldp+835,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_8));
            tracep->chgBit(oldp+836,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_9));
            tracep->chgBit(oldp+837,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_10));
            tracep->chgBit(oldp+838,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_11));
            tracep->chgBit(oldp+839,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_12));
            tracep->chgBit(oldp+840,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_13));
            tracep->chgBit(oldp+841,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_14));
            tracep->chgBit(oldp+842,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_15));
            tracep->chgBit(oldp+843,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_16));
            tracep->chgBit(oldp+844,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_17));
            tracep->chgBit(oldp+845,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_18));
            tracep->chgBit(oldp+846,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_19));
            tracep->chgBit(oldp+847,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_20));
            tracep->chgBit(oldp+848,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_21));
            tracep->chgBit(oldp+849,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_22));
            tracep->chgBit(oldp+850,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_23));
            tracep->chgBit(oldp+851,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_24));
            tracep->chgBit(oldp+852,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_25));
            tracep->chgBit(oldp+853,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_26));
            tracep->chgBit(oldp+854,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_27));
            tracep->chgBit(oldp+855,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_28));
            tracep->chgBit(oldp+856,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_29));
            tracep->chgBit(oldp+857,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_30));
            tracep->chgBit(oldp+858,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_31));
            tracep->chgBit(oldp+859,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_32));
            tracep->chgBit(oldp+860,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_33));
            tracep->chgBit(oldp+861,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_34));
            tracep->chgBit(oldp+862,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_35));
            tracep->chgBit(oldp+863,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_36));
            tracep->chgBit(oldp+864,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_37));
            tracep->chgBit(oldp+865,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_38));
            tracep->chgBit(oldp+866,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_39));
            tracep->chgBit(oldp+867,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_40));
            tracep->chgBit(oldp+868,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_41));
            tracep->chgBit(oldp+869,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_42));
            tracep->chgBit(oldp+870,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_43));
            tracep->chgBit(oldp+871,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_44));
            tracep->chgBit(oldp+872,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_45));
            tracep->chgBit(oldp+873,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_46));
            tracep->chgBit(oldp+874,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_47));
            tracep->chgBit(oldp+875,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_48));
            tracep->chgBit(oldp+876,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_49));
            tracep->chgBit(oldp+877,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_50));
            tracep->chgBit(oldp+878,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_51));
            tracep->chgBit(oldp+879,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_52));
            tracep->chgBit(oldp+880,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_53));
            tracep->chgBit(oldp+881,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_54));
            tracep->chgBit(oldp+882,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_55));
            tracep->chgBit(oldp+883,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_56));
            tracep->chgBit(oldp+884,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_57));
            tracep->chgBit(oldp+885,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_58));
            tracep->chgBit(oldp+886,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_59));
            tracep->chgBit(oldp+887,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_60));
            tracep->chgBit(oldp+888,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_61));
            tracep->chgBit(oldp+889,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_62));
            tracep->chgBit(oldp+890,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_63));
            tracep->chgBit(oldp+891,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_64));
            tracep->chgBit(oldp+892,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_65));
            tracep->chgBit(oldp+893,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_66));
            tracep->chgBit(oldp+894,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_67));
            tracep->chgBit(oldp+895,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_68));
            tracep->chgBit(oldp+896,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_69));
            tracep->chgBit(oldp+897,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_70));
            tracep->chgBit(oldp+898,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_71));
            tracep->chgBit(oldp+899,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_72));
            tracep->chgBit(oldp+900,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_73));
            tracep->chgBit(oldp+901,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_74));
            tracep->chgBit(oldp+902,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_75));
            tracep->chgBit(oldp+903,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_76));
            tracep->chgBit(oldp+904,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_77));
            tracep->chgBit(oldp+905,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_78));
            tracep->chgBit(oldp+906,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_79));
            tracep->chgBit(oldp+907,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_80));
            tracep->chgBit(oldp+908,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_81));
            tracep->chgBit(oldp+909,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_82));
            tracep->chgBit(oldp+910,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_83));
            tracep->chgBit(oldp+911,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_84));
            tracep->chgBit(oldp+912,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_85));
            tracep->chgBit(oldp+913,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_86));
            tracep->chgBit(oldp+914,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_87));
            tracep->chgBit(oldp+915,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_88));
            tracep->chgBit(oldp+916,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_89));
            tracep->chgBit(oldp+917,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_90));
            tracep->chgBit(oldp+918,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_91));
            tracep->chgBit(oldp+919,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_92));
            tracep->chgBit(oldp+920,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_93));
            tracep->chgBit(oldp+921,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_94));
            tracep->chgBit(oldp+922,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_95));
            tracep->chgBit(oldp+923,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_96));
            tracep->chgBit(oldp+924,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_97));
            tracep->chgBit(oldp+925,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_98));
            tracep->chgBit(oldp+926,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_99));
            tracep->chgBit(oldp+927,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_100));
            tracep->chgBit(oldp+928,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_101));
            tracep->chgBit(oldp+929,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_102));
            tracep->chgBit(oldp+930,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_103));
            tracep->chgBit(oldp+931,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_104));
            tracep->chgBit(oldp+932,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_105));
            tracep->chgBit(oldp+933,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_106));
            tracep->chgBit(oldp+934,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_107));
            tracep->chgBit(oldp+935,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_108));
            tracep->chgBit(oldp+936,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_109));
            tracep->chgBit(oldp+937,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_110));
            tracep->chgBit(oldp+938,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_111));
            tracep->chgBit(oldp+939,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_112));
            tracep->chgBit(oldp+940,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_113));
            tracep->chgBit(oldp+941,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_114));
            tracep->chgBit(oldp+942,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_115));
            tracep->chgBit(oldp+943,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_116));
            tracep->chgBit(oldp+944,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_117));
            tracep->chgBit(oldp+945,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_118));
            tracep->chgBit(oldp+946,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_119));
            tracep->chgBit(oldp+947,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_120));
            tracep->chgBit(oldp+948,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_121));
            tracep->chgBit(oldp+949,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_122));
            tracep->chgBit(oldp+950,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_123));
            tracep->chgBit(oldp+951,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_124));
            tracep->chgBit(oldp+952,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_125));
            tracep->chgBit(oldp+953,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_126));
            tracep->chgBit(oldp+954,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_127));
            tracep->chgBit(oldp+955,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_128));
            tracep->chgBit(oldp+956,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_129));
            tracep->chgBit(oldp+957,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_130));
            tracep->chgBit(oldp+958,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_131));
            tracep->chgBit(oldp+959,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_132));
            tracep->chgBit(oldp+960,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_133));
            tracep->chgBit(oldp+961,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_134));
            tracep->chgBit(oldp+962,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_135));
            tracep->chgBit(oldp+963,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_136));
            tracep->chgBit(oldp+964,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_137));
            tracep->chgBit(oldp+965,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_138));
            tracep->chgBit(oldp+966,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_139));
            tracep->chgBit(oldp+967,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_140));
            tracep->chgBit(oldp+968,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_141));
            tracep->chgBit(oldp+969,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_142));
            tracep->chgBit(oldp+970,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_143));
            tracep->chgBit(oldp+971,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_144));
            tracep->chgBit(oldp+972,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_145));
            tracep->chgBit(oldp+973,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_146));
            tracep->chgBit(oldp+974,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_147));
            tracep->chgBit(oldp+975,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_148));
            tracep->chgBit(oldp+976,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_149));
            tracep->chgBit(oldp+977,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_150));
            tracep->chgBit(oldp+978,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_151));
            tracep->chgBit(oldp+979,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_152));
            tracep->chgBit(oldp+980,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_153));
            tracep->chgBit(oldp+981,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_154));
            tracep->chgBit(oldp+982,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_155));
            tracep->chgBit(oldp+983,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_156));
            tracep->chgBit(oldp+984,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_157));
            tracep->chgBit(oldp+985,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_158));
            tracep->chgBit(oldp+986,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_159));
            tracep->chgBit(oldp+987,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_160));
            tracep->chgBit(oldp+988,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_161));
            tracep->chgBit(oldp+989,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_162));
            tracep->chgBit(oldp+990,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_163));
            tracep->chgBit(oldp+991,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_164));
            tracep->chgBit(oldp+992,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_165));
            tracep->chgBit(oldp+993,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_166));
            tracep->chgBit(oldp+994,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_167));
            tracep->chgBit(oldp+995,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_168));
            tracep->chgBit(oldp+996,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_169));
            tracep->chgBit(oldp+997,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_170));
            tracep->chgBit(oldp+998,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_171));
            tracep->chgBit(oldp+999,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_172));
            tracep->chgBit(oldp+1000,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_173));
            tracep->chgBit(oldp+1001,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_174));
            tracep->chgBit(oldp+1002,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_175));
            tracep->chgBit(oldp+1003,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_176));
            tracep->chgBit(oldp+1004,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_177));
            tracep->chgBit(oldp+1005,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_178));
            tracep->chgBit(oldp+1006,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_179));
            tracep->chgBit(oldp+1007,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_180));
            tracep->chgBit(oldp+1008,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_181));
            tracep->chgBit(oldp+1009,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_182));
            tracep->chgBit(oldp+1010,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_183));
            tracep->chgBit(oldp+1011,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_184));
            tracep->chgBit(oldp+1012,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_185));
            tracep->chgBit(oldp+1013,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_186));
            tracep->chgBit(oldp+1014,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_187));
            tracep->chgBit(oldp+1015,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_188));
            tracep->chgBit(oldp+1016,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_189));
            tracep->chgBit(oldp+1017,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_190));
            tracep->chgBit(oldp+1018,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_191));
            tracep->chgBit(oldp+1019,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_192));
            tracep->chgBit(oldp+1020,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_193));
            tracep->chgBit(oldp+1021,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_194));
            tracep->chgBit(oldp+1022,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_195));
            tracep->chgBit(oldp+1023,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_196));
            tracep->chgBit(oldp+1024,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_197));
            tracep->chgBit(oldp+1025,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_198));
            tracep->chgBit(oldp+1026,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_199));
            tracep->chgBit(oldp+1027,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_200));
            tracep->chgBit(oldp+1028,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_201));
            tracep->chgBit(oldp+1029,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_202));
            tracep->chgBit(oldp+1030,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_203));
            tracep->chgBit(oldp+1031,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_204));
            tracep->chgBit(oldp+1032,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_205));
            tracep->chgBit(oldp+1033,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_206));
            tracep->chgBit(oldp+1034,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_207));
            tracep->chgBit(oldp+1035,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_208));
            tracep->chgBit(oldp+1036,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_209));
            tracep->chgBit(oldp+1037,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_210));
            tracep->chgBit(oldp+1038,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_211));
            tracep->chgBit(oldp+1039,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_212));
            tracep->chgBit(oldp+1040,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_213));
            tracep->chgBit(oldp+1041,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_214));
            tracep->chgBit(oldp+1042,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_215));
            tracep->chgBit(oldp+1043,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_216));
            tracep->chgBit(oldp+1044,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_217));
            tracep->chgBit(oldp+1045,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_218));
            tracep->chgBit(oldp+1046,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_219));
            tracep->chgBit(oldp+1047,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_220));
            tracep->chgBit(oldp+1048,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_221));
            tracep->chgBit(oldp+1049,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_222));
            tracep->chgBit(oldp+1050,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_223));
            tracep->chgBit(oldp+1051,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_224));
            tracep->chgBit(oldp+1052,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_225));
            tracep->chgBit(oldp+1053,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_226));
            tracep->chgBit(oldp+1054,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_227));
            tracep->chgBit(oldp+1055,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_228));
            tracep->chgBit(oldp+1056,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_229));
            tracep->chgBit(oldp+1057,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_230));
            tracep->chgBit(oldp+1058,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_231));
            tracep->chgBit(oldp+1059,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_232));
            tracep->chgBit(oldp+1060,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_233));
            tracep->chgBit(oldp+1061,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_234));
            tracep->chgBit(oldp+1062,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_235));
            tracep->chgBit(oldp+1063,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_236));
            tracep->chgBit(oldp+1064,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_237));
            tracep->chgBit(oldp+1065,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_238));
            tracep->chgBit(oldp+1066,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_239));
            tracep->chgBit(oldp+1067,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_240));
            tracep->chgBit(oldp+1068,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_241));
            tracep->chgBit(oldp+1069,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_242));
            tracep->chgBit(oldp+1070,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_243));
            tracep->chgBit(oldp+1071,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_244));
            tracep->chgBit(oldp+1072,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_245));
            tracep->chgBit(oldp+1073,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_246));
            tracep->chgBit(oldp+1074,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_247));
            tracep->chgBit(oldp+1075,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_248));
            tracep->chgBit(oldp+1076,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_249));
            tracep->chgBit(oldp+1077,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_250));
            tracep->chgBit(oldp+1078,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_251));
            tracep->chgBit(oldp+1079,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_252));
            tracep->chgBit(oldp+1080,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_253));
            tracep->chgBit(oldp+1081,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_254));
            tracep->chgBit(oldp+1082,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_255));
            tracep->chgBit(oldp+1083,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagV));
            tracep->chgBit(oldp+1084,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid));
            tracep->chgBit(oldp+1085,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__fillReg));
            tracep->chgIData(oldp+1086,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg),32);
            tracep->chgCData(oldp+1087,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stmsk),4);
            tracep->chgIData(oldp+1088,((((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG) 
                                            & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1) 
                                               == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2)
                                            : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem
                                           [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg]) 
                                          << 0x18U) 
                                         | (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG) 
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
                                                  : 
                                                 vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem
                                                 [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg]) 
                                                << 8U) 
                                               | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG) 
                                                   & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1) 
                                                      == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg)))
                                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2)
                                                   : 
                                                  vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg]))))),32);
            tracep->chgCData(oldp+1089,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg),2);
            tracep->chgCData(oldp+1090,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__burstCntReg),2);
            tracep->chgCData(oldp+1091,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__missIndexReg),2);
            tracep->chgCData(oldp+1092,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Resp),2);
            tracep->chgIData(oldp+1093,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Data),32);
            tracep->chgIData(oldp+1094,((0xfffffffU 
                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                            >> 4U))),28);
            tracep->chgIData(oldp+1095,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg]),20);
            tracep->chgCData(oldp+1096,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg),8);
            tracep->chgBit(oldp+1097,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG));
            tracep->chgCData(oldp+1098,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_1),8);
            tracep->chgIData(oldp+1099,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_2),20);
            tracep->chgCData(oldp+1100,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg]),8);
            tracep->chgSData(oldp+1101,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg),10);
            tracep->chgBit(oldp+1102,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG));
            tracep->chgSData(oldp+1103,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1),10);
            tracep->chgCData(oldp+1104,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2),8);
            tracep->chgCData(oldp+1105,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg]),8);
            tracep->chgSData(oldp+1106,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg),10);
            tracep->chgBit(oldp+1107,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG));
            tracep->chgSData(oldp+1108,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_1),10);
            tracep->chgCData(oldp+1109,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_2),8);
            tracep->chgCData(oldp+1110,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg]),8);
            tracep->chgSData(oldp+1111,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg),10);
            tracep->chgBit(oldp+1112,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG));
            tracep->chgSData(oldp+1113,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_1),10);
            tracep->chgCData(oldp+1114,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_2),8);
            tracep->chgCData(oldp+1115,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg]),8);
            tracep->chgSData(oldp+1116,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg),10);
            tracep->chgBit(oldp+1117,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG));
            tracep->chgSData(oldp+1118,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1),10);
            tracep->chgCData(oldp+1119,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2),8);
            tracep->chgSData(oldp+1120,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_io_rdAddr),9);
            tracep->chgCData(oldp+1121,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock__DOT__rdAddrReg]),8);
            tracep->chgSData(oldp+1122,((0x1ffU & (
                                                   (0U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                                    ? 
                                                   (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                                    >> 2U)
                                                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_111)))),9);
            tracep->chgBit(oldp+1123,((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna))));
            tracep->chgCData(oldp+1124,((0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData)),8);
            tracep->chgSData(oldp+1125,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_46)
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_102))),9);
            tracep->chgCData(oldp+1126,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_1__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_1__DOT__rdAddrReg]),8);
            tracep->chgBit(oldp+1127,((1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna) 
                                             >> 1U))));
            tracep->chgCData(oldp+1128,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1129,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_2__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_2__DOT__rdAddrReg]),8);
            tracep->chgBit(oldp+1130,((1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna) 
                                             >> 2U))));
            tracep->chgCData(oldp+1131,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1132,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data),8);
            tracep->chgBit(oldp+1133,((1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna) 
                                             >> 3U))));
            tracep->chgCData(oldp+1134,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData 
                                                  >> 0x18U))),8);
            tracep->chgCData(oldp+1135,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg),3);
            tracep->chgBit(oldp+1136,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg));
            tracep->chgQData(oldp+1137,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg),33);
            tracep->chgIData(oldp+1139,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg),32);
            tracep->chgSData(oldp+1140,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__rdAddrReg),9);
            tracep->chgBit(oldp+1141,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
                                        ? (((QData)((IData)(
                                                            ((IData)(0x800U) 
                                                             + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg))) 
                                            <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                              < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg))))
                                        : (((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg)) 
                                            <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                              < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)))))));
            tracep->chgSData(oldp+1142,((0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                                   >> 2U))),9);
            tracep->chgCData(oldp+1143,((3U & (IData)(
                                                      (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                       >> 2U)))),2);
            tracep->chgIData(oldp+1144,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopInc),32);
            tracep->chgBit(oldp+1145,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackAboveMem));
            tracep->chgIData(oldp+1146,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData),32);
            tracep->chgCData(oldp+1147,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna),4);
            tracep->chgSData(oldp+1148,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock__DOT__rdAddrReg),9);
            tracep->chgSData(oldp+1149,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_1__DOT__rdAddrReg),9);
            tracep->chgSData(oldp+1150,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_2__DOT__rdAddrReg),9);
            tracep->chgSData(oldp+1151,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__rdAddrReg),9);
            tracep->chgCData(oldp+1152,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg),2);
            tracep->chgCData(oldp+1153,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__burstCntReg),2);
            tracep->chgCData(oldp+1154,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__posReg),2);
            tracep->chgCData(oldp+1155,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Cmd),3);
            tracep->chgIData(oldp+1156,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr),32);
            tracep->chgCData(oldp+1157,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Resp),2);
            tracep->chgIData(oldp+1158,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Data),32);
            tracep->chgIData(oldp+1159,((0xfffffffU 
                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr 
                                            >> 4U))),28);
            tracep->chgCData(oldp+1160,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state),2);
            tracep->chgCData(oldp+1161,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg),2);
            tracep->chgIData(oldp+1162,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr),32);
            tracep->chgIData(oldp+1163,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Data),32);
            tracep->chgCData(oldp+1164,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_ByteEn),4);
            tracep->chgCData(oldp+1165,((3U & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr 
                                               >> 2U))),2);
            tracep->chgIData(oldp+1166,((0xfffffffU 
                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr 
                                            >> 4U))),28);
            tracep->chgBit(oldp+1167,(vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqReg));
            tracep->chgBit(oldp+1168,(vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqBools_0));
            tracep->chgCData(oldp+1169,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__respReg),2);
            tracep->chgBit(oldp+1170,(vlTOPp->Patmos__DOT__UartCmp__DOT__REG));
            tracep->chgBit(oldp+1171,((1U & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__full)))));
            tracep->chgBit(oldp+1172,((1U == (IData)(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd))));
            tracep->chgBit(oldp+1173,((1U & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state)
                                              ? ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_tick)
                                                  ? 
                                                 ((0xaU 
                                                   == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_counter))
                                                   ? 
                                                  ((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty)) 
                                                   | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10))
                                                   : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10))
                                                  : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10))
                                              : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10)))));
            tracep->chgBit(oldp+1174,((1U & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty)))));
            tracep->chgCData(oldp+1175,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram_io_deq_bits_MPORT_data),8);
            tracep->chgBit(oldp+1176,((1U & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__full)))));
            tracep->chgBit(oldp+1177,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue_io_enq_valid));
            tracep->chgCData(oldp+1178,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_buff),8);
            tracep->chgBit(oldp+1179,(((2U == (IData)(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd)) 
                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                          >> 2U))));
            tracep->chgBit(oldp+1180,((1U & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__empty)))));
            tracep->chgCData(oldp+1181,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram
                                        [vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__deq_ptr_value]),8);
            tracep->chgSData(oldp+1182,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_counter),10);
            tracep->chgBit(oldp+1183,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_tick));
            tracep->chgBit(oldp+1184,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state));
            tracep->chgSData(oldp+1185,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_buff),10);
            tracep->chgCData(oldp+1186,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_counter),4);
            tracep->chgBit(oldp+1187,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg0));
            tracep->chgBit(oldp+1188,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg1));
            tracep->chgBit(oldp+1189,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg2));
            tracep->chgSData(oldp+1190,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_counter),10);
            tracep->chgBit(oldp+1191,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_tick));
            tracep->chgBit(oldp+1192,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_enable));
            tracep->chgCData(oldp+1193,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_counter),3);
            tracep->chgCData(oldp+1194,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state),2);
            tracep->chgCData(oldp+1195,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rdDataReg),8);
            tracep->chgSData(oldp+1196,((0x100U | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram_io_deq_bits_MPORT_data))),9);
            tracep->chgSData(oldp+1197,((0x1ffU & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_buff) 
                                                   >> 1U))),9);
            tracep->chgCData(oldp+1198,((0x7fU & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_buff) 
                                                  >> 1U))),7);
            tracep->chgCData(oldp+1199,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[0]),8);
            tracep->chgCData(oldp+1200,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[1]),8);
            tracep->chgCData(oldp+1201,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[2]),8);
            tracep->chgCData(oldp+1202,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[3]),8);
            tracep->chgCData(oldp+1203,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[4]),8);
            tracep->chgCData(oldp+1204,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[5]),8);
            tracep->chgCData(oldp+1205,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[6]),8);
            tracep->chgCData(oldp+1206,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[7]),8);
            tracep->chgCData(oldp+1207,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[8]),8);
            tracep->chgCData(oldp+1208,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[9]),8);
            tracep->chgCData(oldp+1209,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[10]),8);
            tracep->chgCData(oldp+1210,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[11]),8);
            tracep->chgCData(oldp+1211,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[12]),8);
            tracep->chgCData(oldp+1212,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[13]),8);
            tracep->chgCData(oldp+1213,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[14]),8);
            tracep->chgCData(oldp+1214,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[15]),8);
            tracep->chgCData(oldp+1215,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__deq_ptr_value),4);
            tracep->chgCData(oldp+1216,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__enq_ptr_value),4);
            tracep->chgBit(oldp+1217,(((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__full)) 
                                       & (1U == (IData)(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd)))));
            tracep->chgBit(oldp+1218,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__maybe_full));
            tracep->chgBit(oldp+1219,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ptr_match));
            tracep->chgBit(oldp+1220,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty));
            tracep->chgBit(oldp+1221,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__full));
            tracep->chgBit(oldp+1222,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__do_enq));
            tracep->chgBit(oldp+1223,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__do_deq));
            tracep->chgCData(oldp+1224,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[0]),8);
            tracep->chgCData(oldp+1225,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[1]),8);
            tracep->chgCData(oldp+1226,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[2]),8);
            tracep->chgCData(oldp+1227,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[3]),8);
            tracep->chgCData(oldp+1228,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[4]),8);
            tracep->chgCData(oldp+1229,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[5]),8);
            tracep->chgCData(oldp+1230,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[6]),8);
            tracep->chgCData(oldp+1231,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[7]),8);
            tracep->chgCData(oldp+1232,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[8]),8);
            tracep->chgCData(oldp+1233,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[9]),8);
            tracep->chgCData(oldp+1234,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[10]),8);
            tracep->chgCData(oldp+1235,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[11]),8);
            tracep->chgCData(oldp+1236,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[12]),8);
            tracep->chgCData(oldp+1237,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[13]),8);
            tracep->chgCData(oldp+1238,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[14]),8);
            tracep->chgCData(oldp+1239,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[15]),8);
            tracep->chgCData(oldp+1240,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__deq_ptr_value),4);
            tracep->chgCData(oldp+1241,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__enq_ptr_value),4);
            tracep->chgBit(oldp+1242,(((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__full)) 
                                       & (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue_io_enq_valid))));
            tracep->chgBit(oldp+1243,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__maybe_full));
            tracep->chgBit(oldp+1244,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ptr_match));
            tracep->chgBit(oldp+1245,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__empty));
            tracep->chgBit(oldp+1246,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__full));
            tracep->chgBit(oldp+1247,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__do_enq));
            tracep->chgBit(oldp+1248,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__do_deq));
            tracep->chgCData(oldp+1249,(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Cmd),3);
            tracep->chgIData(oldp+1250,(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr),32);
            tracep->chgSData(oldp+1251,(vlTOPp->Patmos__DOT__Leds__DOT__ledReg),9);
            tracep->chgCData(oldp+1252,(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg),4);
            tracep->chgCData(oldp+1253,(vlTOPp->Patmos__DOT__Keys__DOT__keyReg),4);
            tracep->chgCData(oldp+1254,(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd),3);
            tracep->chgIData(oldp+1255,(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr),32);
            tracep->chgIData(oldp+1256,(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Data),32);
            tracep->chgQData(oldp+1257,(vlTOPp->Patmos__DOT__Timer__DOT__cycleReg),64);
            tracep->chgQData(oldp+1259,(vlTOPp->Patmos__DOT__Timer__DOT__cycleIntrReg),64);
            tracep->chgCData(oldp+1261,(vlTOPp->Patmos__DOT__Timer__DOT__usecSubReg),7);
            tracep->chgQData(oldp+1262,(vlTOPp->Patmos__DOT__Timer__DOT__usecReg),64);
            tracep->chgQData(oldp+1264,(vlTOPp->Patmos__DOT__Timer__DOT__usecIntrReg),64);
            tracep->chgIData(oldp+1266,(vlTOPp->Patmos__DOT__Timer__DOT__cycleHiReg),32);
            tracep->chgIData(oldp+1267,(vlTOPp->Patmos__DOT__Timer__DOT__usecHiReg),32);
            tracep->chgIData(oldp+1268,(vlTOPp->Patmos__DOT__Timer__DOT__cycleLoReg),32);
            tracep->chgIData(oldp+1269,(vlTOPp->Patmos__DOT__Timer__DOT__usecLoReg),32);
            tracep->chgBit(oldp+1270,((0U == vlTOPp->Patmos__DOT__Deadline__DOT__downCountReg)));
            tracep->chgBit(oldp+1271,(vlTOPp->Patmos__DOT__Deadline__DOT__stallReg));
            tracep->chgSData(oldp+1272,((0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 2U))),9);
            tracep->chgCData(oldp+1273,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__mem
                                        [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__rdAddrReg]),8);
            tracep->chgBit(oldp+1274,((1U & (IData)(vlTOPp->Patmos__DOT__Spm__DOT___T_5))));
            tracep->chgCData(oldp+1275,((0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data)),8);
            tracep->chgCData(oldp+1276,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__mem
                                        [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__rdAddrReg]),8);
            tracep->chgBit(oldp+1277,((1U & ((IData)(vlTOPp->Patmos__DOT__Spm__DOT___T_5) 
                                             >> 1U))));
            tracep->chgCData(oldp+1278,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1279,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__mem
                                        [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__rdAddrReg]),8);
            tracep->chgBit(oldp+1280,((1U & ((IData)(vlTOPp->Patmos__DOT__Spm__DOT___T_5) 
                                             >> 2U))));
            tracep->chgCData(oldp+1281,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1282,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__mem
                                        [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__rdAddrReg]),8);
            tracep->chgBit(oldp+1283,((1U & ((IData)(vlTOPp->Patmos__DOT__Spm__DOT___T_5) 
                                             >> 3U))));
            tracep->chgCData(oldp+1284,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data 
                                                  >> 0x18U))),8);
            tracep->chgCData(oldp+1285,(vlTOPp->Patmos__DOT__Spm__DOT__cmdReg),3);
            tracep->chgSData(oldp+1286,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__rdAddrReg),9);
            tracep->chgSData(oldp+1287,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__rdAddrReg),9);
            tracep->chgSData(oldp+1288,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__rdAddrReg),9);
            tracep->chgSData(oldp+1289,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__rdAddrReg),9);
            tracep->chgCData(oldp+1290,(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg),3);
            tracep->chgIData(oldp+1291,(vlTOPp->Patmos__DOT__ramCtrl__DOT__mAddrReg),20);
            tracep->chgSData(oldp+1292,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_0),16);
            tracep->chgSData(oldp+1293,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_1),16);
            tracep->chgSData(oldp+1294,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_2),16);
            tracep->chgSData(oldp+1295,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_3),16);
            tracep->chgSData(oldp+1296,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_4),16);
            tracep->chgSData(oldp+1297,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_5),16);
            tracep->chgSData(oldp+1298,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_6),16);
            tracep->chgSData(oldp+1299,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_7),16);
            tracep->chgCData(oldp+1300,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_byteEna),2);
            tracep->chgSData(oldp+1301,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_data),16);
            tracep->chgCData(oldp+1302,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_byteEna),2);
            tracep->chgSData(oldp+1303,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_data),16);
            tracep->chgCData(oldp+1304,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_2_byteEna),2);
            tracep->chgSData(oldp+1305,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_2_data),16);
            tracep->chgCData(oldp+1306,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_3_byteEna),2);
            tracep->chgSData(oldp+1307,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_3_data),16);
            tracep->chgCData(oldp+1308,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_4_byteEna),2);
            tracep->chgSData(oldp+1309,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_4_data),16);
            tracep->chgCData(oldp+1310,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_5_byteEna),2);
            tracep->chgSData(oldp+1311,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_5_data),16);
            tracep->chgCData(oldp+1312,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_6_byteEna),2);
            tracep->chgSData(oldp+1313,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_6_data),16);
            tracep->chgCData(oldp+1314,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_7_byteEna),2);
            tracep->chgSData(oldp+1315,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_7_data),16);
            tracep->chgCData(oldp+1316,(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg),3);
            tracep->chgCData(oldp+1317,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg),2);
            tracep->chgBit(oldp+1318,(vlTOPp->Patmos__DOT__ramCtrl__DOT__waitCountReg));
            tracep->chgIData(oldp+1319,(vlTOPp->Patmos__DOT__ramCtrl__DOT__doutReg),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgIData(oldp+1320,((0x3fffffffU 
                                         & ((0x80000000U 
                                             & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                             ? ((IData)(2U) 
                                                + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc)
                                             : ((IData)(1U) 
                                                + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc)))),30);
            tracep->chgIData(oldp+1321,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd
                                          : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven)),32);
            tracep->chgIData(oldp+1322,((0x3fffffffU 
                                         & ((0x80000000U 
                                             & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                             ? ((IData)(2U) 
                                                + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                             : ((IData)(1U) 
                                                + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)))),30);
            tracep->chgIData(oldp+1323,((0x3fffffffU 
                                         & ((0x80000000U 
                                             & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                             ? ((IData)(4U) 
                                                + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                             : ((IData)(3U) 
                                                + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)))),30);
            tracep->chgIData(oldp+1324,((0x3fffffffU 
                                         & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet)
                                             ? (0xfffU 
                                                & ((IData)(2U) 
                                                   + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc))
                                             : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exfe_doBranch)
                                                 ? 
                                                ((IData)(2U) 
                                                 + vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target)
                                                 : 
                                                ((0x80000000U 
                                                  & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                                  : 
                                                 ((IData)(3U) 
                                                  + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)))))),30);
            tracep->chgIData(oldp+1325,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven
                                          : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd)),32);
            tracep->chgIData(oldp+1326,((0x3fffffffU 
                                         & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__saveND)
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_relPc
                                             : ((0x80000000U 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                                 ? 
                                                ((IData)(2U) 
                                                 + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc)
                                                 : 
                                                ((IData)(1U) 
                                                 + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc))))),30);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgSData(oldp+1327,((0x7ffU & (
                                                   (2U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                                    ? 
                                                   (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                     <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                     ? 
                                                    ((1U 
                                                      == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                                      ? 
                                                     (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                       < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                       ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68)
                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13)
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68)
                                                    : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13))),11);
            tracep->chgSData(oldp+1328,((0x7ffU & (
                                                   (2U 
                                                    == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                                    ? 
                                                   (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                     <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                     ? 
                                                    ((1U 
                                                      == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                                      ? 
                                                     (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                       < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                       ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69)
                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14)
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69)
                                                    : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14))),11);
            tracep->chgSData(oldp+1329,((0x3ffU & (
                                                   ((2U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                                     ? 
                                                    (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                      <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                                       ? 
                                                      (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                        < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                        ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68)
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13)
                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68)
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13) 
                                                   >> 1U))),10);
            tracep->chgSData(oldp+1330,((0x3ffU & (
                                                   ((2U 
                                                     == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                                     ? 
                                                    (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                      <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                                       ? 
                                                      (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                        < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                        ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69)
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14)
                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69)
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14) 
                                                   >> 1U))),10);
            tracep->chgIData(oldp+1331,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                          ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                              <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                              ? ((1U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                                  ? 
                                                 (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                   < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68)
                                                  : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13)
                                              : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68)
                                          : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13)),32);
            tracep->chgIData(oldp+1332,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                          ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                              <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                              ? ((1U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                                  ? 
                                                 (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                   < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69)
                                                  : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14)
                                              : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69)
                                          : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14)),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+1333,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven),32);
            tracep->chgIData(oldp+1334,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd),32);
            tracep->chgIData(oldp+1335,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a),32);
            tracep->chgIData(oldp+1336,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_b),32);
            tracep->chgBit(oldp+1337,((1U & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a 
                                             >> 0x1fU))));
            tracep->chgIData(oldp+1338,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next),30);
            tracep->chgIData(oldp+1339,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_inc),30);
            tracep->chgIData(oldp+1340,((0x1fffffffU 
                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_inc 
                                            >> 1U))),29);
            tracep->chgIData(oldp+1341,((0x1fffffffU 
                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next 
                                            >> 1U))),29);
            tracep->chgCData(oldp+1342,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a 
                                                  >> 0xcU))),5);
            tracep->chgCData(oldp+1343,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a 
                                                  >> 7U))),5);
            tracep->chgCData(oldp+1344,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_b 
                                                  >> 0xcU))),5);
            tracep->chgCData(oldp+1345,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_b 
                                                  >> 7U))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+1346,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven),32);
            tracep->chgIData(oldp+1347,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd),32);
            tracep->chgCData(oldp+1348,((0x7fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                  >> 1U))),7);
            tracep->chgCData(oldp+1349,((0x7fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                  >> 1U))),7);
            tracep->chgIData(oldp+1350,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven),30);
            tracep->chgIData(oldp+1351,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd),30);
        }
        tracep->chgBit(oldp+1352,(vlTOPp->clock));
        tracep->chgBit(oldp+1353,(vlTOPp->reset));
        tracep->chgSData(oldp+1354,(vlTOPp->io_Leds_led),9);
        tracep->chgBit(oldp+1355,(vlTOPp->io_UartCmp_tx));
        tracep->chgIData(oldp+1356,(vlTOPp->io_SRamCtrl_ramOut_addr),20);
        tracep->chgBit(oldp+1357,(vlTOPp->io_SRamCtrl_ramOut_doutEna));
        tracep->chgSData(oldp+1358,(vlTOPp->io_SRamCtrl_ramOut_dout),16);
        tracep->chgBit(oldp+1359,(vlTOPp->io_SRamCtrl_ramOut_nce));
        tracep->chgBit(oldp+1360,(vlTOPp->io_SRamCtrl_ramOut_noe));
        tracep->chgBit(oldp+1361,(vlTOPp->io_SRamCtrl_ramOut_nwe));
        tracep->chgBit(oldp+1362,(vlTOPp->io_SRamCtrl_ramOut_nlb));
        tracep->chgBit(oldp+1363,(vlTOPp->io_SRamCtrl_ramOut_nub));
        tracep->chgCData(oldp+1364,(vlTOPp->io_Keys_key),4);
        tracep->chgBit(oldp+1365,(vlTOPp->io_UartCmp_rx));
        tracep->chgSData(oldp+1366,(vlTOPp->io_SRamCtrl_ramIn_din),16);
        tracep->chgIData(oldp+1367,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG) 
                                      & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_1) 
                                         == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg)))
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_2
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg])),32);
        tracep->chgIData(oldp+1368,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG) 
                                      & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_1) 
                                         == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg)))
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_2
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg])),32);
        tracep->chgIData(oldp+1369,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseNext),32);
        tracep->chgBit(oldp+1370,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitNext));
        tracep->chgIData(oldp+1371,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseNext),32);
        tracep->chgBit(oldp+1372,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmNext));
        tracep->chgBit(oldp+1373,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheNext));
        tracep->chgIData(oldp+1374,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__mem
                                    [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg]),32);
        tracep->chgIData(oldp+1375,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__mem
                                    [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg]),32);
        tracep->chgIData(oldp+1376,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcNext),30);
        tracep->chgBit(oldp+1377,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpmNext));
        tracep->chgBit(oldp+1378,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCacheNext));
        tracep->chgSData(oldp+1379,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseNext),11);
        tracep->chgIData(oldp+1380,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocNext),32);
        tracep->chgCData(oldp+1381,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue_io_enq_bits),8);
        tracep->chgCData(oldp+1382,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Cmd),3);
        tracep->chgIData(oldp+1383,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Addr),32);
        tracep->chgIData(oldp+1384,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Data),32);
    }
}

void VPatmos::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VPatmos__Syms* __restrict vlSymsp = static_cast<VPatmos__Syms*>(userp);
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
