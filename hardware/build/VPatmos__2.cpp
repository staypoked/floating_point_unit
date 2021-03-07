// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPatmos.h for the primary calling header

#include "VPatmos.h"
#include "VPatmos__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VPatmos::_sequent__TOP__6(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_sequent__TOP__6\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__do_deq 
        = (((2U == (IData)(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd)) 
            & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
               >> 2U)) & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__empty)));
    vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_411 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xret)
            ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc_io_ena)
                ? (QData)((IData)((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg 
                                                  >> 2U))))
                : vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_409)
            : vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_409);
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
            ? (((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_M_Cmd)) 
                & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_14))
                ? (0xfffffff0U & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr)
                : (0xfffffff0U & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr))
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_slave_M_Cmd 
        = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
            ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg))
                ? 1U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Cmd))
            : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Cmd));
    if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMTS) 
         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_263 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_152
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_152
                    : ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0
                        : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_152)));
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_262 
            = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_153
                : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func))
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0
                    : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_153));
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_263 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_152;
        vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_262 
            = vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT___GEN_153;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_117 
        = ((0x75U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_117)
            : ((0x74U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_116)
                : ((0x73U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_115)
                    : ((0x72U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_114)
                        : ((0x71U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_113)
                            : ((0x70U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_112)
                                : ((0x6fU == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_111)
                                    : ((0x6eU == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_110)
                                        : ((0x6dU == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_109)
                                            : ((0x6cU 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_108)
                                                : (
                                                   (0x6bU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_107)
                                                    : 
                                                   ((0x6aU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_106)
                                                     : 
                                                    ((0x69U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_105)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_104))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_slave_M_Cmd) 
           | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ocp_port_M_Cmd));
    vlTOPp->Patmos__DOT__cores_0__DOT___T_2 = ((0U 
                                                != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_slave_M_Cmd)) 
                                               | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__REG));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_130 
        = ((0x82U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_130)
            : ((0x81U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_129)
                : ((0x80U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_128)
                    : ((0x7fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_127)
                        : ((0x7eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_126)
                            : ((0x7dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_125)
                                : ((0x7cU == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_124)
                                    : ((0x7bU == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_123)
                                        : ((0x7aU == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_122)
                                            : ((0x79U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_121)
                                                : (
                                                   (0x78U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_120)
                                                    : 
                                                   ((0x77U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_119)
                                                     : 
                                                    ((0x76U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_118)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_117))))))))))))));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_51 = ((3U 
                                                   == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                   ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_49)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd))
                                                     ? 
                                                    ((1U 
                                                      == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd))
                                                      ? 1U
                                                      : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))
                                                     : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))
                                                    : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg)));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_47 = ((2U 
                                                   == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                    ? 3U
                                                    : 1U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                    ? 2U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd))
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd))
                                                       ? 4U
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd))
                                                        ? 1U
                                                        : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg)))
                                                      : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                     : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))));
    vlTOPp->Patmos__DOT__cores_0__DOT___T_3 = ((0U 
                                                == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ocp_port_M_Cmd)) 
                                               & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT___T_2));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_143 
        = ((0x8fU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_143)
            : ((0x8eU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_142)
                : ((0x8dU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_141)
                    : ((0x8cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_140)
                        : ((0x8bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_139)
                            : ((0x8aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_138)
                                : ((0x89U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_137)
                                    : ((0x88U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_136)
                                        : ((0x87U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_135)
                                            : ((0x86U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_134)
                                                : (
                                                   (0x85U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_133)
                                                    : 
                                                   ((0x84U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_132)
                                                     : 
                                                    ((0x83U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_131)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_130))))))))))))));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_52 = ((3U 
                                                   == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))
                                                    ? 0U
                                                    : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_47))
                                                   : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_47));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_37 = (0xfffffU 
                                                  & ((2U 
                                                      == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + vlTOPp->Patmos__DOT__ramCtrl__DOT__mAddrReg)
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                       ? 
                                                      ((0U 
                                                        != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd))
                                                        ? 
                                                       (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT___T_3)
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
                                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55))) 
                                                        >> 1U)
                                                        : vlTOPp->Patmos__DOT__ramCtrl__DOT__mAddrReg)
                                                       : vlTOPp->Patmos__DOT__ramCtrl__DOT__mAddrReg)));
    if (vlTOPp->Patmos__DOT__cores_0__DOT___T_3) {
        vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Data 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Data
                : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                    ? 0U : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                             << 0x18U) | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1)));
        vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataByteEn 
            = ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg) 
                    == (3U & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr 
                              >> 2U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_ByteEn)
                    : 0U) : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                              ? 0U : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
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
                                       ? 0xfU : 0U)));
        vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataValid 
            = (((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state)) 
                | ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)) 
                   & ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                      & ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                         | (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)))))) 
               & 1U);
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Data = 0U;
        vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataByteEn = 0xfU;
        vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataValid = 0U;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_156 
        = ((0x9cU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_156)
            : ((0x9bU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_155)
                : ((0x9aU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_154)
                    : ((0x99U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_153)
                        : ((0x98U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_152)
                            : ((0x97U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_151)
                                : ((0x96U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_150)
                                    : ((0x95U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_149)
                                        : ((0x94U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_148)
                                            : ((0x93U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_147)
                                                : (
                                                   (0x92U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_146)
                                                    : 
                                                   ((0x91U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_145)
                                                     : 
                                                    ((0x90U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_144)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_143))))))))))))));
    if ((0U == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))) {
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_23 
            = (0xffffU & vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Data);
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_25 
            = (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Data 
                          >> 0x10U));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_22 
            = (3U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataByteEn));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_24 
            = (3U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataByteEn) 
                     >> 2U));
    } else {
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_23 
            = (0xffffU & (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_data));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_25 
            = (0xffffU & (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_data));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_22 
            = (3U & (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_byteEna));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_24 
            = (3U & (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_byteEna));
    }
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_115 = (
                                                   (4U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg)) 
                                                   & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataValid) 
                                                      & (3U 
                                                         == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_114 = (
                                                   (4U 
                                                    == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                    ? 
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataValid)
                                                     ? 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg))
                                                      ? 5U
                                                      : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_52))
                                                     : 4U)
                                                    : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_52));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_169 
        = ((0xa9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_169)
            : ((0xa8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_168)
                : ((0xa7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_167)
                    : ((0xa6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_166)
                        : ((0xa5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_165)
                            : ((0xa4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_164)
                                : ((0xa3U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_163)
                                    : ((0xa2U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_162)
                                        : ((0xa1U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_161)
                                            : ((0xa0U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_160)
                                                : (
                                                   (0x9fU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_159)
                                                    : 
                                                   ((0x9eU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_158)
                                                     : 
                                                    ((0x9dU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_157)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_156))))))))))))));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_205 = (
                                                   (7U 
                                                    > (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg)) 
                                                   | ((5U 
                                                       == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                       ? (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_136)
                                                       : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_115)));
    vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_206 = (
                                                   (7U 
                                                    > (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))
                                                     ? 
                                                    ((1U 
                                                      > (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__waitCountReg))
                                                      ? 5U
                                                      : 6U)
                                                     : (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_114)));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_182 
        = ((0xb6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_182)
            : ((0xb5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_181)
                : ((0xb4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_180)
                    : ((0xb3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_179)
                        : ((0xb2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_178)
                            : ((0xb1U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_177)
                                : ((0xb0U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_176)
                                    : ((0xafU == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_175)
                                        : ((0xaeU == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_174)
                                            : ((0xadU 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_173)
                                                : (
                                                   (0xacU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_172)
                                                    : 
                                                   ((0xabU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_171)
                                                     : 
                                                    ((0xaaU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_170)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_169))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_195 
        = ((0xc3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_195)
            : ((0xc2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_194)
                : ((0xc1U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_193)
                    : ((0xc0U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_192)
                        : ((0xbfU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_191)
                            : ((0xbeU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_190)
                                : ((0xbdU == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_189)
                                    : ((0xbcU == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_188)
                                        : ((0xbbU == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_187)
                                            : ((0xbaU 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_186)
                                                : (
                                                   (0xb9U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_185)
                                                    : 
                                                   ((0xb8U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_184)
                                                     : 
                                                    ((0xb7U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_183)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_182))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_208 
        = ((0xd0U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_208)
            : ((0xcfU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_207)
                : ((0xceU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_206)
                    : ((0xcdU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_205)
                        : ((0xccU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_204)
                            : ((0xcbU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_203)
                                : ((0xcaU == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_202)
                                    : ((0xc9U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_201)
                                        : ((0xc8U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_200)
                                            : ((0xc7U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_199)
                                                : (
                                                   (0xc6U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_198)
                                                    : 
                                                   ((0xc5U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_197)
                                                     : 
                                                    ((0xc4U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_196)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_195))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_221 
        = ((0xddU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_221)
            : ((0xdcU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_220)
                : ((0xdbU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_219)
                    : ((0xdaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_218)
                        : ((0xd9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_217)
                            : ((0xd8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_216)
                                : ((0xd7U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_215)
                                    : ((0xd6U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_214)
                                        : ((0xd5U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_213)
                                            : ((0xd4U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_212)
                                                : (
                                                   (0xd3U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_211)
                                                    : 
                                                   ((0xd2U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_210)
                                                     : 
                                                    ((0xd1U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_209)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_208))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_234 
        = ((0xeaU == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_234)
            : ((0xe9U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_233)
                : ((0xe8U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_232)
                    : ((0xe7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_231)
                        : ((0xe6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_230)
                            : ((0xe5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_229)
                                : ((0xe4U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_228)
                                    : ((0xe3U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_227)
                                        : ((0xe2U == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_226)
                                            : ((0xe1U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_225)
                                                : (
                                                   (0xe0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_224)
                                                    : 
                                                   ((0xdfU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_223)
                                                     : 
                                                    ((0xdeU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_222)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_221))))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_247 
        = ((0xf7U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                               >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_247)
            : ((0xf6U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                   >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_246)
                : ((0xf5U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 4U))) ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_245)
                    : ((0xf4U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                           >> 4U)))
                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_244)
                        : ((0xf3U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 4U)))
                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_243)
                            : ((0xf2U == (0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                   >> 4U)))
                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_242)
                                : ((0xf1U == (0xffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                 >> 4U)))
                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_241)
                                    : ((0xf0U == (0xffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                     >> 4U)))
                                        ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_240)
                                        : ((0xefU == 
                                            (0xffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 4U)))
                                            ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_239)
                                            : ((0xeeU 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 4U)))
                                                ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_238)
                                                : (
                                                   (0xedU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                        >> 4U)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_237)
                                                    : 
                                                   ((0xecU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                         >> 4U)))
                                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_236)
                                                     : 
                                                    ((0xebU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                          >> 4U)))
                                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_235)
                                                      : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_234))))))))))))));
}

VL_INLINE_OPT void VPatmos::_multiclk__TOP__9(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_multiclk__TOP__9\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__instrEvenReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd 
            = vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__instrOddReg;
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven 
            = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG) 
                & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_1) 
                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg)))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_2
                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__mem
               [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg]);
        vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd 
            = (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG) 
                & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_1) 
                   == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg)))
                ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_2
                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__mem
               [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg]);
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_b 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpm)
            ? ((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__mem_MPORT_1_data
                : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__mem_MPORT_1_data)
            : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCache)
                ? ((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven
                    : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd)
                : ((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                    ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_even
                    : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_odd)));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___T_31 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCache)
            ? ((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd
                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven)
            : ((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_odd
                : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_even));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a 
        = ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpm)
            ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__instr_a_ispm
            : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___T_31);
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next 
        = (0x3fffffffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet)
                           ? (0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc)
                           : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exfe_doBranch)
                               ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target
                               : ((0x80000000U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                   ? ((IData)(2U) + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                   : ((IData)(1U) + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcNext 
        = vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next;
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_inc 
        = (0x3fffffffU & ((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next)
                           ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet)
                               ? (0xfffU & ((IData)(2U) 
                                            + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc))
                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exfe_doBranch)
                                   ? ((IData)(2U) + vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target)
                                   : ((0x80000000U 
                                       & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                       ? ((IData)(4U) 
                                          + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                       : ((IData)(3U) 
                                          + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg))))
                           : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next));
}

VL_INLINE_OPT void VPatmos::_combo__TOP__10(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_combo__TOP__10\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena) 
         & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
            = (1U | (0x3ffffffeU & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next));
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
            = (0x3ffffffeU & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_inc);
    } else {
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
            = vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOddReg;
        vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
            = vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEvenReg;
    }
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14 
        = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
            ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitReg)
                ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd
                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrOddReg)
            : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrOddReg);
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_532 
        = ((0xdU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                               >> 1U))) ? 0x2520037U
            : ((0xcU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                   >> 1U))) ? 0x2c5f482U
                : ((0xbU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                       >> 1U))) ? 0x7ff024U
                    : ((0xaU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                           >> 1U)))
                        ? 0x4800000U : ((9U == (0x1ffU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                   >> 1U)))
                                         ? 0x400000U
                                         : ((8U == 
                                             (0x1ffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                 >> 1U)))
                                             ? 0x4ac22085U
                                             : ((7U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0xcfc20000U
                                                 : 
                                                ((6U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0xcfc40000U
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x400000U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0xf0010000U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x2402026U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x3e1000U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x87c40000U
                                                       : 0x87c20000U)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13 
        = ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
            ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitReg)
                ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven
                : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrEvenReg)
            : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrEvenReg);
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_20 
        = ((0xdU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                               >> 1U))) ? 0x2c5fd08U
            : ((0xcU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                   >> 1U))) ? 0x2520038U
                : ((0xbU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                       >> 1U))) ? 0x4acU
                    : ((0xaU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                           >> 1U)))
                        ? 0x4000017U : ((9U == (0x1ffU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                   >> 1U)))
                                         ? 0x400000U
                                         : ((8U == 
                                             (0x1ffU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                 >> 1U)))
                                             ? 0x80000000U
                                             : ((7U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0xf0010000U
                                                 : 
                                                ((6U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x2021062U
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x2821085U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x87c20000U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x2402025U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x20800U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x20700U
                                                       : 0x54U)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
            ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd
            : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14);
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_545 
        = ((0x1aU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x400000U
            : ((0x19U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0xf0000000U
                : ((0x18U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x2c60004U
                    : ((0x17U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0xcbffffaU : ((0x16U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x2041100U
                                         : ((0x15U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x2842083U
                                             : ((0x14U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x87c40000U
                                                 : 
                                                ((0x13U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x4403e8U
                                                  : 
                                                 ((0x12U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0xf0020000U
                                                   : 
                                                  ((0x11U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x2c5fc87U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x2c5fb85U
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x2c5fa83U
                                                      : 
                                                     ((0xeU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x2520030U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_532)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68 
        = ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))
            ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven
            : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13);
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_33 
        = ((0x1aU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x2821080U
            : ((0x19U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x87c20000U
                : ((0x18U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x2c60005U
                    : ((0x17U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x2022062U : ((0x16U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0x400000U
                                         : ((0x15U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0xf0020000U
                                             : ((0x14U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x2022081U
                                                 : 
                                                ((0x13U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x2821083U
                                                  : 
                                                 ((0x12U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x87c20000U
                                                   : 
                                                  ((0x11U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2c5fc06U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x2c5fb04U
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x2c5f480U
                                                      : 
                                                     ((0xeU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x2c5f481U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_20)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_558 
        = ((0x27U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0xc21004U
            : ((0x26U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x2821080U
                : ((0x25U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x87c20000U
                    : ((0x24U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x2c61006U : ((0x23U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x400000U
                                         : ((0x22U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x2c62007U
                                             : ((0x21U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x400000U
                                                 : 
                                                ((0x20U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x2c62188U
                                                  : 
                                                 ((0x1fU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x460001U
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x2c62009U
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x400000U
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0xf0000000U
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x4c800023U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_545)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_46 
        = ((0x27U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x400000U
            : ((0x26U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0xf0000000U
                : ((0x25U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x40001U
                    : ((0x24U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0xc21004U : ((0x23U == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                        ? 0x2821080U
                                        : ((0x22U == 
                                            (0x1ffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                >> 1U)))
                                            ? 0xc42004U
                                            : ((0x21U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                                ? 0x2841080U
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0xc42004U
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x2841080U
                                                     : 
                                                    ((0x1eU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0xc42004U
                                                      : 
                                                     ((0x1dU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x2841080U
                                                       : 
                                                      ((0x1cU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0x87c20000U
                                                        : 
                                                       ((0x1bU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0x2021031U
                                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_33)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_571 
        = ((0x34U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x87c60000U
            : ((0x33U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x2c61006U
                : ((0x32U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x2c61188U
                    : ((0x31U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x2c61009U : ((0x30U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x40000U
                                         : ((0x2fU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0xcc00010U
                                             : ((0x2eU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x400000U
                                                 : 
                                                ((0x2dU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0xf0000000U
                                                  : 
                                                 ((0x2cU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x480001dU
                                                   : 
                                                  ((0x2bU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x2021161U
                                                    : 
                                                   ((0x2aU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x2820185U
                                                     : 
                                                    ((0x29U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x20210e1U
                                                      : 
                                                     ((0x28U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x2820185U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_558)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_59 
        = ((0x34U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x20010U
            : ((0x33U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2c61007U
                : ((0x32U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x460001U
                    : ((0x31U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0xc22004U : ((0x30U == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                        ? 0x20010U : 
                                       ((0x2fU == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0x2022060U
                                         : ((0x2eU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x2842082U
                                             : ((0x2dU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x87c40000U
                                                 : 
                                                ((0x2cU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0xcbffffdU
                                                  : 
                                                 ((0x2bU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x400000U
                                                   : 
                                                  ((0x2aU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0xcbffff7U
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x400000U
                                                     : 
                                                    ((0x28U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x2c61109U
                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_46)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_584 
        = ((0x41U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0xf0000000U
            : ((0x40U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x2c22180U
                : ((0x3fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x2862180U
                    : ((0x3eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x87c4100dU : ((0x3dU == 
                                          (0x1ffU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                                          ? 0x20000U
                                          : ((0x3cU 
                                              == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                              ? 0x400000U
                                              : ((0x3bU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0xf0000000U
                                                  : 
                                                 ((0x3aU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x2c60084U
                                                   : 
                                                  ((0x39U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x2c60105U
                                                    : 
                                                   ((0x38U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0xcfffffeU
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x421001U
                                                      : 
                                                     ((0x36U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x20221b4U
                                                       : 
                                                      ((0x35U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0x2863082U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_571)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_72 
        = ((0x41U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x87c40000U
            : ((0x40U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x400000U
                : ((0x3fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x10000U
                    : ((0x3eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0xc80000dU : ((0x3dU == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0x2021264U
                                         : ((0x3cU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x282108cU
                                             : ((0x3bU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x87c20000U
                                                 : 
                                                ((0x3aU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x4000143U
                                                  : 
                                                 ((0x39U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x40001U
                                                   : 
                                                  ((0x38U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2021031U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0xcbffff4U
                                                     : 
                                                    ((0x36U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x42001U
                                                      : 
                                                     ((0x35U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0xf0000000U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_59)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_597 
        = ((0x4eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0xc80000cU
            : ((0x4dU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x20001U
                : ((0x4cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0xf0000000U
                    : ((0x4bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x2c60085U : ((0x4aU == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x2c61109U
                                         : ((0x49U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x4c00016U
                                             : ((0x48U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x2821080U
                                                 : 
                                                ((0x47U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x87c20000U
                                                  : 
                                                 ((0x46U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x2021031U
                                                   : 
                                                  ((0x45U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x2821080U
                                                    : 
                                                   ((0x44U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x87c20000U
                                                     : 
                                                    ((0x43U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x2021134U
                                                      : 
                                                     ((0x42U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x21001U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_584)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_85 
        = ((0x4eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x2022164U
            : ((0x4dU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2842082U
                : ((0x4cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x87c40000U
                    : ((0x4bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x20002U : ((0x4aU == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                       ? 0xc21004U : 
                                      ((0x49U == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                        ? 0x40002U : 
                                       ((0x48U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0xf0000000U
                                         : ((0x47U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x4c800008U
                                             : ((0x46U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x400000U
                                                 : 
                                                ((0x45U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0xf0000000U
                                                  : 
                                                 ((0x44U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0xcbffff5U
                                                   : 
                                                  ((0x43U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x1042002U
                                                    : 
                                                   ((0x42U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x284208cU
                                                     : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_72)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_610 
        = ((0x5bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x400000U
            : ((0x5aU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x80000000U
                : ((0x59U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0xf0010000U
                    : ((0x58U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x20220b2U : ((0x57U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x2821085U
                                         : ((0x56U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x87c20000U
                                             : ((0x55U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x2022060U
                                                 : 
                                                ((0x54U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x2840184U
                                                  : 
                                                 ((0x53U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x2021134U
                                                   : 
                                                  ((0x52U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x2842082U
                                                    : 
                                                   ((0x51U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x87c40000U
                                                     : 
                                                    ((0x50U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x2022161U
                                                      : 
                                                     ((0x4fU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x2842189U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_597)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_98 
        = ((0x5bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x4ac22085U
            : ((0x5aU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0xcfc20000U
                : ((0x59U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0xcfc40000U
                    : ((0x58U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x440001U : ((0x57U == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                        ? 0xf0010000U
                                        : ((0x56U == 
                                            (0x1ffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                >> 1U)))
                                            ? 0xc800023U
                                            : ((0x55U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                                ? 0x200ffU
                                                : (
                                                   (0x54U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0xcbffff6U
                                                    : 
                                                   ((0x53U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x21001U
                                                     : 
                                                    ((0x52U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0xf0000000U
                                                      : 
                                                     ((0x51U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0xcbffffcU
                                                       : 
                                                      ((0x50U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0x400000U
                                                        : 
                                                       ((0x4fU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0xc41004U
                                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_85)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_623 
        = ((0x68U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x2842080U
            : ((0x67U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x87c40000U
                : ((0x66U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x2c62088U
                    : ((0x65U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x400000U : ((0x64U == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                        ? 0xf0000000U
                                        : ((0x63U == 
                                            (0x1ffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                >> 1U)))
                                            ? 0x400000U
                                            : ((0x62U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                                ? 0x4ac23105U
                                                : (
                                                   (0x61U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0xcfc40000U
                                                    : 
                                                   ((0x60U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0xcfc60000U
                                                     : 
                                                    ((0x5fU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x400000U
                                                      : 
                                                     ((0x5eU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0xf0010000U
                                                       : 
                                                      ((0x5dU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0x6001004U
                                                        : 
                                                       ((0x5cU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0x2820184U
                                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_610)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_111 
        = ((0x68U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0xf0000000U
            : ((0x67U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x1c210ffU
                : ((0x66U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0xc42004U
                    : ((0x65U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x2842080U : ((0x64U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0x87c40000U
                                         : ((0x63U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x400000U
                                             : ((0x62U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x80000000U
                                                 : 
                                                ((0x61U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0xf0010000U
                                                  : 
                                                 ((0x60U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x2022062U
                                                   : 
                                                  ((0x5fU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2842085U
                                                    : 
                                                   ((0x5eU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x87c40000U
                                                     : 
                                                    ((0x5dU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x400000U
                                                      : 
                                                     ((0x5cU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x400000U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_98)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_636 
        = ((0x75U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0xc800011U
            : ((0x74U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x40001U
                : ((0x73U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0xf0000000U
                    : ((0x72U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x2c61009U : ((0x71U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x4c00048U
                                         : ((0x70U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0xf0000000U
                                             : ((0x6fU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0xcbffff7U
                                                 : 
                                                ((0x6eU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x400000U
                                                  : 
                                                 ((0x6dU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x2c61109U
                                                   : 
                                                  ((0x6cU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x400000U
                                                    : 
                                                   ((0x6bU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0xf0000000U
                                                     : 
                                                    ((0x6aU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x40004U
                                                      : 
                                                     ((0x69U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x2022031U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_623)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_124 
        = ((0x75U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x2023164U
            : ((0x74U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2863082U
                : ((0x73U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x87c60000U
                    : ((0x72U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0xc21004U : ((0x71U == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                        ? 0x2821080U
                                        : ((0x70U == 
                                            (0x1ffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                >> 1U)))
                                            ? 0x87c20000U
                                            : ((0x6fU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                                ? 0x2021261U
                                                : (
                                                   (0x6eU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2820185U
                                                    : 
                                                   ((0x6dU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0xc21004U
                                                     : 
                                                    ((0x6cU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x2821080U
                                                      : 
                                                     ((0x6bU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x87c20000U
                                                       : 
                                                      ((0x6aU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0x4c800012U
                                                        : 
                                                       ((0x69U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0x400000U
                                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_111)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_649 
        = ((0x82U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x87c40000U
            : ((0x81U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0xf0080000U
                : ((0x80U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x4cbffffbU
                    : ((0x7fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x400000U : ((0x7eU == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                        ? 0xf0080000U
                                        : ((0x7dU == 
                                            (0x1ffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                >> 1U)))
                                            ? 0xcbffff1U
                                            : ((0x7cU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                                ? 0x42001U
                                                : (
                                                   (0x7bU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0xf0000000U
                                                    : 
                                                   ((0x7aU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0xcbffffcU
                                                     : 
                                                    ((0x79U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x400000U
                                                      : 
                                                     ((0x78U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0xc62004U
                                                       : 
                                                      ((0x77U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0x2023060U
                                                        : 
                                                       ((0x76U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0x2863189U
                                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_636)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_137 
        = ((0x82U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x2c22001U
            : ((0x81U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x87c40000U
                : ((0x80U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x2022036U
                    : ((0x7fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x2842080U : ((0x7eU == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0x87c40000U
                                         : ((0x7dU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x20221b4U
                                             : ((0x7cU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x2863082U
                                                 : 
                                                ((0x7bU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x87c60000U
                                                  : 
                                                 ((0x7aU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x2023261U
                                                   : 
                                                  ((0x79U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2863189U
                                                    : 
                                                   ((0x78U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0xc800006U
                                                     : 
                                                    ((0x77U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x400000U
                                                      : 
                                                     ((0x76U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0xc62004U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_124)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_662 
        = ((0x8fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0xc80000cU
            : ((0x8eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x20001U
                : ((0x8dU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0xf0000000U
                    : ((0x8cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x2c60085U : ((0x8bU == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x2c22081U
                                         : ((0x8aU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x87c40000U
                                             : ((0x89U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x2022036U
                                                 : 
                                                ((0x88U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x2842080U
                                                  : 
                                                 ((0x87U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x87c40000U
                                                   : 
                                                  ((0x86U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0xf0080000U
                                                    : 
                                                   ((0x85U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x40078U
                                                     : 
                                                    ((0x84U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x2022036U
                                                      : 
                                                     ((0x83U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x2842080U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_649)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_150 
        = ((0x8fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x2022164U
            : ((0x8eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2842082U
                : ((0x8dU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x87c40000U
                    : ((0x8cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x20004U : ((0x8bU == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                       ? 0xf0080000U
                                       : ((0x8aU == 
                                           (0x1ffU 
                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                               >> 1U)))
                                           ? 0x4cbffffbU
                                           : ((0x89U 
                                               == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                               ? 0x400000U
                                               : ((0x88U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0xf0080000U
                                                   : 
                                                  ((0x87U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2c23101U
                                                    : 
                                                   ((0x86U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x87c60000U
                                                     : 
                                                    ((0x85U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x4cbffffbU
                                                      : 
                                                     ((0x84U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x400000U
                                                       : 
                                                      ((0x83U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0xf0080000U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_137)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_675 
        = ((0x9cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x2409028U
            : ((0x9bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x293f102U
                : ((0x9aU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x2b3f107U
                    : ((0x99U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x2aff105U : ((0x98U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x2c22085U
                                         : ((0x97U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x2c22085U
                                             : ((0x96U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x20001U
                                                 : 
                                                ((0x95U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x87c40000U
                                                  : 
                                                 ((0x94U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x2021134U
                                                   : 
                                                  ((0x93U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x2842082U
                                                    : 
                                                   ((0x92U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x87c40000U
                                                     : 
                                                    ((0x91U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x2022260U
                                                      : 
                                                     ((0x90U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x2842189U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_662)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_163 
        = ((0x9cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x2abf103U
            : ((0x9bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2b5f108U
                : ((0x9aU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x2b1f106U
                    : ((0x99U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x2adf104U : ((0x98U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0x20002U
                                         : ((0x97U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x4400001U
                                             : ((0x96U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0xf0010000U
                                                 : 
                                                ((0x95U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0xcbffff6U
                                                  : 
                                                 ((0x94U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x21001U
                                                   : 
                                                  ((0x93U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0xf0000000U
                                                    : 
                                                   ((0x92U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0xcbffffcU
                                                     : 
                                                    ((0x91U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x400000U
                                                      : 
                                                     ((0x90U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0xc41004U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_150)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_688 
        = ((0xa9U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x2c5fd0dU
            : ((0xa8U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x2c5fc0bU
                : ((0xa7U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x2c5fb09U
                    : ((0xa6U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x2c5f485U : ((0xa5U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x2c5f486U
                                         : ((0xa4U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x2c5fe0fU
                                             : ((0xa3U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x20000U
                                                 : 
                                                ((0xa2U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x2c5f487U
                                                  : 
                                                 ((0xa1U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x7ff040U
                                                   : 
                                                  ((0xa0U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x3ff024U
                                                    : 
                                                   ((0x9fU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x20000U
                                                     : 
                                                    ((0x9eU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x293f100U
                                                      : 
                                                     ((0x9dU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x400000U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_675)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_176 
        = ((0xa9U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x2c5fc8cU
            : ((0xa8U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2c5fb8aU
                : ((0xa7U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x2c5fa88U
                    : ((0xa6U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x2520030U : ((0xa5U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0x2520037U
                                         : ((0xa4U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x2c41000U
                                             : ((0xa3U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x87c20000U
                                                 : 
                                                ((0xa2U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x2520038U
                                                  : 
                                                 ((0xa1U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x340U
                                                   : 
                                                  ((0xa0U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2409020U
                                                    : 
                                                   ((0x9fU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x6400000U
                                                     : 
                                                    ((0x9eU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x2409027U
                                                      : 
                                                     ((0x9dU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x293f101U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_163)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_701 
        = ((0xb6U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x2c5f002U
            : ((0xb5U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x340000U
                : ((0xb4U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x2c5f003U
                    : ((0xb3U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x80000U : ((0xb2U == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                       ? 0x2c42080U
                                       : ((0xb1U == 
                                           (0x1ffU 
                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                               >> 1U)))
                                           ? 0x87c40000U
                                           : ((0xb0U 
                                               == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                               ? 0x2021134U
                                               : ((0xafU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x2c42080U
                                                   : 
                                                  ((0xaeU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x400000U
                                                    : 
                                                   ((0xadU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x20000U
                                                     : 
                                                    ((0xacU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x2d41100U
                                                      : 
                                                     ((0xabU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x20004U
                                                       : 
                                                      ((0xaaU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0x20000U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_688)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_189 
        = ((0xb6U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x300000U
            : ((0xb5U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2a0000U
                : ((0xb4U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x360000U
                    : ((0xb3U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x460001U : ((0xb2U == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                        ? 0x20404U : 
                                       ((0xb1U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0xcbffff4U
                                         : ((0xb0U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x403beU
                                             : ((0xafU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x21001U
                                                 : 
                                                ((0xaeU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x2822100U
                                                  : 
                                                 ((0xadU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x87c40000U
                                                   : 
                                                  ((0xacU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x40020U
                                                    : 
                                                   ((0xabU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x87c21000U
                                                     : 
                                                    ((0xaaU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x2c5fd8eU
                                                      : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_176)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_714 
        = ((0xc3U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0xc57008U
            : ((0xc2U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x2022b34U
                : ((0xc1U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x60000U
                    : ((0xc0U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0xcfffff6U : ((0xbfU == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x440001U
                                         : ((0xbeU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x2c21d80U
                                             : ((0xbdU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x87c20000U
                                                 : 
                                                ((0xbcU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x2e3000U
                                                  : 
                                                 ((0xbbU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x381000U
                                                   : 
                                                  ((0xbaU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x40000U
                                                    : 
                                                   ((0xb9U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x420001U
                                                     : 
                                                    ((0xb8U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x20408U
                                                      : 
                                                     ((0xb7U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x2c5f001U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_701)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_202 
        = ((0xc3U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0xc800005U
            : ((0xc2U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x40003U
                : ((0xc1U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x80000U
                    : ((0xc0U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x203c060U : ((0xbfU == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                         ? 0x2c4000U
                                         : ((0xbeU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0xf0090000U
                                             : ((0xbdU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x4400214U
                                                 : 
                                                ((0xbcU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x322000U
                                                  : 
                                                 ((0xbbU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x20000U
                                                   : 
                                                  ((0xbaU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2c5f084U
                                                    : 
                                                   ((0xb9U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x2c41000U
                                                     : 
                                                    ((0xb8U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x87c20000U
                                                      : 
                                                     ((0xb7U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x2c5f000U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_189)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_727 
        = ((0xd0U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x2021db4U
            : ((0xcfU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x20a1286U
                : ((0xceU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x28bf103U
                    : ((0xcdU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x206300bU : ((0xccU == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0xcbffff7U
                                         : ((0xcbU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x463001U
                                             : ((0xcaU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x9044001U
                                                 : 
                                                ((0xc9U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0xedb88320U
                                                  : 
                                                 ((0xc8U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x2024036U
                                                   : 
                                                  ((0xc7U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x60008U
                                                    : 
                                                   ((0xc6U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0xc800025U
                                                     : 
                                                    ((0xc5U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x5c004U
                                                      : 
                                                     ((0xc4U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x2061106U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_714)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_215 
        = ((0xd0U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x20004U
            : ((0xcfU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2021183U
                : ((0xceU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x1c63018U
                    : ((0xcdU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0xc75003U : ((0xccU == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                        ? 0x2023031U
                                        : ((0xcbU == 
                                            (0x1ffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                >> 1U)))
                                            ? 0x82000U
                                            : ((0xcaU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                                ? 0x202104aU
                                                : (
                                                   (0xc9U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x87c42002U
                                                    : 
                                                   ((0xc8U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x1044001U
                                                     : 
                                                    ((0xc7U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x2081c82U
                                                      : 
                                                     ((0xc6U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x2022b35U
                                                       : 
                                                      ((0xc5U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0x59000U
                                                        : 
                                                       ((0xc4U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0x4c0005dU
                                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_202)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_740 
        = ((0xddU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x400000U
            : ((0xdcU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x4c0000cU
                : ((0xdbU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0xfffffffcU
                    : ((0xdaU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x2035c00U : ((0xd9U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0x59000U
                                         : ((0xd8U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x2c5f284U
                                             : ((0xd7U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x4c00012U
                                                 : 
                                                ((0xd6U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x25000U
                                                  : 
                                                 ((0xd5U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0xf0008010U
                                                   : 
                                                  ((0xd4U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0xc800018U
                                                    : 
                                                   ((0xd3U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x20004U
                                                     : 
                                                    ((0xd2U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x2023261U
                                                      : 
                                                     ((0xd1U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x289f102U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_727)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_228 
        = ((0xddU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x283f101U
            : ((0xdcU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2c61280U
                : ((0xdbU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x87c21007U
                    : ((0xdaU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x77000U : ((0xd9U == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                       ? 0x4c00033U
                                       : ((0xd8U == 
                                           (0x1ffU 
                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                               >> 1U)))
                                           ? 0x400000U
                                           : ((0xd7U 
                                               == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                               ? 0x6003005U
                                               : ((0xd6U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x2861100U
                                                   : 
                                                  ((0xd5U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x87c3b00dU
                                                    : 
                                                   ((0xd4U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x2021db4U
                                                     : 
                                                    ((0xd3U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0xc800013U
                                                      : 
                                                     ((0xd2U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x75001U
                                                       : 
                                                      ((0xd1U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0xcc00013U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_215)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_753 
        = ((0xeaU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0xfffffffcU
            : ((0xe9U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0xcfffffdU
                : ((0xe8U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0x63004U
                    : ((0xe7U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x2c5f202U : ((0xe6U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                         ? 0xcc0000aU
                                         : ((0xe5U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0xfffffffcU
                                             : ((0xe4U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x64003U
                                                 : 
                                                ((0xe3U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x20220c7U
                                                  : 
                                                 ((0xe2U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x2023230U
                                                   : 
                                                  ((0xe1U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x37b001U
                                                    : 
                                                   ((0xe0U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x283f101U
                                                     : 
                                                    ((0xdfU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x4800002U
                                                      : 
                                                     ((0xdeU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x4800004U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_740)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_241 
        = ((0xeaU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x87c84007U
            : ((0xe9U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2023d34U
                : ((0xe8U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x2098180U
                    : ((0xe7U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x400000U : ((0xe6U == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                        ? 0x203a1b5U
                                        : ((0xe5U == 
                                            (0x1ffU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                >> 1U)))
                                            ? 0x87c63007U
                                            : ((0xe4U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                                ? 0x4c800015U
                                                : (
                                                   (0xe3U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x205b2e0U
                                                    : 
                                                   ((0xe2U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x60000U
                                                     : 
                                                    ((0xe1U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x400000U
                                                      : 
                                                     ((0xe0U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x345000U
                                                       : 
                                                      ((0xdfU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0x305000U
                                                        : 
                                                       ((0xdeU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0x85000U
                                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_228)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_766 
        = ((0xf7U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                >> 1U))) ? 0x4cbffffbU
            : ((0xf6U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                    >> 1U))) ? 0x400000U
                : ((0xf5U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                        >> 1U))) ? 0xf0080000U
                    : ((0xf4U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                        ? 0x3c000U : ((0xf3U == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                       ? 0xcffff90U
                                       : ((0xf2U == 
                                           (0x1ffU 
                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                               >> 1U)))
                                           ? 0x3c003U
                                           : ((0xf1U 
                                               == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                               ? 0x2c5f081U
                                               : ((0xf0U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x80a0000U
                                                   : 
                                                  ((0xefU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x1c75003U
                                                    : 
                                                   ((0xeeU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x2c5f202U
                                                     : 
                                                    ((0xedU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x63001U
                                                      : 
                                                     ((0xecU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x287f100U
                                                       : 
                                                      ((0xebU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0x360002U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_753)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_254 
        = ((0xf7U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                >> 1U))) ? 0x2021036U
            : ((0xf6U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                    >> 1U))) ? 0x2821080U
                : ((0xf5U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                        >> 1U))) ? 0x87c20000U
                    : ((0xf4U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                        ? 0x96001U : ((0xf3U == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                       ? 0x20360b1U
                                       : ((0xf2U == 
                                           (0x1ffU 
                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                               >> 1U)))
                                           ? 0x77000U
                                           : ((0xf1U 
                                               == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                               ? 0x2c5f283U
                                               : ((0xf0U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x2023060U
                                                   : 
                                                  ((0xefU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2a3000U
                                                    : 
                                                   ((0xeeU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x2c5f180U
                                                     : 
                                                    ((0xedU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x4c00005U
                                                      : 
                                                     ((0xecU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x2a0000U
                                                       : 
                                                      ((0xebU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0x2c64000U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_241)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_779 
        = ((0x104U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0x2abf108U
            : ((0x103U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                     >> 1U))) ? 0x2b9f10fU
                : ((0x102U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                         >> 1U))) ? 0x2b5f10dU
                    : ((0x101U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                             >> 1U)))
                        ? 0x2b1f10bU : ((0x100U == 
                                         (0x1ffU & 
                                          (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                           >> 1U)))
                                         ? 0x2adf109U
                                         : ((0xffU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x283f101U
                                             : ((0xfeU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x20000U
                                                 : 
                                                ((0xfdU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x2021131U
                                                  : 
                                                 ((0xfcU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x285f104U
                                                   : 
                                                  ((0xfbU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x20000U
                                                    : 
                                                   ((0xfaU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0xcc0000cU
                                                     : 
                                                    ((0xf9U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0xf0080000U
                                                      : 
                                                     ((0xf8U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x1c410ffU
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_766)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_267 
        = ((0x104U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0x293f107U
            : ((0x103U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                     >> 1U))) ? 0x2b7f10eU
                : ((0x102U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                         >> 1U))) ? 0x2b3f10cU
                    : ((0x101U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                             >> 1U)))
                        ? 0x2aff10aU : ((0x100U == 
                                         (0x1ffU & 
                                          (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                           >> 1U)))
                                         ? 0x400000U
                                         : ((0xffU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x43000U
                                             : ((0xfeU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0xcffff7bU
                                                 : 
                                                ((0xfdU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x400000U
                                                  : 
                                                 ((0xfcU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x283f100U
                                                   : 
                                                  ((0xfbU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2c25101U
                                                    : 
                                                   ((0xfaU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x20230b1U
                                                     : 
                                                    ((0xf9U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x87ca0000U
                                                      : 
                                                     ((0xf8U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x202200bU
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_254)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_792 
        = ((0x111U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0xcc00012U
            : ((0x110U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                     >> 1U))) ? 0x1021001U
                : ((0x10fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                         >> 1U))) ? 0x2822100U
                    : ((0x10eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                             >> 1U)))
                        ? 0x87c40000U : ((0x10dU == 
                                          (0x1ffU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                                          ? 0x20220b1U
                                          : ((0x10cU 
                                              == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                              ? 0x2842100U
                                              : ((0x10bU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x20404U
                                                  : 
                                                 ((0x10aU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x20000U
                                                   : 
                                                  ((0x109U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x1a4U
                                                    : 
                                                   ((0x108U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x2409020U
                                                     : 
                                                    ((0x107U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x6400000U
                                                      : 
                                                     ((0x106U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x2409027U
                                                       : 
                                                      ((0x105U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0x293f106U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_779)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_280 
        = ((0x111U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0x2021466U
            : ((0x110U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                     >> 1U))) ? 0x400000U
                : ((0x10fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                         >> 1U))) ? 0x20408U
                    : ((0x10eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                             >> 1U)))
                        ? 0xc800055U : ((0x10dU == 
                                         (0x1ffU & 
                                          (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                           >> 1U)))
                                         ? 0x24c0030U
                                         : ((0x10cU 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x2821100U
                                             : ((0x10bU 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x87c40000U
                                                 : 
                                                ((0x10aU 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x87c20000U
                                                  : 
                                                 ((0x109U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x3ff040U
                                                   : 
                                                  ((0x108U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x400000U
                                                    : 
                                                   ((0x107U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x293f105U
                                                     : 
                                                    ((0x106U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x400000U
                                                      : 
                                                     ((0x105U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x2409028U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_267)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_805 
        = ((0x11eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0x2022060U
            : ((0x11dU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                     >> 1U))) ? 0x2021060U
                : ((0x11cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                         >> 1U))) ? 0x400000U
                    : ((0x11bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                             >> 1U)))
                        ? 0xf0080000U : ((0x11aU == 
                                          (0x1ffU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                            >> 1U)))
                                          ? 0x1c41001U
                                          : ((0x119U 
                                              == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                              ? 0xff00U
                                              : ((0x118U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x20408U
                                                  : 
                                                 ((0x117U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x2821081U
                                                   : 
                                                  ((0x116U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x87c20000U
                                                    : 
                                                   ((0x115U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x2021060U
                                                     : 
                                                    ((0x114U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x400000U
                                                      : 
                                                     ((0x113U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0xf0080000U
                                                       : 
                                                      ((0x112U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0x2c42080U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_792)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_293 
        = ((0x11eU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0xcbffffaU
            : ((0x11dU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                     >> 1U))) ? 0x1c21002U
                : ((0x11cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                         >> 1U))) ? 0x2821080U
                    : ((0x11bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                             >> 1U)))
                        ? 0x87c20000U : ((0x11aU == 
                                          (0x1ffU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                            >> 1U)))
                                          ? 0x2c42080U
                                          : ((0x119U 
                                              == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                              ? 0x87c21006U
                                              : ((0x118U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x87c40000U
                                                  : 
                                                 ((0x117U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0xf0080000U
                                                   : 
                                                  ((0x116U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0xcbffffaU
                                                    : 
                                                   ((0x115U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x1c21002U
                                                     : 
                                                    ((0x114U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x2821080U
                                                      : 
                                                     ((0x113U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x87c20000U
                                                       : 
                                                      ((0x112U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0x400000U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_280)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_818 
        = ((0x12bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0x2862081U
            : ((0x12aU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                     >> 1U))) ? 0x87c40000U
                : ((0x129U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                         >> 1U))) ? 0x2022060U
                    : ((0x128U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                             >> 1U)))
                        ? 0x400000U : ((0x127U == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                        ? 0xf0080000U
                                        : ((0x126U 
                                            == (0x1ffU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                   >> 1U)))
                                            ? 0x2c42080U
                                            : ((0x125U 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                                ? 0x4c00026U
                                                : (
                                                   (0x124U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x2d44080U
                                                    : 
                                                   ((0x123U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x87c83000U
                                                     : 
                                                    ((0x122U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x2862100U
                                                      : 
                                                     ((0x121U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0x87c40000U
                                                       : 
                                                      ((0x120U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0x2821081U
                                                        : 
                                                       ((0x11fU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0xf0080000U
                                                         : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_805)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_306 
        = ((0x12bU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0xf0080000U
            : ((0x12aU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                     >> 1U))) ? 0xcbffffaU
                : ((0x129U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                         >> 1U))) ? 0x1c42002U
                    : ((0x128U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                             >> 1U)))
                        ? 0x2842080U : ((0x127U == 
                                         (0x1ffU & 
                                          (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                           >> 1U)))
                                         ? 0x87c40000U
                                         : ((0x126U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                    >> 1U)))
                                             ? 0x1c213ffU
                                             : ((0x125U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                                 ? 0x23001U
                                                 : 
                                                ((0x124U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                                  ? 0x20004U
                                                  : 
                                                 ((0x123U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x400000U
                                                   : 
                                                  ((0x122U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x20000U
                                                    : 
                                                   ((0x121U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x400000U
                                                     : 
                                                    ((0x120U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0xcc0000eU
                                                      : 
                                                     ((0x11fU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x87c20000U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_293)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_831 
        = ((0x138U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0x87c40000U
            : ((0x137U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                     >> 1U))) ? 0x20000U
                : ((0x136U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                         >> 1U))) ? 0x1c423ffU
                    : ((0x135U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                             >> 1U)))
                        ? 0xcfffff7U : ((0x134U == 
                                         (0x1ffU & 
                                          (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                           >> 1U)))
                                         ? 0x20211b2U
                                         : ((0x133U 
                                             == (0x1ffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                    >> 1U)))
                                             ? 0x20004U
                                             : ((0x132U 
                                                 == 
                                                 (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                     >> 1U)))
                                                 ? 0x2884900U
                                                 : 
                                                ((0x131U 
                                                  == 
                                                  (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                      >> 1U)))
                                                  ? 0x87c84000U
                                                  : 
                                                 ((0x130U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0x63002U
                                                   : 
                                                  ((0x12fU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0x1c6303fU
                                                    : 
                                                   ((0x12eU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0x20000U
                                                     : 
                                                    ((0x12dU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0x2022086U
                                                      : 
                                                     ((0x12cU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0xc43002U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_818)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_319 
        = ((0x138U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0x2c41100U
            : ((0x137U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                     >> 1U))) ? 0x87c20000U
                : ((0x136U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                         >> 1U))) ? 0x42001U
                    : ((0x135U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                             >> 1U)))
                        ? 0x21001U : ((0x134U == (0x1ffU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                     >> 1U)))
                                       ? 0x2d45200U
                                       : ((0x133U == 
                                           (0x1ffU 
                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                               >> 1U)))
                                           ? 0x87ca2000U
                                           : ((0x132U 
                                               == (0x1ffU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                      >> 1U)))
                                               ? 0x20004U
                                               : ((0x131U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0x1c813ffU
                                                   : 
                                                  ((0x130U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0x2063080U
                                                    : 
                                                   ((0x12fU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0x2842100U
                                                     : 
                                                    ((0x12eU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0x87c40000U
                                                      : 
                                                     ((0x12dU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0x1c42300U
                                                       : 
                                                      ((0x12cU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0x400000U
                                                        : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_306)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_844 
        = ((0x145U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x144U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x143U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x142U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x141U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x140U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x13fU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x13eU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x13dU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0x2c42180U
                                                          : 
                                                         ((0x13cU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0x6400000U
                                                           : 
                                                          ((0x13bU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0x63001U
                                                            : 
                                                           ((0x13aU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0x87c23000U
                                                             : 
                                                            ((0x139U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0x2862100U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_831)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_332 
        = ((0x145U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x144U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x143U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x142U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x141U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x140U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x13fU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x13eU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0x2406020U
                                                         : 
                                                        ((0x13dU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0x2821900U
                                                          : 
                                                         ((0x13cU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0x1c633ffU
                                                           : 
                                                          ((0x13bU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0x20004U
                                                            : 
                                                           ((0x13aU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0x400000U
                                                             : 
                                                            ((0x139U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0x20404U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_319)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_857 
        = ((0x152U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x151U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x150U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x14fU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x14eU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x14dU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x14cU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x14bU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x14aU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x149U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x148U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x147U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x146U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_844)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_345 
        = ((0x152U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x151U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x150U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x14fU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x14eU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x14dU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x14cU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x14bU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x14aU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x149U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x148U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x147U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x146U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_332)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_870 
        = ((0x15fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x15eU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x15dU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x15cU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x15bU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x15aU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x159U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x158U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x157U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x156U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x155U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x154U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x153U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_857)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_358 
        = ((0x15fU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x15eU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x15dU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x15cU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x15bU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x15aU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x159U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x158U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x157U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x156U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x155U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x154U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x153U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_345)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_883 
        = ((0x16cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x16bU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x16aU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x169U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x168U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x167U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x166U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x165U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x164U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x163U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x162U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x161U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x160U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_870)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_371 
        = ((0x16cU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x16bU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x16aU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x169U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x168U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x167U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x166U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x165U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x164U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x163U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x162U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x161U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x160U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_358)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_896 
        = ((0x179U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x178U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x177U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x176U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x175U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x174U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x173U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x172U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x171U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x170U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x16fU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x16eU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x16dU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_883)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_384 
        = ((0x179U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x178U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x177U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x176U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x175U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x174U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x173U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x172U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x171U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x170U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x16fU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x16eU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x16dU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_371)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_909 
        = ((0x186U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x185U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x184U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x183U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x182U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x181U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x180U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x17fU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x17eU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x17dU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x17cU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x17bU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x17aU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_896)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_397 
        = ((0x186U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x185U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x184U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x183U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x182U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x181U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x180U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x17fU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x17eU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x17dU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x17cU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x17bU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x17aU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_384)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_922 
        = ((0x193U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x192U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x191U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x190U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x18fU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x18eU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x18dU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x18cU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x18bU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x18aU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x189U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x188U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x187U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_909)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_410 
        = ((0x193U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x192U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x191U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x190U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x18fU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x18eU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x18dU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x18cU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x18bU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x18aU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x189U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x188U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x187U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_397)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_935 
        = ((0x1a0U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x19fU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x19eU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x19dU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x19cU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x19bU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x19aU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x199U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x198U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x197U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x196U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x195U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x194U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_922)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_423 
        = ((0x1a0U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x19fU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x19eU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x19dU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x19cU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x19bU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x19aU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x199U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x198U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x197U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x196U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x195U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x194U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_410)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_948 
        = ((0x1adU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x1acU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1abU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1aaU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1a9U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1a8U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1a7U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1a6U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1a5U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1a4U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1a3U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1a2U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1a1U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_935)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_436 
        = ((0x1adU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x1acU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1abU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1aaU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1a9U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1a8U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1a7U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1a6U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1a5U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1a4U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1a3U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1a2U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1a1U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_423)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_961 
        = ((0x1baU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x1b9U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1b8U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1b7U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1b6U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1b5U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1b4U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1b3U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1b2U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1b1U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1b0U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1afU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1aeU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_948)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_449 
        = ((0x1baU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x1b9U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1b8U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1b7U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1b6U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1b5U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1b4U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1b3U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1b2U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1b1U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1b0U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1afU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1aeU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_436)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_974 
        = ((0x1c7U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x1c6U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1c5U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1c4U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1c3U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1c2U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1c1U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1c0U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1bfU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1beU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1bdU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1bcU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1bbU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_961)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_462 
        = ((0x1c7U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x1c6U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1c5U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1c4U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1c3U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1c2U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1c1U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1c0U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1bfU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1beU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1bdU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1bcU 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1bbU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_449)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_987 
        = ((0x1d4U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x1d3U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1d2U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1d1U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1d0U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1cfU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1ceU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1cdU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1ccU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1cbU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1caU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1c9U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1c8U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_974)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_475 
        = ((0x1d4U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x1d3U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1d2U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1d1U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1d0U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1cfU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1ceU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1cdU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1ccU 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1cbU 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1caU 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1c9U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1c8U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_462)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_1000 
        = ((0x1e1U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x1e0U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1dfU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1deU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1ddU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1dcU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1dbU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1daU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1d9U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1d8U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1d7U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1d6U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1d5U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_987)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_488 
        = ((0x1e1U == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x1e0U 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1dfU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1deU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1ddU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1dcU 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1dbU 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1daU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1d9U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1d8U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1d7U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1d6U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1d5U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_475)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_1013 
        = ((0x1eeU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x1edU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1ecU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1ebU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1eaU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1e9U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1e8U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1e7U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1e6U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1e5U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1e4U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1e3U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1e2U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_1000)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_501 
        = ((0x1eeU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x1edU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1ecU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1ebU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1eaU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1e9U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1e8U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1e7U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1e6U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1e5U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1e4U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1e3U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1e2U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_488)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_1026 
        = ((0x1fbU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                 >> 1U))) ? 0U : ((0x1faU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1f9U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1f8U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1f7U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1f6U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1f5U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1f4U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1f3U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1f2U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1f1U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1f0U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1efU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_1013)))))))))))));
    vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_514 
        = ((0x1fbU == (0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                 >> 1U))) ? 0U : ((0x1faU 
                                                   == 
                                                   (0x1ffU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                       >> 1U)))
                                                   ? 0U
                                                   : 
                                                  ((0x1f9U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((0x1f8U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((0x1f7U 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                          >> 1U)))
                                                      ? 0U
                                                      : 
                                                     ((0x1f6U 
                                                       == 
                                                       (0x1ffU 
                                                        & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                           >> 1U)))
                                                       ? 0U
                                                       : 
                                                      ((0x1f5U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                            >> 1U)))
                                                        ? 0U
                                                        : 
                                                       ((0x1f4U 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                             >> 1U)))
                                                         ? 0U
                                                         : 
                                                        ((0x1f3U 
                                                          == 
                                                          (0x1ffU 
                                                           & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                              >> 1U)))
                                                          ? 0U
                                                          : 
                                                         ((0x1f2U 
                                                           == 
                                                           (0x1ffU 
                                                            & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                               >> 1U)))
                                                           ? 0U
                                                           : 
                                                          ((0x1f1U 
                                                            == 
                                                            (0x1ffU 
                                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                >> 1U)))
                                                            ? 0U
                                                            : 
                                                           ((0x1f0U 
                                                             == 
                                                             (0x1ffU 
                                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                 >> 1U)))
                                                             ? 0U
                                                             : 
                                                            ((0x1efU 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                                                  >> 1U)))
                                                              ? 0U
                                                              : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_501)))))))))))));
}

void VPatmos::_eval(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_eval\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->clock)) & (IData)(vlTOPp->__Vclklast__TOP__clock))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->__Vm_traceActivity[1U] = 1U;
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((IData)(vlTOPp->clock) ^ (IData)(vlTOPp->__Vclklast__TOP__clock))) {
        vlTOPp->_multiclk__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VPatmos::_change_request(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_change_request\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPatmos::_change_request_1(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_change_request_1\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPatmos::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_Keys_key & 0xf0U))) {
        Verilated::overWidthError("io_Keys_key");}
    if (VL_UNLIKELY((io_UartCmp_rx & 0xfeU))) {
        Verilated::overWidthError("io_UartCmp_rx");}
}
#endif  // VL_DEBUG
